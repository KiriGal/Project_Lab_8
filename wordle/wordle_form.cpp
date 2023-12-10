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
int keyInt = 0;
std::string trueWord = "ПРИВЕТС";



void initializeVirtualCodeToLetterMap() {
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
}

String^ convertToSystemString(const std::string& str) {
    array<unsigned char>^ bytes = gcnew array<unsigned char>(str.length());
    for (int i = 0; i < str.length(); i++) {
        bytes[i] = static_cast<unsigned char>(str[i]);
    }
    Encoding^ encoding = Encoding::GetEncoding(1251);
    return encoding->GetString(bytes);
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
        
        form->box1_forStr7->Text = "";
        form->box2_forStr7->Text = "";
        form->box3_forStr7->Text = "";
        form->box4_forStr7->Text = "";
        form->box5_forStr7->Text = "";
        form->box6_forStr7->Text = "";
        form->box7_forStr7->Text = "";

        form->textBox1->Text = "";
        form->textBox2->Text = "";
        form->textBox3->Text = "";
        form->textBox4->Text = "";
        form->textBox5->Text = "";
        form->textBox6->Text = "";
        form->textBox7->Text = "";

        form->textBox8->Text = "";
        form->textBox9->Text = "";
        form->textBox10->Text = "";
        form->textBox11->Text = "";
        form->textBox12->Text = "";
        form->textBox13->Text = "";
        form->textBox14->Text = "";

        form->textBox15->Text = "";
        form->textBox16->Text = "";
        form->textBox17->Text = "";
        form->textBox18->Text = "";
        form->textBox19->Text = "";
        form->textBox20->Text = "";
        form->textBox21->Text = "";
        
        form->textBox22->Text = "";
        form->textBox23->Text = "";
        form->textBox24->Text = "";
        form->textBox25->Text = "";
        form->textBox26->Text = "";
        form->textBox27->Text = "";
        form->textBox28->Text = "";
    }
}

int checkSymbol(String^ symbol, int position = 0) {
    /*if (trueWord[position] == symbol[0] && position == 6) {
        return 0;
    }*/
    String^ systemString = convertToSystemString(trueWord);
    if (systemString[position] == symbol[0])return 1;
    for (int i = 0; i < 7; i++) {
        if (systemString[i] == symbol[0])return 2;
    }
    return 0;
}

