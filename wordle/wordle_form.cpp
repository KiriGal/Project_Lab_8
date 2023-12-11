#include "wordle_form.h"
#include <Windows.h>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <cctype>
#include <map>
#include <vector>
#include <iostream>
#include <ctime>


using namespace System;
using namespace System::Text;
using namespace System::Drawing;
using namespace System::Windows::Forms;

std::string* masWords = new std::string[96419];
std::map<int, std::string> virtualCodeToLetterMap;
int currentPos = 0;
bool flagure;
bool stopGame = false;
bool statusResult = false;
int keyInt = 0;
std::string trueWord = "ПРИВЕТС";
HHOOK keyboardHook;



std::string initializeVirtualCodeToLetterMap(int numKey = 0) {
    virtualCodeToLetterMap[0x41] = "Ф";
    virtualCodeToLetterMap[0x42] = "И";
    virtualCodeToLetterMap[0x43] = "С";
    virtualCodeToLetterMap[0x44] = "В";
    virtualCodeToLetterMap[0x45] = "У";
    virtualCodeToLetterMap[0x46] = "А";
    virtualCodeToLetterMap[0x47] = "П";
    virtualCodeToLetterMap[0x48] = "Р";
    virtualCodeToLetterMap[0x49] = "Ш";
    virtualCodeToLetterMap[0x4A] = "О";
    virtualCodeToLetterMap[0x4B] = "Л";
    virtualCodeToLetterMap[0x4C] = "Д";
    virtualCodeToLetterMap[0x4D] = "Ь";
    virtualCodeToLetterMap[0x4E] = "Т";
    virtualCodeToLetterMap[0x4F] = "Щ";
    virtualCodeToLetterMap[0x50] = "З";
    virtualCodeToLetterMap[0x51] = "Й";
    virtualCodeToLetterMap[0x52] = "К";
    virtualCodeToLetterMap[0x53] = "Ы";
    virtualCodeToLetterMap[0x54] = "Е";
    virtualCodeToLetterMap[0x55] = "Г";
    virtualCodeToLetterMap[0x56] = "М";
    virtualCodeToLetterMap[0x57] = "Ц";
    virtualCodeToLetterMap[0x58] = "Ч";
    virtualCodeToLetterMap[0x59] = "Н";
    virtualCodeToLetterMap[0x5A] = "Я";
    virtualCodeToLetterMap[190] = "Ю";
    virtualCodeToLetterMap[188] = "Б";
    virtualCodeToLetterMap[222] = "Э";
    virtualCodeToLetterMap[186] = "Ж";
    virtualCodeToLetterMap[221] = "Ъ";
    virtualCodeToLetterMap[219] = "Х";

    return virtualCodeToLetterMap[numKey];
}

String^ convertToSystemString(const std::string& str) {
    array<unsigned char>^ bytes = gcnew array<unsigned char>(str.length());
    for (int i = 0; i < str.length(); i++) {
        bytes[i] = static_cast<unsigned char>(str[i]);
    }
    Encoding^ encoding = Encoding::GetEncoding(1251);
    return encoding->GetString(bytes);
}

void ConvertSystemStringToStdString(String^ s, std::string& os)
{
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}

System::String^ InsertIntoSystemString(System::String^ original, System::String^ toInsert, int position)
{
    System::Text::StringBuilder^ builder = gcnew System::Text::StringBuilder(original);
    builder->Insert(position, toInsert);
    return builder->ToString();
}



void getMasWords() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream inf("russian.txt");
    std::string strInput;
    int i = 0;
    while (inf >> strInput)
    {
        if (strInput.length() == 7) {
            for (char& c : strInput)
            {
                c = toupper(c);
            }
            masWords[i++] = strInput;
        }

    }
}

