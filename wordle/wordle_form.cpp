#include "wordle_form.h"






using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // main ��������� � ��������� ������ ������ ����� �������

// array<String^>^ �������������� �������� ������ ��� WinForms
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles(); // ���������� ���������� �����
	wordle::wordle_form form; // ������� ������ �� ������ ������
	Application::Run(% form); // �� ������ � ����� ��������� ������ form (% ��� �������� �� ������)
}