void endWinGame() {
    wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
    form->textStatus->Text = "Congratulations!";
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

// Глобальный перехватчик клавиатуры
LRESULT CALLBACK KeyboardHookProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION) {
        KBDLLHOOKSTRUCT* pKeyboardStruct = (KBDLLHOOKSTRUCT*)lParam;
        if (pKeyboardStruct->vkCode == keyInt)flagure = false; else flagure = true;
        if (flagure && !stopGame) {
            
            keyInt = pKeyboardStruct->vkCode;
            wordle::wordle_form^ form = dynamic_cast<wordle::wordle_form^>(Application::OpenForms[0]);
            std::string ch = virtualCodeToLetterMap[pKeyboardStruct->vkCode];
            form->textStatus->Text = convertToSystemString(trueWord);
            String^ systemString = convertToSystemString(ch);

            switch (currentPos) {
                case 0:
                    form->box1_forStr7->Text = systemString;
                    switch (checkSymbol(systemString, 0)) {
                        case 0:
                            form->box1_forStr7->BackColor = Color().Gray;
                            break;
                        case 1:
                            form->box1_forStr7->BackColor = Color().Green;
                            break;
                        case 2:
                            form->box1_forStr7->BackColor = Color().Yellow;
                            break;
                    }
                    break;
                case 1:
                    form->box2_forStr7->Text = systemString;
                    switch (checkSymbol(systemString, 1)) {
                    case 0:
                        form->box2_forStr7->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->box2_forStr7->BackColor = Color().Green;
                        break;
                    case 2:
                        form->box2_forStr7->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 2:
                    form->box3_forStr7->Text = systemString;
                    switch (checkSymbol(systemString, 2)) {
                    case 0:
                        form->box3_forStr7->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->box3_forStr7->BackColor = Color().Green;
                        break;
                    case 2:
                        form->box3_forStr7->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 3:
                    form->box4_forStr7->Text = systemString;
                    switch (checkSymbol(systemString, 3)) {
                    case 0:
                        form->box4_forStr7->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->box4_forStr7->BackColor = Color().Green;
                        break;
                    case 2:
                        form->box4_forStr7->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 4:
                    form->box5_forStr7->Text = systemString;
                    switch (checkSymbol(systemString, 4)) {
                    case 0:
                        form->box5_forStr7->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->box5_forStr7->BackColor = Color().Green;
                        break;
                    case 2:
                        form->box5_forStr7->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 5:
                    form->box6_forStr7->Text = systemString;
                    switch (checkSymbol(systemString, 5)) {
                    case 0:
                        form->box6_forStr7->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->box6_forStr7->BackColor = Color().Green;
                        break;
                    case 2:
                        form->box6_forStr7->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 6:
                    form->box7_forStr7->Text = systemString;
                    switch (checkSymbol(systemString, 6)) {
                    case 0:
                        form->box7_forStr7->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->box7_forStr7->BackColor = Color().Green;
                        break;
                    case 2:
                        form->box7_forStr7->BackColor = Color().Yellow;
                        break;
                    }
                    break;

                case 7:
                    form->textBox7->Text = systemString;
                    switch (checkSymbol(systemString, 0)) {
                    case 0:
                        form->textBox7->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox7->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox7->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 8:
                    form->textBox6->Text = systemString;
                    switch (checkSymbol(systemString, 1)) {
                    case 0:
                        form->textBox6->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox6->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox6->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 9:
                    form->textBox5->Text = systemString;
                    switch (checkSymbol(systemString, 2)) {
                    case 0:
                        form->textBox5->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox5->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox5->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 10:
                    form->textBox4->Text = systemString;
                    switch (checkSymbol(systemString, 3)) {
                    case 0:
                        form->textBox4->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox4->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox4->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 11:
                    form->textBox3->Text = systemString;
                    switch (checkSymbol(systemString, 4)) {
                    case 0:
                        form->textBox3->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox3->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox3->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 12:
                    form->textBox2->Text = systemString;
                    switch (checkSymbol(systemString, 5)) {
                    case 0:
                        form->textBox2->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox2->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox2->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 13:
                    form->textBox1->Text = systemString;
                    switch (checkSymbol(systemString, 6)) {
                    case 0:
                        form->textBox1->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox1->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox1->BackColor = Color().Yellow;
                        break;
                    }
                    break;

                case 14:
                    form->textBox14->Text = systemString;
                    switch (checkSymbol(systemString, 0)) {
                    case 0:
                        form->textBox14->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox14->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox14->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 15:
                    form->textBox13->Text = systemString;
                    switch (checkSymbol(systemString, 1)) {
                    case 0:
                        form->textBox13->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox13->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox13->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 16:
                    form->textBox12->Text = systemString;
                    switch (checkSymbol(systemString, 2)) {
                    case 0:
                        form->textBox12->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox12->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox12->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 17:
                    form->textBox11->Text = systemString;
                    switch (checkSymbol(systemString, 3)) {
                    case 0:
                        form->textBox11->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox11->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox11->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 18:
                    form->textBox10->Text = systemString;
                    switch (checkSymbol(systemString, 4)) {
                    case 0:
                        form->textBox10->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox10->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox10->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 19:
                    form->textBox9->Text = systemString;
                    switch (checkSymbol(systemString, 5)) {
                    case 0:
                        form->textBox9->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox9->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox9->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 20:
                    form->textBox8->Text = systemString;
                    switch (checkSymbol(systemString, 6)) {
                    case 0:
                        form->textBox8->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox8->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox8->BackColor = Color().Yellow;
                        break;
                    }
                    break;

                case 21:
                    form->textBox21->Text = systemString;
                    switch (checkSymbol(systemString, 0)) {
                    case 0:
                        form->textBox21->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox21->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox21->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 22:
                    form->textBox20->Text = systemString;
                    switch (checkSymbol(systemString, 1)) {
                    case 0:
                        form->textBox20->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox20->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox20->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 23:
                    form->textBox19->Text = systemString;
                    switch (checkSymbol(systemString, 2)) {
                    case 0:
                        form->textBox19->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox19->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox19->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 24:
                    form->textBox18->Text = systemString;
                    switch (checkSymbol(systemString, 3)) {
                    case 0:
                        form->textBox18->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox18->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox18->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 25:
                    form->textBox17->Text = systemString;
                    switch (checkSymbol(systemString, 4)) {
                    case 0:
                        form->textBox17->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox17->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox17->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 26:
                    form->textBox16->Text = systemString;
                    switch (checkSymbol(systemString, 5)) {
                    case 0:
                        form->textBox16->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox16->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox16->BackColor = Color().Yellow;
                        break;
                    }
                    break;
                case 27:
                    form->textBox15->Text = systemString;
                    switch (checkSymbol(systemString, 6)) {
                    case 0:
                        form->textBox15->BackColor = Color().Gray;
                        break;
                    case 1:
                        form->textBox15->BackColor = Color().Green;
                        break;
                    case 2:
                        form->textBox15->BackColor = Color().Yellow;
                        break;
                    }
                    break;
            }
            currentPos = (currentPos + 1) % 28;
        }
    }
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

void buttonClickEventHandler(Object^ sender, EventArgs^ e)
{
    generateTrueWord();
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
    HHOOK keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardHookProc, NULL, 0);

    wordle::wordle_form^ form = gcnew wordle::wordle_form();

    form->newWordBtn->Click += gcnew EventHandler(buttonClickEventHandler);
    Application::Run(form);

    // Освобождение перехватчика клавиатуры
    UnhookWindowsHookEx(keyboardHook);

    return 0;
}