void clearTextBox(bool flag = false) {
    if (flag) {
        currentPos = 0;
        keyInt = 0;
        wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
        
        for each (Control ^ control in form->Controls)
        {
            TextBox^ textBox = dynamic_cast<TextBox^>(control);
            if (textBox != nullptr)
            {
                textBox->Text = "";
                textBox->BackColor = Color().Gray;
            }
        }
    }
}

void clearString(int line = 0) {
    wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
    int posString = 0;

    for each (Control ^ control in form->Controls)
    {
        TextBox^ textBox = dynamic_cast<TextBox^>(control);
        if (textBox != nullptr)
        {
            if (posString/7 == 4 - line) {
                textBox->Text = "";
                textBox->BackColor = Color().Gray;
            }
            posString += 1;
        }
    }

    form->textStatus->Text = "Несуществующее слово";
    form->textStatus->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 26);
    currentPos -= 7;
}

std::string getWordForLine(int line = 0) {
    wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
    int posString = 0;
    std::string word = "";
    std::string exam;

    for each (Control ^ control in form->Controls)
    {
        TextBox^ textBox = dynamic_cast<TextBox^>(control);
        if (textBox != nullptr)
        {
            if (posString / 7 == 4 - line) {
                ConvertSystemStringToStdString(textBox->Text, exam);
                word.insert(0, exam, 0, 1);
            }
            posString += 1;
        }
    }

    return word;
}

void endWinGame() {
    if (keyboardHook != NULL) {
        UnhookWindowsHookEx(keyboardHook);
        keyboardHook = NULL;
    }
    wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
    form->textStatus->Text = "Congratulations!";
    form->textStatus->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 30);
}

void endLoseGame() {
    if (keyboardHook != NULL) {
        UnhookWindowsHookEx(keyboardHook);
        keyboardHook = NULL;
    }
    wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
    form->textStatus->Text = "You Loser";
    form->textStatus->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 30);
}

bool isWordExist(int line = 0) {
    std::string word = getWordForLine(line);
    
    for (int i = 0; i < 96419; i++) {
        int indicator = 0;
        for (int k = 0; k < 7; k++) {
            if (masWords[i][k] != word[k])break;
            indicator++;
        }
        if (indicator == 7) {
            return true;
        }
    }

    return false;
}

bool compareWord(std::string Word, std::string Word1) {
    for (int k = 0; k < 7; k++) {
        if (Word[k] != Word1[k])return false;
    }

    return true;
}

int checkSymbol(String^ symbol, int position = 0) {
    String^ systemString = convertToSystemString(trueWord);
    if (position == 6) {
        if (!isWordExist(currentPos / 7))clearString(currentPos / 7);
        if (isWordExist(currentPos / 7) && compareWord(trueWord, getWordForLine(currentPos / 7)))endWinGame();
    }
    if (position == 6 && currentPos/7 == 4)if (isWordExist(currentPos / 7) && !compareWord(trueWord, getWordForLine(currentPos/7)))endLoseGame();

    if (systemString[position] == symbol[0])return 1;
    for (int i = 0; i < 7; i++) {
        if (systemString[i] == symbol[0])return 2;
    }
    return 0;
}

void generateTrueWord() {
    std::srand(std::time(nullptr));
    trueWord = masWords[std::rand() % 96419];
    for (char& c : trueWord)
    {
        c = toupper(c);
        if (c == 'я')c = 'Я';
    }
}

bool isRussianAlpha(std::string str) {
    for (char sim : str) {
        if (static_cast<unsigned char>(sim) >= 192 && static_cast<unsigned char>(sim) <= 255) {
            return true;
        }
    }
    
    return false;
}

