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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;








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
			System::Windows::Forms::TextBox^ box1_forStr6;
			System::Windows::Forms::TextBox^ box2_forStr6;
			System::Windows::Forms::TextBox^ box3_forStr6;
			System::Windows::Forms::TextBox^ box4_forStr6;
			System::Windows::Forms::TextBox^ box5_forStr6;
			System::Windows::Forms::TextBox^ box6_forStr6;
			System::Windows::Forms::TextBox^ box5_forStr5;
			System::Windows::Forms::TextBox^ box4_forStr5;
			System::Windows::Forms::TextBox^ box3_forStr5;
			System::Windows::Forms::TextBox^ box2_forStr5;
			System::Windows::Forms::TextBox^ box1_forStr5;
			System::Windows::Forms::TextBox^ box4_forStr4;
			System::Windows::Forms::TextBox^ box3_forStr4;
			System::Windows::Forms::TextBox^ box2_forStr4;
			System::Windows::Forms::TextBox^ box1_forStr4;
			System::Windows::Forms::TextBox^ box6_forStr7;
			System::Windows::Forms::TextBox^ box5_forStr7;
			System::Windows::Forms::TextBox^ box4_forStr7;
			System::Windows::Forms::TextBox^ box3_forStr7;
			System::Windows::Forms::TextBox^ box2_forStr7;
			System::Windows::Forms::TextBox^ box1_forStr7;
			System::Windows::Forms::TextBox^ box7_forStr7;
			this->panelBorder = (gcnew System::Windows::Forms::Panel());
			this->collapseBtn = (gcnew System::Windows::Forms::Button());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->formName = (gcnew System::Windows::Forms::Label());
			this->icon = (gcnew System::Windows::Forms::PictureBox());
			this->newWordBtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			box1_forStr6 = (gcnew System::Windows::Forms::TextBox());
			box2_forStr6 = (gcnew System::Windows::Forms::TextBox());
			box3_forStr6 = (gcnew System::Windows::Forms::TextBox());
			box4_forStr6 = (gcnew System::Windows::Forms::TextBox());
			box5_forStr6 = (gcnew System::Windows::Forms::TextBox());
			box6_forStr6 = (gcnew System::Windows::Forms::TextBox());
			box5_forStr5 = (gcnew System::Windows::Forms::TextBox());
			box4_forStr5 = (gcnew System::Windows::Forms::TextBox());
			box3_forStr5 = (gcnew System::Windows::Forms::TextBox());
			box2_forStr5 = (gcnew System::Windows::Forms::TextBox());
			box1_forStr5 = (gcnew System::Windows::Forms::TextBox());
			box4_forStr4 = (gcnew System::Windows::Forms::TextBox());
			box3_forStr4 = (gcnew System::Windows::Forms::TextBox());
			box2_forStr4 = (gcnew System::Windows::Forms::TextBox());
			box1_forStr4 = (gcnew System::Windows::Forms::TextBox());
			box6_forStr7 = (gcnew System::Windows::Forms::TextBox());
			box5_forStr7 = (gcnew System::Windows::Forms::TextBox());
			box4_forStr7 = (gcnew System::Windows::Forms::TextBox());
			box3_forStr7 = (gcnew System::Windows::Forms::TextBox());
			box2_forStr7 = (gcnew System::Windows::Forms::TextBox());
			box1_forStr7 = (gcnew System::Windows::Forms::TextBox());
			box7_forStr7 = (gcnew System::Windows::Forms::TextBox());
			this->panelBorder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->icon))->BeginInit();
			this->SuspendLayout();
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
			// box1_forStr6
			// 
			box1_forStr6->Cursor = System::Windows::Forms::Cursors::No;
			box1_forStr6->Enabled = false;
			box1_forStr6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box1_forStr6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box1_forStr6->Location = System::Drawing::Point(38, 106);
			box1_forStr6->Margin = System::Windows::Forms::Padding(5);
			box1_forStr6->MaxLength = 1;
			box1_forStr6->Multiline = true;
			box1_forStr6->Name = L"box1_forStr6";
			box1_forStr6->ReadOnly = true;
			box1_forStr6->Size = System::Drawing::Size(50, 50);
			box1_forStr6->TabIndex = 1;
			box1_forStr6->Text = L"A";
			box1_forStr6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box2_forStr6
			// 
			box2_forStr6->Cursor = System::Windows::Forms::Cursors::No;
			box2_forStr6->Enabled = false;
			box2_forStr6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box2_forStr6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box2_forStr6->Location = System::Drawing::Point(98, 106);
			box2_forStr6->Margin = System::Windows::Forms::Padding(5);
			box2_forStr6->MaxLength = 1;
			box2_forStr6->Multiline = true;
			box2_forStr6->Name = L"box2_forStr6";
			box2_forStr6->ReadOnly = true;
			box2_forStr6->Size = System::Drawing::Size(50, 50);
			box2_forStr6->TabIndex = 2;
			box2_forStr6->Text = L"B";
			box2_forStr6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box3_forStr6
			// 
			box3_forStr6->Cursor = System::Windows::Forms::Cursors::No;
			box3_forStr6->Enabled = false;
			box3_forStr6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box3_forStr6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box3_forStr6->Location = System::Drawing::Point(158, 106);
			box3_forStr6->Margin = System::Windows::Forms::Padding(5);
			box3_forStr6->MaxLength = 1;
			box3_forStr6->Multiline = true;
			box3_forStr6->Name = L"box3_forStr6";
			box3_forStr6->ReadOnly = true;
			box3_forStr6->Size = System::Drawing::Size(50, 50);
			box3_forStr6->TabIndex = 3;
			box3_forStr6->Text = L"C";
			box3_forStr6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box4_forStr6
			// 
			box4_forStr6->Cursor = System::Windows::Forms::Cursors::No;
			box4_forStr6->Enabled = false;
			box4_forStr6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box4_forStr6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box4_forStr6->Location = System::Drawing::Point(218, 106);
			box4_forStr6->Margin = System::Windows::Forms::Padding(5);
			box4_forStr6->MaxLength = 1;
			box4_forStr6->Multiline = true;
			box4_forStr6->Name = L"box4_forStr6";
			box4_forStr6->ReadOnly = true;
			box4_forStr6->Size = System::Drawing::Size(50, 50);
			box4_forStr6->TabIndex = 4;
			box4_forStr6->Text = L"D";
			box4_forStr6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box5_forStr6
			// 
			box5_forStr6->Cursor = System::Windows::Forms::Cursors::No;
			box5_forStr6->Enabled = false;
			box5_forStr6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box5_forStr6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box5_forStr6->Location = System::Drawing::Point(278, 106);
			box5_forStr6->Margin = System::Windows::Forms::Padding(5);
			box5_forStr6->MaxLength = 1;
			box5_forStr6->Multiline = true;
			box5_forStr6->Name = L"box5_forStr6";
			box5_forStr6->ReadOnly = true;
			box5_forStr6->Size = System::Drawing::Size(50, 50);
			box5_forStr6->TabIndex = 5;
			box5_forStr6->Text = L"E";
			box5_forStr6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box6_forStr6
			// 
			box6_forStr6->Cursor = System::Windows::Forms::Cursors::No;
			box6_forStr6->Enabled = false;
			box6_forStr6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box6_forStr6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box6_forStr6->Location = System::Drawing::Point(338, 106);
			box6_forStr6->Margin = System::Windows::Forms::Padding(5);
			box6_forStr6->MaxLength = 1;
			box6_forStr6->Multiline = true;
			box6_forStr6->Name = L"box6_forStr6";
			box6_forStr6->ReadOnly = true;
			box6_forStr6->Size = System::Drawing::Size(50, 50);
			box6_forStr6->TabIndex = 6;
			box6_forStr6->Text = L"F";
			box6_forStr6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box5_forStr5
			// 
			box5_forStr5->Cursor = System::Windows::Forms::Cursors::No;
			box5_forStr5->Enabled = false;
			box5_forStr5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box5_forStr5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box5_forStr5->Location = System::Drawing::Point(310, 164);
			box5_forStr5->Margin = System::Windows::Forms::Padding(5);
			box5_forStr5->MaxLength = 1;
			box5_forStr5->Multiline = true;
			box5_forStr5->Name = L"box5_forStr5";
			box5_forStr5->ReadOnly = true;
			box5_forStr5->Size = System::Drawing::Size(50, 50);
			box5_forStr5->TabIndex = 11;
			box5_forStr5->Text = L"E";
			box5_forStr5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box4_forStr5
			// 
			box4_forStr5->Cursor = System::Windows::Forms::Cursors::No;
			box4_forStr5->Enabled = false;
			box4_forStr5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box4_forStr5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box4_forStr5->Location = System::Drawing::Point(250, 164);
			box4_forStr5->Margin = System::Windows::Forms::Padding(5);
			box4_forStr5->MaxLength = 1;
			box4_forStr5->Multiline = true;
			box4_forStr5->Name = L"box4_forStr5";
			box4_forStr5->ReadOnly = true;
			box4_forStr5->Size = System::Drawing::Size(50, 50);
			box4_forStr5->TabIndex = 10;
			box4_forStr5->Text = L"D";
			box4_forStr5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box3_forStr5
			// 
			box3_forStr5->Cursor = System::Windows::Forms::Cursors::No;
			box3_forStr5->Enabled = false;
			box3_forStr5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box3_forStr5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box3_forStr5->Location = System::Drawing::Point(190, 164);
			box3_forStr5->Margin = System::Windows::Forms::Padding(5);
			box3_forStr5->MaxLength = 1;
			box3_forStr5->Multiline = true;
			box3_forStr5->Name = L"box3_forStr5";
			box3_forStr5->ReadOnly = true;
			box3_forStr5->Size = System::Drawing::Size(50, 50);
			box3_forStr5->TabIndex = 9;
			box3_forStr5->Text = L"C";
			box3_forStr5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box2_forStr5
			// 
			box2_forStr5->Cursor = System::Windows::Forms::Cursors::No;
			box2_forStr5->Enabled = false;
			box2_forStr5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box2_forStr5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box2_forStr5->Location = System::Drawing::Point(130, 164);
			box2_forStr5->Margin = System::Windows::Forms::Padding(5);
			box2_forStr5->MaxLength = 1;
			box2_forStr5->Multiline = true;
			box2_forStr5->Name = L"box2_forStr5";
			box2_forStr5->ReadOnly = true;
			box2_forStr5->Size = System::Drawing::Size(50, 50);
			box2_forStr5->TabIndex = 8;
			box2_forStr5->Text = L"B";
			box2_forStr5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box1_forStr5
			// 
			box1_forStr5->Cursor = System::Windows::Forms::Cursors::No;
			box1_forStr5->Enabled = false;
			box1_forStr5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box1_forStr5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box1_forStr5->Location = System::Drawing::Point(70, 164);
			box1_forStr5->Margin = System::Windows::Forms::Padding(5);
			box1_forStr5->MaxLength = 1;
			box1_forStr5->Multiline = true;
			box1_forStr5->Name = L"box1_forStr5";
			box1_forStr5->ReadOnly = true;
			box1_forStr5->Size = System::Drawing::Size(50, 50);
			box1_forStr5->TabIndex = 7;
			box1_forStr5->Text = L"A";
			box1_forStr5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box4_forStr4
			// 
			box4_forStr4->Cursor = System::Windows::Forms::Cursors::No;
			box4_forStr4->Enabled = false;
			box4_forStr4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box4_forStr4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box4_forStr4->Location = System::Drawing::Point(280, 222);
			box4_forStr4->Margin = System::Windows::Forms::Padding(5);
			box4_forStr4->MaxLength = 1;
			box4_forStr4->Multiline = true;
			box4_forStr4->Name = L"box4_forStr4";
			box4_forStr4->ReadOnly = true;
			box4_forStr4->Size = System::Drawing::Size(50, 50);
			box4_forStr4->TabIndex = 15;
			box4_forStr4->Text = L"D";
			box4_forStr4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box3_forStr4
			// 
			box3_forStr4->Cursor = System::Windows::Forms::Cursors::No;
			box3_forStr4->Enabled = false;
			box3_forStr4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box3_forStr4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box3_forStr4->Location = System::Drawing::Point(220, 222);
			box3_forStr4->Margin = System::Windows::Forms::Padding(5);
			box3_forStr4->MaxLength = 1;
			box3_forStr4->Multiline = true;
			box3_forStr4->Name = L"box3_forStr4";
			box3_forStr4->ReadOnly = true;
			box3_forStr4->Size = System::Drawing::Size(50, 50);
			box3_forStr4->TabIndex = 14;
			box3_forStr4->Text = L"C";
			box3_forStr4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box2_forStr4
			// 
			box2_forStr4->Cursor = System::Windows::Forms::Cursors::No;
			box2_forStr4->Enabled = false;
			box2_forStr4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box2_forStr4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box2_forStr4->Location = System::Drawing::Point(160, 222);
			box2_forStr4->Margin = System::Windows::Forms::Padding(5);
			box2_forStr4->MaxLength = 1;
			box2_forStr4->Multiline = true;
			box2_forStr4->Name = L"box2_forStr4";
			box2_forStr4->ReadOnly = true;
			box2_forStr4->Size = System::Drawing::Size(50, 50);
			box2_forStr4->TabIndex = 13;
			box2_forStr4->Text = L"B";
			box2_forStr4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box1_forStr4
			// 
			box1_forStr4->Cursor = System::Windows::Forms::Cursors::No;
			box1_forStr4->Enabled = false;
			box1_forStr4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box1_forStr4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box1_forStr4->Location = System::Drawing::Point(100, 222);
			box1_forStr4->Margin = System::Windows::Forms::Padding(5);
			box1_forStr4->MaxLength = 1;
			box1_forStr4->Multiline = true;
			box1_forStr4->Name = L"box1_forStr4";
			box1_forStr4->ReadOnly = true;
			box1_forStr4->Size = System::Drawing::Size(50, 50);
			box1_forStr4->TabIndex = 12;
			box1_forStr4->Text = L"A";
			box1_forStr4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box6_forStr7
			// 
			box6_forStr7->Cursor = System::Windows::Forms::Cursors::No;
			box6_forStr7->Enabled = false;
			box6_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box6_forStr7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box6_forStr7->Location = System::Drawing::Point(309, 49);
			box6_forStr7->Margin = System::Windows::Forms::Padding(5);
			box6_forStr7->MaxLength = 1;
			box6_forStr7->Multiline = true;
			box6_forStr7->Name = L"box6_forStr7";
			box6_forStr7->ReadOnly = true;
			box6_forStr7->Size = System::Drawing::Size(50, 50);
			box6_forStr7->TabIndex = 21;
			box6_forStr7->Text = L"F";
			box6_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box5_forStr7
			// 
			box5_forStr7->Cursor = System::Windows::Forms::Cursors::No;
			box5_forStr7->Enabled = false;
			box5_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box5_forStr7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box5_forStr7->Location = System::Drawing::Point(249, 49);
			box5_forStr7->Margin = System::Windows::Forms::Padding(5);
			box5_forStr7->MaxLength = 1;
			box5_forStr7->Multiline = true;
			box5_forStr7->Name = L"box5_forStr7";
			box5_forStr7->ReadOnly = true;
			box5_forStr7->Size = System::Drawing::Size(50, 50);
			box5_forStr7->TabIndex = 20;
			box5_forStr7->Text = L"E";
			box5_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box4_forStr7
			// 
			box4_forStr7->Cursor = System::Windows::Forms::Cursors::No;
			box4_forStr7->Enabled = false;
			box4_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box4_forStr7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box4_forStr7->Location = System::Drawing::Point(189, 49);
			box4_forStr7->Margin = System::Windows::Forms::Padding(5);
			box4_forStr7->MaxLength = 1;
			box4_forStr7->Multiline = true;
			box4_forStr7->Name = L"box4_forStr7";
			box4_forStr7->ReadOnly = true;
			box4_forStr7->Size = System::Drawing::Size(50, 50);
			box4_forStr7->TabIndex = 19;
			box4_forStr7->Text = L"D";
			box4_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box3_forStr7
			// 
			box3_forStr7->Cursor = System::Windows::Forms::Cursors::No;
			box3_forStr7->Enabled = false;
			box3_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box3_forStr7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box3_forStr7->Location = System::Drawing::Point(129, 49);
			box3_forStr7->Margin = System::Windows::Forms::Padding(5);
			box3_forStr7->MaxLength = 1;
			box3_forStr7->Multiline = true;
			box3_forStr7->Name = L"box3_forStr7";
			box3_forStr7->ReadOnly = true;
			box3_forStr7->Size = System::Drawing::Size(50, 50);
			box3_forStr7->TabIndex = 18;
			box3_forStr7->Text = L"C";
			box3_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box2_forStr7
			// 
			box2_forStr7->Cursor = System::Windows::Forms::Cursors::No;
			box2_forStr7->Enabled = false;
			box2_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box2_forStr7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box2_forStr7->Location = System::Drawing::Point(69, 49);
			box2_forStr7->Margin = System::Windows::Forms::Padding(5);
			box2_forStr7->MaxLength = 1;
			box2_forStr7->Multiline = true;
			box2_forStr7->Name = L"box2_forStr7";
			box2_forStr7->ReadOnly = true;
			box2_forStr7->Size = System::Drawing::Size(50, 50);
			box2_forStr7->TabIndex = 17;
			box2_forStr7->Text = L"B";
			box2_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box1_forStr7
			// 
			box1_forStr7->Cursor = System::Windows::Forms::Cursors::No;
			box1_forStr7->Enabled = false;
			box1_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box1_forStr7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box1_forStr7->Location = System::Drawing::Point(9, 49);
			box1_forStr7->Margin = System::Windows::Forms::Padding(5);
			box1_forStr7->MaxLength = 1;
			box1_forStr7->Multiline = true;
			box1_forStr7->Name = L"box1_forStr7";
			box1_forStr7->ReadOnly = true;
			box1_forStr7->Size = System::Drawing::Size(50, 50);
			box1_forStr7->TabIndex = 16;
			box1_forStr7->Text = L"A";
			box1_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// box7_forStr7
			// 
			box7_forStr7->Cursor = System::Windows::Forms::Cursors::No;
			box7_forStr7->Enabled = false;
			box7_forStr7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			box7_forStr7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			box7_forStr7->Location = System::Drawing::Point(369, 49);
			box7_forStr7->Margin = System::Windows::Forms::Padding(5);
			box7_forStr7->MaxLength = 1;
			box7_forStr7->Multiline = true;
			box7_forStr7->Name = L"box7_forStr7";
			box7_forStr7->ReadOnly = true;
			box7_forStr7->Size = System::Drawing::Size(50, 50);
			box7_forStr7->TabIndex = 22;
			box7_forStr7->Text = L"F";
			box7_forStr7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// newWordBtn
			// 
			this->newWordBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->newWordBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->newWordBtn->FlatAppearance->BorderSize = 5;
			this->newWordBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->newWordBtn->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newWordBtn->Location = System::Drawing::Point(12, 477);
			this->newWordBtn->Name = L"newWordBtn";
			this->newWordBtn->Size = System::Drawing::Size(123, 31);
			this->newWordBtn->TabIndex = 23;
			this->newWordBtn->Text = L"New Word";
			this->newWordBtn->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button1->FlatAppearance->BorderSize = 5;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(118, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 53);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Guess the Word!";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17));
			this->textBox1->Location = System::Drawing::Point(118, 332);
			this->textBox1->MaxLength = 7;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 32);
			this->textBox1->TabIndex = 25;
			this->textBox1->Text = L"ABCD";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// wordle_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(430, 520);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->newWordBtn);
			this->Controls->Add(box7_forStr7);
			this->Controls->Add(box6_forStr7);
			this->Controls->Add(box5_forStr7);
			this->Controls->Add(box4_forStr7);
			this->Controls->Add(box3_forStr7);
			this->Controls->Add(box2_forStr7);
			this->Controls->Add(box1_forStr7);
			this->Controls->Add(box4_forStr4);
			this->Controls->Add(box3_forStr4);
			this->Controls->Add(box2_forStr4);
			this->Controls->Add(box1_forStr4);
			this->Controls->Add(box5_forStr5);
			this->Controls->Add(box4_forStr5);
			this->Controls->Add(box3_forStr5);
			this->Controls->Add(box2_forStr5);
			this->Controls->Add(box1_forStr5);
			this->Controls->Add(box6_forStr6);
			this->Controls->Add(box5_forStr6);
			this->Controls->Add(box4_forStr6);
			this->Controls->Add(box3_forStr6);
			this->Controls->Add(box2_forStr6);
			this->Controls->Add(box1_forStr6);
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

	
	
};
}
