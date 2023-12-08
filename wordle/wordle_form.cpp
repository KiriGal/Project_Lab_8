#include "wordle_form.h"






using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // main запускаем в отдельном потоке данных через атрибут

// array<String^>^ автоматическая отчистка памяти для WinForms
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles(); // подключаем визуальные стили
	wordle::wordle_form form; // создали объект на основе класса
	Application::Run(% form); // по ссылке в метод передаётся объект form (% для передачи по ссылке)
}