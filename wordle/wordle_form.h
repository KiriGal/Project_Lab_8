#pragma once

namespace wordle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для wordle_form
	/// </summary>
	public ref class wordle_form : public System::Windows::Forms::Form
	{
	public:
		wordle_form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~wordle_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelBorder;
	private: System::Windows::Forms::Button^ closeBtn;
	private: System::Windows::Forms::Button^ collapseBtn;
	private: System::Windows::Forms::PictureBox^ icon;
	private: System::Windows::Forms::Label^ formName;




























	private: System::Windows::Forms::Button^ newWordBtn;
	private: System::Windows::Forms::Label^ textStatus;
	private: System::Windows::Forms::TextBox^ box6_forStr7;
	private: System::Windows::Forms::TextBox^ box5_forStr7;
	private: System::Windows::Forms::TextBox^ box4_forStr7;
	private: System::Windows::Forms::TextBox^ box3_forStr7;
	private: System::Windows::Forms::TextBox^ box2_forStr7;
	private: System::Windows::Forms::TextBox^ box1_forStr7;
	private: System::Windows::Forms::TextBox^ box7_forStr7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;











	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(wordle_form::typeid));
			this->box6_forStr7 = (gcnew System::Windows::Forms::TextBox());
			this->box5_forStr7 = (gcnew System::Windows::Forms::TextBox());
			this->box4_forStr7 = (gcnew System::Windows::Forms::TextBox());
			this->box3_forStr7 = (gcnew System::Windows::Forms::TextBox());
			this->box2_forStr7 = (gcnew System::Windows::Forms::TextBox());
			this->box1_forStr7 = (gcnew System::Windows::Forms::TextBox());
			this->box7_forStr7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->panelBorder = (gcnew System::Windows::Forms::Panel());
			this->collapseBtn = (gcnew System::Windows::Forms::Button());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->formName = (gcnew System::Windows::Forms::Label());
			this->icon = (gcnew System::Windows::Forms::PictureBox());
			this->newWordBtn = (gcnew System::Windows::Forms::Button());
			this->textStatus = (gcnew System::Windows::Forms::Label());
			this->panelBorder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon))->BeginInit();
			this->SuspendLayout();
			// 
			// box6_forStr7
			// 
			this->box6_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box6_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box6_forStr7->Location = System::Drawing::Point(309, 49);
			this->box6_forStr7->Margin = System::Windows::Forms::Padding(5);
			this->box6_forStr7->MaxLength = 1;
			this->box6_forStr7->Multiline = true;
			this->box6_forStr7->Name = L"box6_forStr7";
			this->box6_forStr7->Size = System::Drawing::Size(50, 50);
			this->box6_forStr7->TabIndex = 21;
			this->box6_forStr7->Text = L"F";
			this->box6_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box6_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box5_forStr7
			// 
			this->box5_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box5_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box5_forStr7->Location = System::Drawing::Point(249, 49);
			this->box5_forStr7->Margin = System::Windows::Forms::Padding(5);
			this->box5_forStr7->MaxLength = 1;
			this->box5_forStr7->Multiline = true;
			this->box5_forStr7->Name = L"box5_forStr7";
			this->box5_forStr7->Size = System::Drawing::Size(50, 50);
			this->box5_forStr7->TabIndex = 20;
			this->box5_forStr7->Text = L"E";
			this->box5_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box5_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box4_forStr7
			// 
			this->box4_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box4_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box4_forStr7->Location = System::Drawing::Point(189, 49);
			this->box4_forStr7->Margin = System::Windows::Forms::Padding(5);
			this->box4_forStr7->MaxLength = 1;
			this->box4_forStr7->Multiline = true;
			this->box4_forStr7->Name = L"box4_forStr7";
			this->box4_forStr7->Size = System::Drawing::Size(50, 50);
			this->box4_forStr7->TabIndex = 19;
			this->box4_forStr7->Text = L"D";
			this->box4_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box4_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box3_forStr7
			// 
			this->box3_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box3_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box3_forStr7->Location = System::Drawing::Point(129, 49);
			this->box3_forStr7->Margin = System::Windows::Forms::Padding(5);
			this->box3_forStr7->MaxLength = 1;
			this->box3_forStr7->Multiline = true;
			this->box3_forStr7->Name = L"box3_forStr7";
			this->box3_forStr7->Size = System::Drawing::Size(50, 50);
			this->box3_forStr7->TabIndex = 18;
			this->box3_forStr7->Text = L"C";
			this->box3_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box3_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box2_forStr7
			// 
			this->box2_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box2_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box2_forStr7->Location = System::Drawing::Point(69, 49);
			this->box2_forStr7->Margin = System::Windows::Forms::Padding(5);
			this->box2_forStr7->MaxLength = 1;
			this->box2_forStr7->Multiline = true;
			this->box2_forStr7->Name = L"box2_forStr7";
			this->box2_forStr7->Size = System::Drawing::Size(50, 50);
			this->box2_forStr7->TabIndex = 17;
			this->box2_forStr7->Text = L"B";
			this->box2_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box2_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box1_forStr7
			// 
			this->box1_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box1_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box1_forStr7->Location = System::Drawing::Point(9, 49);
			this->box1_forStr7->Margin = System::Windows::Forms::Padding(5);
			this->box1_forStr7->MaxLength = 1;
			this->box1_forStr7->Multiline = true;
			this->box1_forStr7->Name = L"box1_forStr7";
			this->box1_forStr7->Size = System::Drawing::Size(50, 50);
			this->box1_forStr7->TabIndex = 16;
			this->box1_forStr7->Text = L"A";
			this->box1_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box1_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box7_forStr7
			// 
			this->box7_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box7_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box7_forStr7->Location = System::Drawing::Point(369, 49);
			this->box7_forStr7->Margin = System::Windows::Forms::Padding(5);
			this->box7_forStr7->MaxLength = 1;
			this->box7_forStr7->Multiline = true;
			this->box7_forStr7->Name = L"box7_forStr7";
			this->box7_forStr7->Size = System::Drawing::Size(50, 50);
			this->box7_forStr7->TabIndex = 22;
			this->box7_forStr7->Text = L"F";
			this->box7_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box7_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox1->Location = System::Drawing::Point(369, 109);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->MaxLength = 1;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 50);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"F";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox2->Location = System::Drawing::Point(309, 109);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->MaxLength = 1;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 50);
			this->textBox2->TabIndex = 29;
			this->textBox2->Text = L"F";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox3->Location = System::Drawing::Point(249, 109);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->MaxLength = 1;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(50, 50);
			this->textBox3->TabIndex = 28;
			this->textBox3->Text = L"E";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox4->Location = System::Drawing::Point(189, 109);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->MaxLength = 1;
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(50, 50);
			this->textBox4->TabIndex = 27;
			this->textBox4->Text = L"D";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox5->Location = System::Drawing::Point(129, 109);
			this->textBox5->Margin = System::Windows::Forms::Padding(5);
			this->textBox5->MaxLength = 1;
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(50, 50);
			this->textBox5->TabIndex = 26;
			this->textBox5->Text = L"C";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox6->Location = System::Drawing::Point(69, 109);
			this->textBox6->Margin = System::Windows::Forms::Padding(5);
			this->textBox6->MaxLength = 1;
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(50, 50);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"B";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox7->Location = System::Drawing::Point(9, 109);
			this->textBox7->Margin = System::Windows::Forms::Padding(5);
			this->textBox7->MaxLength = 1;
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(50, 50);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"A";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox8->Location = System::Drawing::Point(369, 167);
			this->textBox8->Margin = System::Windows::Forms::Padding(5);
			this->textBox8->MaxLength = 1;
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(50, 50);
			this->textBox8->TabIndex = 37;
			this->textBox8->Text = L"F";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox9->Location = System::Drawing::Point(309, 167);
			this->textBox9->Margin = System::Windows::Forms::Padding(5);
			this->textBox9->MaxLength = 1;
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(50, 50);
			this->textBox9->TabIndex = 36;
			this->textBox9->Text = L"F";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox10->Location = System::Drawing::Point(249, 167);
			this->textBox10->Margin = System::Windows::Forms::Padding(5);
			this->textBox10->MaxLength = 1;
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(50, 50);
			this->textBox10->TabIndex = 35;
			this->textBox10->Text = L"E";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox11->Location = System::Drawing::Point(189, 167);
			this->textBox11->Margin = System::Windows::Forms::Padding(5);
			this->textBox11->MaxLength = 1;
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(50, 50);
			this->textBox11->TabIndex = 34;
			this->textBox11->Text = L"D";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox12->Location = System::Drawing::Point(129, 167);
			this->textBox12->Margin = System::Windows::Forms::Padding(5);
			this->textBox12->MaxLength = 1;
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(50, 50);
			this->textBox12->TabIndex = 33;
			this->textBox12->Text = L"C";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox13
			// 
			this->textBox13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox13->Location = System::Drawing::Point(69, 167);
			this->textBox13->Margin = System::Windows::Forms::Padding(5);
			this->textBox13->MaxLength = 1;
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(50, 50);
			this->textBox13->TabIndex = 32;
			this->textBox13->Text = L"B";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox14
			// 
			this->textBox14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox14->Location = System::Drawing::Point(9, 167);
			this->textBox14->Margin = System::Windows::Forms::Padding(5);
			this->textBox14->MaxLength = 1;
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(50, 50);
			this->textBox14->TabIndex = 31;
			this->textBox14->Text = L"A";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox15
			// 
			this->textBox15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox15->Location = System::Drawing::Point(369, 226);
			this->textBox15->Margin = System::Windows::Forms::Padding(5);
			this->textBox15->MaxLength = 1;
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(50, 50);
			this->textBox15->TabIndex = 44;
			this->textBox15->Text = L"F";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox16
			// 
			this->textBox16->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox16->Location = System::Drawing::Point(309, 226);
			this->textBox16->Margin = System::Windows::Forms::Padding(5);
			this->textBox16->MaxLength = 1;
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(50, 50);
			this->textBox16->TabIndex = 43;
			this->textBox16->Text = L"F";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox17
			// 
			this->textBox17->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox17->Location = System::Drawing::Point(249, 226);
			this->textBox17->Margin = System::Windows::Forms::Padding(5);
			this->textBox17->MaxLength = 1;
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(50, 50);
			this->textBox17->TabIndex = 42;
			this->textBox17->Text = L"E";
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox18
			// 
			this->textBox18->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox18->Location = System::Drawing::Point(189, 226);
			this->textBox18->Margin = System::Windows::Forms::Padding(5);
			this->textBox18->MaxLength = 1;
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(50, 50);
			this->textBox18->TabIndex = 41;
			this->textBox18->Text = L"D";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox19
			// 
			this->textBox19->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox19->Location = System::Drawing::Point(129, 226);
			this->textBox19->Margin = System::Windows::Forms::Padding(5);
			this->textBox19->MaxLength = 1;
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(50, 50);
			this->textBox19->TabIndex = 40;
			this->textBox19->Text = L"C";
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox20
			// 
			this->textBox20->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox20->Location = System::Drawing::Point(69, 226);
			this->textBox20->Margin = System::Windows::Forms::Padding(5);
			this->textBox20->MaxLength = 1;
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(50, 50);
			this->textBox20->TabIndex = 39;
			this->textBox20->Text = L"B";
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox20->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox21
			// 
			this->textBox21->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox21->Location = System::Drawing::Point(9, 226);
			this->textBox21->Margin = System::Windows::Forms::Padding(5);
			this->textBox21->MaxLength = 1;
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(50, 50);
			this->textBox21->TabIndex = 38;
			this->textBox21->Text = L"A";
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox22
			// 
			this->textBox22->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox22->Location = System::Drawing::Point(369, 285);
			this->textBox22->Margin = System::Windows::Forms::Padding(5);
			this->textBox22->MaxLength = 1;
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(50, 50);
			this->textBox22->TabIndex = 51;
			this->textBox22->Text = L"F";
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox23
			// 
			this->textBox23->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox23->Location = System::Drawing::Point(309, 285);
			this->textBox23->Margin = System::Windows::Forms::Padding(5);
			this->textBox23->MaxLength = 1;
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(50, 50);
			this->textBox23->TabIndex = 50;
			this->textBox23->Text = L"F";
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox24
			// 
			this->textBox24->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox24->Location = System::Drawing::Point(249, 285);
			this->textBox24->Margin = System::Windows::Forms::Padding(5);
			this->textBox24->MaxLength = 1;
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(50, 50);
			this->textBox24->TabIndex = 49;
			this->textBox24->Text = L"E";
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox25
			// 
			this->textBox25->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox25->Location = System::Drawing::Point(189, 285);
			this->textBox25->Margin = System::Windows::Forms::Padding(5);
			this->textBox25->MaxLength = 1;
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(50, 50);
			this->textBox25->TabIndex = 48;
			this->textBox25->Text = L"D";
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox26
			// 
			this->textBox26->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox26->Location = System::Drawing::Point(129, 285);
			this->textBox26->Margin = System::Windows::Forms::Padding(5);
			this->textBox26->MaxLength = 1;
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(50, 50);
			this->textBox26->TabIndex = 47;
			this->textBox26->Text = L"C";
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox26->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox27
			// 
			this->textBox27->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox27->Location = System::Drawing::Point(69, 285);
			this->textBox27->Margin = System::Windows::Forms::Padding(5);
			this->textBox27->MaxLength = 1;
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(50, 50);
			this->textBox27->TabIndex = 46;
			this->textBox27->Text = L"B";
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox27->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox28
			// 
			this->textBox28->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox28->Location = System::Drawing::Point(9, 285);
			this->textBox28->Margin = System::Windows::Forms::Padding(5);
			this->textBox28->MaxLength = 1;
			this->textBox28->Multiline = true;
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(50, 50);
			this->textBox28->TabIndex = 45;
			this->textBox28->Text = L"A";
			this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox28->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// panelBorder
			// 
			this->panelBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->panelBorder->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelBorder->Controls->Add(this->collapseBtn);
			this->panelBorder->Controls->Add(this->closeBtn);
			this->panelBorder->Controls->Add(this->formName);
			this->panelBorder->Controls->Add(this->icon);
			this->panelBorder->Location = System::Drawing::Point(0, 0);
			this->panelBorder->Margin = System::Windows::Forms::Padding(0);
			this->panelBorder->Name = L"panelBorder";
			this->panelBorder->Padding = System::Windows::Forms::Padding(5);
			this->panelBorder->Size = System::Drawing::Size(430, 40);
			this->panelBorder->TabIndex = 0;
			this->panelBorder->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseDown);
			this->panelBorder->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseMove);
			this->panelBorder->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseUp);
			// 
			// collapseBtn
			// 
			this->collapseBtn->FlatAppearance->BorderSize = 0;
			this->collapseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->collapseBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->collapseBtn->ForeColor = System::Drawing::Color::White;
			this->collapseBtn->Location = System::Drawing::Point(334, 8);
			this->collapseBtn->Name = L"collapseBtn";
			this->collapseBtn->Size = System::Drawing::Size(40, 25);
			this->collapseBtn->TabIndex = 1;
			this->collapseBtn->Text = L"—";
			this->collapseBtn->UseVisualStyleBackColor = false;
			this->collapseBtn->Click += gcnew System::EventHandler(this, &wordle_form::collapseBtn_Click);
			this->collapseBtn->MouseLeave += gcnew System::EventHandler(this, &wordle_form::collapseBtn_MouseLeave);
			this->collapseBtn->MouseHover += gcnew System::EventHandler(this, &wordle_form::collapseBtn_MouseHover);
			// 
			// closeBtn
			// 
			this->closeBtn->BackColor = System::Drawing::Color::Transparent;
			this->closeBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->closeBtn->FlatAppearance->BorderSize = 0;
			this->closeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->closeBtn->ForeColor = System::Drawing::Color::White;
			this->closeBtn->Location = System::Drawing::Point(380, 8);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(40, 25);
			this->closeBtn->TabIndex = 0;
			this->closeBtn->Text = L"✖";
			this->closeBtn->UseVisualStyleBackColor = false;
			this->closeBtn->Click += gcnew System::EventHandler(this, &wordle_form::closeBtn_Click);
			this->closeBtn->MouseLeave += gcnew System::EventHandler(this, &wordle_form::closeBtn_MouseLeave);
			this->closeBtn->MouseHover += gcnew System::EventHandler(this, &wordle_form::closeBtn_MouseHover);
			// 
			// formName
			// 
			this->formName->AutoSize = true;
			this->formName->BackColor = System::Drawing::Color::Transparent;
			this->formName->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->formName->ForeColor = System::Drawing::Color::White;
			this->formName->Location = System::Drawing::Point(41, 8);
			this->formName->Name = L"formName";
			this->formName->Size = System::Drawing::Size(78, 22);
			this->formName->TabIndex = 1;
			this->formName->Text = L"Wordle!";
			this->formName->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseDown);
			this->formName->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseMove);
			this->formName->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseUp);
			// 
			// icon
			// 
			this->icon->BackColor = System::Drawing::Color::Transparent;
			this->icon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icon.BackgroundImage")));
			this->icon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->icon->Location = System::Drawing::Point(5, 5);
			this->icon->Name = L"icon";
			this->icon->Size = System::Drawing::Size(30, 30);
			this->icon->TabIndex = 2;
			this->icon->TabStop = false;
			this->icon->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseDown);
			this->icon->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseMove);
			this->icon->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseUp);
			// 
			// newWordBtn
			// 
			this->newWordBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->newWordBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->newWordBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->newWordBtn->FlatAppearance->BorderSize = 5;
			this->newWordBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->newWordBtn->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newWordBtn->Location = System::Drawing::Point(0, 483);
			this->newWordBtn->Name = L"newWordBtn";
			this->newWordBtn->Size = System::Drawing::Size(430, 37);
			this->newWordBtn->TabIndex = 23;
			this->newWordBtn->Text = L"New Word";
			this->newWordBtn->UseVisualStyleBackColor = false;
			// 
			// textStatus
			// 
			this->textStatus->AutoSize = true;
			this->textStatus->BackColor = System::Drawing::Color::Transparent;
			this->textStatus->Font = (gcnew System::Drawing::Font(L"Arial", 40));
			this->textStatus->Location = System::Drawing::Point(5, 395);
			this->textStatus->Name = L"textStatus";
			this->textStatus->Size = System::Drawing::Size(421, 61);
			this->textStatus->TabIndex = 52;
			this->textStatus->Text = L"Congratulations!";
			// 
			// wordle_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(430, 520);
			this->Controls->Add(this->textStatus);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->newWordBtn);
			this->Controls->Add(this->box7_forStr7);
			this->Controls->Add(this->box6_forStr7);
			this->Controls->Add(this->box5_forStr7);
			this->Controls->Add(this->box4_forStr7);
			this->Controls->Add(this->box3_forStr7);
			this->Controls->Add(this->box2_forStr7);
			this->Controls->Add(this->box1_forStr7);
			this->Controls->Add(this->panelBorder);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"wordle_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"wordle_form";
			this->panelBorder->ResumeLayout(false);
			this->panelBorder->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// кнопка "закрытия"
	private: System::Void closeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void closeBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->closeBtn->BackColor = Color::Red;
		this->closeBtn->ForeColor = Color::Black;
	}
	private: System::Void closeBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->closeBtn->BackColor = Color::Transparent;
		this->closeBtn->ForeColor = Color::White;
	}
		// ********************
		
		// кнопка "свернуть"
	private: System::Void collapseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void collapseBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->collapseBtn->BackColor = Color::DarkCyan;
		this->collapseBtn->ForeColor = Color::Black;
		
	}
	private: System::Void collapseBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->collapseBtn->BackColor = Color::Transparent;
		this->collapseBtn->ForeColor = Color::White;
	}
		// ********************

		// для перемещения
	bool drag = false;
	Point start_point = Point(0, 0);

	private: System::Void panelBorder_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = true;
		start_point = Point(e->X, e->Y);
	}
	private: System::Void panelBorder_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (drag) {
			Point p = PointToScreen(e->Location);
			this->Location = Point(p.X - start_point.X, p.Y - start_point.Y);
		}
	}
	private: System::Void panelBorder_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = false;
	}
		// ********************

	
	
private: System::Void textBox22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	//проверка на ввод символов, чисел
	//два варианта, сам поймешь, какой для чего, если надо будет - используй

	Char ch = e->KeyChar;
	/*if (!(Char::IsLetter(ch) ||
		Char::IsSymbol(ch) ||
		Char::IsWhiteSpace(ch) ||
		Char::IsControl(ch))) { e->Handled = true; }*/

	/*if (!(ch >= L'A' && ch <= L'Z') ||
		!(Char::IsLetter(ch) ||
		Char::IsSymbol(ch) ||
		Char::IsControl(ch))) { e->Handled = true; }*/
	}
};
}
