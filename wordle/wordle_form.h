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
	public: System::Windows::Forms::Panel^ panelBorder;
	public: System::Windows::Forms::Button^ closeBtn;
	public: System::Windows::Forms::Button^ collapseBtn;
	public: System::Windows::Forms::PictureBox^ icon;
	public: System::Windows::Forms::Label^ formName;





	public: System::Windows::Forms::Button^ newWordBtn;
	public: System::Windows::Forms::Label^ textStatus;
	public: System::Windows::Forms::TextBox^ box6_forStr7;
	public: System::Windows::Forms::TextBox^ box5_forStr7;
	public: System::Windows::Forms::TextBox^ box4_forStr7;
	public: System::Windows::Forms::TextBox^ box3_forStr7;
	public: System::Windows::Forms::TextBox^ box2_forStr7;
	public: System::Windows::Forms::TextBox^ box1_forStr7;


	public: System::Windows::Forms::TextBox^ box7_forStr7;
	public: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::TextBox^ textBox2;
	public: System::Windows::Forms::TextBox^ textBox3;
	public: System::Windows::Forms::TextBox^ textBox4;
	public: System::Windows::Forms::TextBox^ textBox5;
	public: System::Windows::Forms::TextBox^ textBox6;
	public: System::Windows::Forms::TextBox^ textBox7;
	public: System::Windows::Forms::TextBox^ textBox8;
	public: System::Windows::Forms::TextBox^ textBox9;
	public: System::Windows::Forms::TextBox^ textBox10;
	public: System::Windows::Forms::TextBox^ textBox11;
	public: System::Windows::Forms::TextBox^ textBox12;
	public: System::Windows::Forms::TextBox^ textBox13;
	public: System::Windows::Forms::TextBox^ textBox14;
	public: System::Windows::Forms::TextBox^ textBox15;
	public: System::Windows::Forms::TextBox^ textBox16;
	public: System::Windows::Forms::TextBox^ textBox17;
	public: System::Windows::Forms::TextBox^ textBox18;
	public: System::Windows::Forms::TextBox^ textBox19;
	public: System::Windows::Forms::TextBox^ textBox20;
	public: System::Windows::Forms::TextBox^ textBox21;
	public: System::Windows::Forms::TextBox^ textBox22;
	public: System::Windows::Forms::TextBox^ textBox23;
	public: System::Windows::Forms::TextBox^ textBox24;
	public: System::Windows::Forms::TextBox^ textBox25;
	public: System::Windows::Forms::TextBox^ textBox26;
	public: System::Windows::Forms::TextBox^ textBox27;
	public: System::Windows::Forms::TextBox^ textBox28;









	public:
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
			this->box6_forStr7->BackColor = System::Drawing::Color::Gray;
			this->box6_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box6_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box6_forStr7->Location = System::Drawing::Point(464, 75);
			this->box6_forStr7->Margin = System::Windows::Forms::Padding(8);
			this->box6_forStr7->MaxLength = 1;
			this->box6_forStr7->Name = L"box6_forStr7";
			this->box6_forStr7->ReadOnly = true;
			this->box6_forStr7->Size = System::Drawing::Size(73, 75);
			this->box6_forStr7->TabIndex = 21;
			this->box6_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box6_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box5_forStr7
			// 
			this->box5_forStr7->BackColor = System::Drawing::Color::Gray;
			this->box5_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box5_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box5_forStr7->Location = System::Drawing::Point(374, 75);
			this->box5_forStr7->Margin = System::Windows::Forms::Padding(8);
			this->box5_forStr7->MaxLength = 1;
			this->box5_forStr7->Name = L"box5_forStr7";
			this->box5_forStr7->ReadOnly = true;
			this->box5_forStr7->Size = System::Drawing::Size(73, 75);
			this->box5_forStr7->TabIndex = 20;
			this->box5_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box5_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box4_forStr7
			// 
			this->box4_forStr7->BackColor = System::Drawing::Color::Gray;
			this->box4_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box4_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box4_forStr7->Location = System::Drawing::Point(284, 75);
			this->box4_forStr7->Margin = System::Windows::Forms::Padding(8);
			this->box4_forStr7->MaxLength = 1;
			this->box4_forStr7->Name = L"box4_forStr7";
			this->box4_forStr7->ReadOnly = true;
			this->box4_forStr7->Size = System::Drawing::Size(73, 75);
			this->box4_forStr7->TabIndex = 19;
			this->box4_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box4_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box3_forStr7
			// 
			this->box3_forStr7->BackColor = System::Drawing::Color::Gray;
			this->box3_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box3_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box3_forStr7->Location = System::Drawing::Point(194, 75);
			this->box3_forStr7->Margin = System::Windows::Forms::Padding(8);
			this->box3_forStr7->MaxLength = 1;
			this->box3_forStr7->Name = L"box3_forStr7";
			this->box3_forStr7->ReadOnly = true;
			this->box3_forStr7->Size = System::Drawing::Size(73, 75);
			this->box3_forStr7->TabIndex = 18;
			this->box3_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box3_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box2_forStr7
			// 
			this->box2_forStr7->BackColor = System::Drawing::Color::Gray;
			this->box2_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box2_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box2_forStr7->Location = System::Drawing::Point(104, 75);
			this->box2_forStr7->Margin = System::Windows::Forms::Padding(8);
			this->box2_forStr7->MaxLength = 1;
			this->box2_forStr7->Name = L"box2_forStr7";
			this->box2_forStr7->ReadOnly = true;
			this->box2_forStr7->Size = System::Drawing::Size(73, 75);
			this->box2_forStr7->TabIndex = 17;
			this->box2_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box1_forStr7
			// 
			this->box1_forStr7->BackColor = System::Drawing::Color::Gray;
			this->box1_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box1_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box1_forStr7->Location = System::Drawing::Point(14, 75);
			this->box1_forStr7->Margin = System::Windows::Forms::Padding(8);
			this->box1_forStr7->MaxLength = 1;
			this->box1_forStr7->Name = L"box1_forStr7";
			this->box1_forStr7->ReadOnly = true;
			this->box1_forStr7->Size = System::Drawing::Size(73, 75);
			this->box1_forStr7->TabIndex = 16;
			this->box1_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box1_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// box7_forStr7
			// 
			this->box7_forStr7->BackColor = System::Drawing::Color::Gray;
			this->box7_forStr7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->box7_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->box7_forStr7->Location = System::Drawing::Point(554, 75);
			this->box7_forStr7->Margin = System::Windows::Forms::Padding(8);
			this->box7_forStr7->MaxLength = 1;
			this->box7_forStr7->Name = L"box7_forStr7";
			this->box7_forStr7->ReadOnly = true;
			this->box7_forStr7->Size = System::Drawing::Size(73, 75);
			this->box7_forStr7->TabIndex = 22;
			this->box7_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->box7_forStr7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gray;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox1->Location = System::Drawing::Point(554, 168);
			this->textBox1->Margin = System::Windows::Forms::Padding(8);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(73, 75);
			this->textBox1->TabIndex = 30;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gray;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox2->Location = System::Drawing::Point(464, 168);
			this->textBox2->Margin = System::Windows::Forms::Padding(8);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(73, 75);
			this->textBox2->TabIndex = 29;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Gray;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox3->Location = System::Drawing::Point(374, 168);
			this->textBox3->Margin = System::Windows::Forms::Padding(8);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(73, 75);
			this->textBox3->TabIndex = 28;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Gray;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox4->Location = System::Drawing::Point(284, 168);
			this->textBox4->Margin = System::Windows::Forms::Padding(8);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(73, 75);
			this->textBox4->TabIndex = 27;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Gray;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox5->Location = System::Drawing::Point(194, 168);
			this->textBox5->Margin = System::Windows::Forms::Padding(8);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(73, 75);
			this->textBox5->TabIndex = 26;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Gray;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox6->Location = System::Drawing::Point(104, 168);
			this->textBox6->Margin = System::Windows::Forms::Padding(8);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(73, 75);
			this->textBox6->TabIndex = 25;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Gray;
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox7->Location = System::Drawing::Point(14, 168);
			this->textBox7->Margin = System::Windows::Forms::Padding(8);
			this->textBox7->MaxLength = 1;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(73, 75);
			this->textBox7->TabIndex = 24;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Gray;
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox8->Location = System::Drawing::Point(554, 257);
			this->textBox8->Margin = System::Windows::Forms::Padding(8);
			this->textBox8->MaxLength = 1;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(73, 75);
			this->textBox8->TabIndex = 37;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Gray;
			this->textBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox9->Location = System::Drawing::Point(464, 257);
			this->textBox9->Margin = System::Windows::Forms::Padding(8);
			this->textBox9->MaxLength = 1;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(73, 75);
			this->textBox9->TabIndex = 36;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Gray;
			this->textBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox10->Location = System::Drawing::Point(374, 257);
			this->textBox10->Margin = System::Windows::Forms::Padding(8);
			this->textBox10->MaxLength = 1;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(73, 75);
			this->textBox10->TabIndex = 35;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Gray;
			this->textBox11->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox11->Location = System::Drawing::Point(284, 257);
			this->textBox11->Margin = System::Windows::Forms::Padding(8);
			this->textBox11->MaxLength = 1;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(73, 75);
			this->textBox11->TabIndex = 34;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::Gray;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox12->Location = System::Drawing::Point(194, 257);
			this->textBox12->Margin = System::Windows::Forms::Padding(8);
			this->textBox12->MaxLength = 1;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(73, 75);
			this->textBox12->TabIndex = 33;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::Gray;
			this->textBox13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox13->Location = System::Drawing::Point(104, 257);
			this->textBox13->Margin = System::Windows::Forms::Padding(8);
			this->textBox13->MaxLength = 1;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(73, 75);
			this->textBox13->TabIndex = 32;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::Gray;
			this->textBox14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox14->Location = System::Drawing::Point(14, 257);
			this->textBox14->Margin = System::Windows::Forms::Padding(8);
			this->textBox14->MaxLength = 1;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(73, 75);
			this->textBox14->TabIndex = 31;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::Gray;
			this->textBox15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox15->Location = System::Drawing::Point(554, 348);
			this->textBox15->Margin = System::Windows::Forms::Padding(8);
			this->textBox15->MaxLength = 1;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(73, 75);
			this->textBox15->TabIndex = 44;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::Gray;
			this->textBox16->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox16->Location = System::Drawing::Point(464, 348);
			this->textBox16->Margin = System::Windows::Forms::Padding(8);
			this->textBox16->MaxLength = 1;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(73, 75);
			this->textBox16->TabIndex = 43;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::Gray;
			this->textBox17->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox17->Location = System::Drawing::Point(374, 348);
			this->textBox17->Margin = System::Windows::Forms::Padding(8);
			this->textBox17->MaxLength = 1;
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(73, 75);
			this->textBox17->TabIndex = 42;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::Gray;
			this->textBox18->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox18->Location = System::Drawing::Point(284, 348);
			this->textBox18->Margin = System::Windows::Forms::Padding(8);
			this->textBox18->MaxLength = 1;
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(73, 75);
			this->textBox18->TabIndex = 41;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::Gray;
			this->textBox19->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox19->Location = System::Drawing::Point(194, 348);
			this->textBox19->Margin = System::Windows::Forms::Padding(8);
			this->textBox19->MaxLength = 1;
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(73, 75);
			this->textBox19->TabIndex = 40;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::Gray;
			this->textBox20->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox20->Location = System::Drawing::Point(104, 348);
			this->textBox20->Margin = System::Windows::Forms::Padding(8);
			this->textBox20->MaxLength = 1;
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(73, 75);
			this->textBox20->TabIndex = 39;
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox20->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::Gray;
			this->textBox21->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox21->Location = System::Drawing::Point(14, 348);
			this->textBox21->Margin = System::Windows::Forms::Padding(8);
			this->textBox21->MaxLength = 1;
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(73, 75);
			this->textBox21->TabIndex = 38;
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::Gray;
			this->textBox22->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox22->Location = System::Drawing::Point(554, 438);
			this->textBox22->Margin = System::Windows::Forms::Padding(8);
			this->textBox22->MaxLength = 1;
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(73, 75);
			this->textBox22->TabIndex = 51;
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::Gray;
			this->textBox23->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox23->Location = System::Drawing::Point(464, 438);
			this->textBox23->Margin = System::Windows::Forms::Padding(8);
			this->textBox23->MaxLength = 1;
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(73, 75);
			this->textBox23->TabIndex = 50;
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::Gray;
			this->textBox24->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox24->Location = System::Drawing::Point(374, 438);
			this->textBox24->Margin = System::Windows::Forms::Padding(8);
			this->textBox24->MaxLength = 1;
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(73, 75);
			this->textBox24->TabIndex = 49;
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::Gray;
			this->textBox25->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox25->Location = System::Drawing::Point(284, 438);
			this->textBox25->Margin = System::Windows::Forms::Padding(8);
			this->textBox25->MaxLength = 1;
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(73, 75);
			this->textBox25->TabIndex = 48;
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::Gray;
			this->textBox26->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox26->Location = System::Drawing::Point(194, 438);
			this->textBox26->Margin = System::Windows::Forms::Padding(8);
			this->textBox26->MaxLength = 1;
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(73, 75);
			this->textBox26->TabIndex = 47;
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox26->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::Gray;
			this->textBox27->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox27->Location = System::Drawing::Point(104, 438);
			this->textBox27->Margin = System::Windows::Forms::Padding(8);
			this->textBox27->MaxLength = 1;
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(73, 75);
			this->textBox27->TabIndex = 46;
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox27->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &wordle_form::textBox22_KeyPress);
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::Gray;
			this->textBox28->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->textBox28->Location = System::Drawing::Point(14, 438);
			this->textBox28->Margin = System::Windows::Forms::Padding(8);
			this->textBox28->MaxLength = 1;
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(73, 75);
			this->textBox28->TabIndex = 45;
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
			this->panelBorder->Padding = System::Windows::Forms::Padding(8);
			this->panelBorder->Size = System::Drawing::Size(644, 60);
			this->panelBorder->TabIndex = 0;
			this->panelBorder->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseMove);
			this->panelBorder->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &wordle_form::panelBorder_MouseUp);
			// 
			// collapseBtn
			// 
			this->collapseBtn->FlatAppearance->BorderSize = 0;
			this->collapseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->collapseBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F));
			this->collapseBtn->ForeColor = System::Drawing::Color::White;
			this->collapseBtn->Location = System::Drawing::Point(501, 12);
			this->collapseBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->collapseBtn->Name = L"collapseBtn";
			this->collapseBtn->Size = System::Drawing::Size(60, 38);
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
			this->closeBtn->Location = System::Drawing::Point(570, 12);
			this->closeBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(60, 38);
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
			this->formName->Location = System::Drawing::Point(62, 12);
			this->formName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->formName->Name = L"formName";
			this->formName->Size = System::Drawing::Size(110, 32);
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
			this->icon->Location = System::Drawing::Point(8, 8);
			this->icon->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->icon->Name = L"icon";
			this->icon->Size = System::Drawing::Size(45, 46);
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
			this->newWordBtn->Location = System::Drawing::Point(0, 743);
			this->newWordBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->newWordBtn->Name = L"newWordBtn";
			this->newWordBtn->Size = System::Drawing::Size(645, 57);
			this->newWordBtn->TabIndex = 23;
			this->newWordBtn->Text = L"New Word";
			this->newWordBtn->UseVisualStyleBackColor = false;
			// 
			// textStatus
			// 
			this->textStatus->AutoSize = true;
			this->textStatus->BackColor = System::Drawing::Color::Transparent;
			this->textStatus->Font = (gcnew System::Drawing::Font(L"Arial", 40));
			this->textStatus->Location = System::Drawing::Point(11, 553);
			this->textStatus->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->textStatus->Name = L"textStatus";
			this->textStatus->Size = System::Drawing::Size(620, 89);
			this->textStatus->TabIndex = 52;
			this->textStatus->Text = L"Congratulations!";
			// 
			// wordle_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(645, 800);
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
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
	public: System::Void closeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	public: System::Void closeBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->closeBtn->BackColor = Color::Red;
		this->closeBtn->ForeColor = Color::Black;
	}
	public: System::Void closeBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->closeBtn->BackColor = Color::Transparent;
		this->closeBtn->ForeColor = Color::White;
	}
		// ********************
		
		// кнопка "свернуть"
	public: System::Void collapseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	public: System::Void collapseBtn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->collapseBtn->BackColor = Color::DarkCyan;
		this->collapseBtn->ForeColor = Color::Black;
		
	}
	public: System::Void collapseBtn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->collapseBtn->BackColor = Color::Transparent;
		this->collapseBtn->ForeColor = Color::White;
	}
		// ********************

		// для перемещения
	bool drag = false;
	Point start_point = Point(0, 0);

	public: System::Void panelBorder_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = true;
		start_point = Point(e->X, e->Y);
	}
	public: System::Void panelBorder_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (drag) {
			Point p = PointToScreen(e->Location);
			this->Location = Point(p.X - start_point.X, p.Y - start_point.Y);
		}
	}
	public: System::Void panelBorder_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		drag = false;
	}
		// ********************

	
	
	public: System::Void textBox22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		
	}
};
}