// Глобальный перехватчик клавиатуры
LRESULT CALLBACK KeyboardHookProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION) {
        KBDLLHOOKSTRUCT* pKeyboardStruct = (KBDLLHOOKSTRUCT*)lParam;
        if (pKeyboardStruct->vkCode == keyInt)flagure = false; else flagure = true;
        if (flagure && !stopGame && isRussianAlpha(initializeVirtualCodeToLetterMap(pKeyboardStruct->vkCode))) {
            
            keyInt = pKeyboardStruct->vkCode;
            wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
            std::string ch = virtualCodeToLetterMap[pKeyboardStruct->vkCode];
            form->textStatus->Text = convertToSystemString(trueWord);
            form->textStatus->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 30);
            String^ systemString = convertToSystemString(ch);

            TextBox^ textBox;

            switch (currentPos) {
                case 0:
                    textBox = form->box1_forStr7;
                    break;
                case 1:
                    textBox = form->box2_forStr7;
                    break;
                case 2:
                    textBox = form->box3_forStr7;
                    break;
                case 3:
                    textBox = form->box4_forStr7;
                    break;
                case 4:
                    textBox = form->box5_forStr7;
                    break;
                case 5:
                    textBox = form->box6_forStr7;
                    break;
                case 6:
                    textBox = form->box7_forStr7;
                    break;

                case 7:
                    textBox = form->textBox7;
                    break;
                case 8:
                    textBox = form->textBox6;
                    break;
                case 9:
                    textBox = form->textBox5;
                    break;
                case 10:
                    textBox = form->textBox4;
                    break;
                case 11:
                    textBox = form->textBox3;
                    break;
                case 12:
                    textBox = form->textBox2;
                    break;
                case 13:
                    textBox = form->textBox1;
                    break;

                case 14:
                    textBox = form->textBox14;
                    break;
                case 15:
                    textBox = form->textBox13;
                    break;
                case 16:
                    textBox = form->textBox12;
                    break;
                case 17:
                    textBox = form->textBox11;
                    break;
                case 18:
                    textBox = form->textBox10;
                    break;
                case 19:
                    textBox = form->textBox9;
                    break;
                case 20:
                    textBox = form->textBox8;
                    break;

                case 21:
                    textBox = form->textBox21;
                    break;
                case 22:
                    textBox = form->textBox20;
                    break;
                case 23:
                    textBox = form->textBox19;
                    break;
                case 24:
                    textBox = form->textBox18;
                    break;
                case 25:
                    textBox = form->textBox17;
                    break;
                case 26:
                    textBox = form->textBox16;
                    break;
                case 27:
                    textBox = form->textBox15;
                    break;

                case 28:
                    textBox = form->textBox28;
                    break;
                case 29:
                    textBox = form->textBox27;
                    break;
                case 30:
                    textBox = form->textBox26;
                    break;
                case 31:
                    textBox = form->textBox25;
                    break;
                case 32:
                    textBox = form->textBox24;
                    break;
                case 33:
                    textBox = form->textBox23;
                    break;
                case 34:
                    textBox = form->textBox22;
                    break;
            }

            textBox->Text = systemString;
            switch (checkSymbol(systemString, currentPos % 7)) {
                case 0:
                    textBox->BackColor = Color().Gray;
                    break;
                case 1:
                    textBox->BackColor = Color().Green;
                    break;
                case 2:
                    textBox->BackColor = Color().Yellow;
                    break;
            }

            currentPos = (currentPos + 1) % 35;
        }
    }
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

void buttonClickEventHandler(Object^ sender, EventArgs^ e)
{
    generateTrueWord();
    UnhookWindowsHookEx(keyboardHook);
    keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardHookProc, NULL, 0);
    wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
    form->textStatus->Text = convertToSystemString(trueWord);
    clearTextBox(true);
}

[STAThreadAttribute]
int main(array<String^>^ args) {
    getMasWords();
    generateTrueWord();
    initializeVirtualCodeToLetterMap();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();

    // Установка глобального перехватчика клавиатуры
    keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardHookProc, NULL, 0);

    wordle::wordle_form^ form = gcnew wordle::wordle_form();

    form->newWordBtn->Click += gcnew EventHandler(buttonClickEventHandler);
    Application::Run(form);

    // Освобождение перехватчика клавиатуры
    UnhookWindowsHookEx(keyboardHook);

    return 0;
}