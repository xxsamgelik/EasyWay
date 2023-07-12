
#pragma once

namespace coursepaper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(char language,char theme)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			if (language == 'b')
			{
				label18->Text = "�������� �����";
				label19->Text = "����: �������� ��� ������ �������� ����� � �������������� �����";
				label20->Text = "������:\n��������:";
				label1->Text = "���������! ���� ��� � ����!";
				label3->Text = "�������� ������� ������.";
				label9->Text = "�������� �������� ������.";
				label5->Text = "�������� �������� �� �������.";
				label7->Text = "�������� ������� �������.";
				label12->Text = "�������� ������";
				label11->Text = "�������� ������� �������� ������ �������� �����.";
				label14->Text = "������ ����";
				label15->Text = "�������� ������� ������ ���� � �����";
				label16->Text = "�������� ������� ����� ��������� � ����������\n�������� ����� �� ������ ������ �� ������";
				label17->Text = "� ��� ���� ��� �����, ���� ����� ������ 50 ���� ����, ��� ��� ���������.\n���� � ���� ������ 30 ���� ����, ��� ��� 2 �������� \n���� ������� - ������.\n����� ���� ����� �������, ���� ���� ����� �������.";
				this->����ToolStripMenuItem->Text = "����";
				this->�����ToolStripMenuItem->Text = "��� ����";
				this->�������ToolStripMenuItem->Text = "���� ����";
				this->������ToolStripMenuItem->Text = "���� ����";
				this->����ToolStripMenuItem->Text = "����";
				this->Text = "�������";

			}
			if (language == 'e')
			{
				label18->Text = "Course work";
				label19->Text = "Topic: a program for finding an easy path in an undirected graph";
				label20->Text = "Completed: \nChecked:";
				label1->Text = "Hello! That's what I can do!";
				label3->Text = "allows you to connect vertices.";
				label9->Text = "allows you to build tops.";
				label5->Text = "allows you to clean the entire canvas.";
				label7->Text = "lets find the top.";
				label12->Text = "medium length";
				label11->Text = "allows you to find the average length of an easy path.";
				label14->Text = "easy path";
				label15->Text = "allows you to find an easy path in the graph";
				label16->Text = "Let's take an example of how the algorithm works\nand find an easy way to travel by train.";
				label17->Text = "We have two paths, the first path takes 50 minutes, but no transfers. \nThe second path takes 30 minutes, but has 2 transfers \nbetween source and drain. \nThe first path will be simple, the second path will be short.";
				label2->Text = "Button";
				label2->Text = "Button";
				label8->Text = "Button";
				label4->Text = "Button";
				label6->Text = "Button";
				label10->Text = "Button";
				label13->Text = "Button";
				this->����ToolStripMenuItem->Text = "Language";
				this->����ToolStripMenuItem->Text = "Thems";
				this->�����ToolStripMenuItem->Text = "Bel lang";
				this->�������ToolStripMenuItem->Text = "Russk lang";
				this->������ToolStripMenuItem->Text = "Eng lang";
				this->Text = "Reference";
			}
			if (language == 'r')
			{
				label18->Text = "�������� ������";
				label19->Text = "���� : ��������� ��� ������ �������� ���� � ����������������� �����";
				label20->Text = "�������� : \n ��������:";
				label1->Text = "������! ��� ��� � ����!";
				label3->Text = "��������� ��������� �������.";
				label9->Text = "��������� ������� �������.";
				label5->Text = "��������� �������� ���� �����";
				label7->Text = "��������� ����� �������";
				label12->Text = "������� �����";
				label11->Text = "��������� ����� ������� ����� �������� ����";
				label14->Text = "������� ���� ";
				label15->Text = "��������� ����� ������� ���� � �����.";
				label16->Text = "�������� ������ ������ ��������� � ����������\n �������� ���� �� ������ ������� �� ������";
				label17->Text = "� ��� ���� ��� ����,���� ������ �������� 50 ����� �������, �� ��� ���������.\n������ �� ���� �������� 30 ����� �������,�� ����� 2 ���������\n ����� ������� - ������.\n ������ ���� ����� �������,������ ���� ����� ����������.";
				label2->Text = "������";
				label8->Text = "������";
				label4->Text = "������";
				label6->Text = "������";
				label10->Text = "������";
				label13->Text = "������";
				this->����ToolStripMenuItem->Text = "����";
				this->����ToolStripMenuItem->Text = "����";
				this->�����ToolStripMenuItem->Text = "��� ��";
				this->�������ToolStripMenuItem->Text = "����� ��";
				this->������ToolStripMenuItem->Text = "���� ��";
				this->Text = "�������";

			}
			if (theme == 'd')
			{
				this->tabPage1->BackColor = System::Drawing::Color::Black;
				this->label18->ForeColor = Color::White;
				this->label19->ForeColor = Color::White;
				this->label20->ForeColor = Color::White;
				this->label21->ForeColor = Color::White;
				this->label16->ForeColor = Color::White;
				this->label17->ForeColor = Color::White;
				this->tabPage2->BackColor = System::Drawing::Color::Black;
				this->label2->ForeColor = Color::White;
				this->label8->ForeColor = Color::White;
				this->label4->ForeColor = Color::White;
				this->label6->ForeColor = Color::White;
				this->label10->ForeColor = Color::White;
				this->label13->ForeColor = Color::White;
				this->label12->ForeColor = Color::White;
				this->label11->ForeColor = Color::White;
				this->label14->ForeColor = Color::White;
				this->label13->ForeColor = Color::White;
				this->label9->ForeColor = Color::White;
				this->label5->ForeColor = Color::White;
				this->label7->ForeColor = Color::White;
				this->label1->ForeColor = Color::White;
				this->label3->ForeColor = Color::White;
				this->label15->ForeColor = Color::White;
				this->tabPage3->BackColor = System::Drawing::Color::Black;
			}
			if (theme == 's')
			{
				this->tabPage1->BackColor = System::Drawing::Color::PeachPuff;
				this->label18->ForeColor = Color::Black;
				this->label19->ForeColor = Color::Black;
				this->label20->ForeColor = Color::Black;
				this->label21->ForeColor = Color::Black;
				this->label16->ForeColor = Color::Black;
				this->label17->ForeColor = Color::Black;
				this->tabPage2->BackColor = System::Drawing::Color::PeachPuff;
				this->label2->ForeColor = Color::Black;
				this->label8->ForeColor = Color::Black;
				this->label4->ForeColor = Color::Black;
				this->label6->ForeColor = Color::Black;
				this->label10->ForeColor = Color::Black;
				this->label13->ForeColor = Color::Black;
				this->label12->ForeColor = Color::Black;
				this->label11->ForeColor = Color::Black;
				this->label14->ForeColor = Color::Black;
				this->label13->ForeColor = Color::Black;
				this->label9->ForeColor = Color::Black;
				this->label5->ForeColor = Color::Black;
				this->label7->ForeColor = Color::Black;
				this->label1->ForeColor = Color::Black;
				this->label3->ForeColor = Color::Black;
				this->label15->ForeColor = Color::Black;
				this->tabPage3->BackColor = System::Drawing::Color::PeachPuff;
			}
			if (theme == 'w')

			{
				this->tabPage1->BackColor = System::Drawing::Color::White;
				this->label18->ForeColor = Color::Black;
				this->label19->ForeColor = Color::Black;
				this->label20->ForeColor = Color::Black;
				this->label21->ForeColor = Color::Black;
				this->label16->ForeColor = Color::Black;
				this->label17->ForeColor = Color::Black;
				this->tabPage2->BackColor = System::Drawing::Color::White;
				this->label2->ForeColor = Color::Black;
				this->label8->ForeColor = Color::Black;
				this->label4->ForeColor = Color::Black;
				this->label6->ForeColor = Color::Black;
				this->label10->ForeColor = Color::Black;
				this->label13->ForeColor = Color::Black;
				this->label12->ForeColor = Color::Black;
				this->label11->ForeColor = Color::Black;
				this->label14->ForeColor = Color::Black;
				this->label13->ForeColor = Color::Black;
				this->label9->ForeColor = Color::Black;
				this->label5->ForeColor = Color::Black;
				this->label7->ForeColor = Color::Black;
				this->label1->ForeColor = Color::Black;
				this->label3->ForeColor = Color::Black;
				this->label15->ForeColor = Color::Black;
				this->tabPage3->BackColor = System::Drawing::Color::White;
			}
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;

	protected:





















	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(798, 507);
			this->tabControl1->TabIndex = 21;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(790, 478);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"����";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(532, 349);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(169, 58);
			this->label21->TabIndex = 3;
			this->label21->Text = L"������� �.�\r\n������� �.�";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(17, 354);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(144, 58);
			this->label20->TabIndex = 2;
			this->label20->Text = L"�������� : \r\n�������� : ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(17, 168);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(706, 25);
			this->label19->TabIndex = 1;
			this->label19->Text = L"���� : ��������� ��� ������ �������� ���� � ����������������� �����";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(249, 70);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(246, 37);
			this->label18->TabIndex = 0;
			this->label18->Text = L"�������� ������";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->�����ToolStripMenuItem->Text = L"��� ��";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->������ToolStripMenuItem->Text = L"���� ��";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(147, 26);
			this->�������ToolStripMenuItem->Text = L"����� ��";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->������ToolStripMenuItem,
					this->�����ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(790, 478);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"� ���������";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(308, 409);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(348, 20);
			this->label15->TabIndex = 39;
			this->label15->Text = L"��������� ����� ������� ���� � �����.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(116, 409);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(133, 20);
			this->label14->TabIndex = 38;
			this->label14->Text = L"\"������� ����\"";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(36, 409);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 20);
			this->label13->TabIndex = 37;
			this->label13->Text = L"������ ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(116, 378);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(149, 20);
			this->label12->TabIndex = 36;
			this->label12->Text = L"\"������� �����\"";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Snow;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(243, 312);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(59, 44);
			this->button6->TabIndex = 35;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(308, 378);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(419, 20);
			this->label11->TabIndex = 34;
			this->label11->Text = L"��������� ����� ������� ����� �������� ����.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(36, 378);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 20);
			this->label10->TabIndex = 33;
			this->label10->Text = L"������ ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(308, 215);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(257, 20);
			this->label9->TabIndex = 32;
			this->label9->Text = L"��������� ������� �������.";
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(243, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 50);
			this->button4->TabIndex = 31;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(171, 212);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 20);
			this->label8->TabIndex = 30;
			this->label8->Text = L"������ ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(308, 323);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(234, 20);
			this->label7->TabIndex = 29;
			this->label7->Text = L"��������� ����� �������.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(171, 323);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 20);
			this->label6->TabIndex = 28;
			this->label6->Text = L"������ ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(308, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(282, 20);
			this->label5->TabIndex = 27;
			this->label5->Text = L"��������� �������� ���� �����.";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(243, 259);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 46);
			this->button2->TabIndex = 26;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(171, 271);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 20);
			this->label4->TabIndex = 25;
			this->label4->Text = L"������ ";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(240, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 49);
			this->button1->TabIndex = 24;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(308, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 20);
			this->label3->TabIndex = 23;
			this->label3->Text = L"��������� ��������� �������.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(171, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 20);
			this->label2->TabIndex = 22;
			this->label2->Text = L"������ ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(167, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(463, 46);
			this->label1->TabIndex = 21;
			this->label1->Text = L"������! ��� ��� � ����!";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(790, 478);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"������� ����";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label17->Location = System::Drawing::Point(3, 316);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(737, 96);
			this->label17->TabIndex = 3;
			this->label17->Text = resources->GetString(L"label17.Text");
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(369, 96);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 182);
			this->button5->TabIndex = 2;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(155, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 182);
			this->button3->TabIndex = 1;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(6, 18);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(615, 58);
			this->label16->TabIndex = 0;
			this->label16->Text = L"�������� ������ ������ ��������� � ���������� \r\n�������� ���� �� ������ ������� �"
				L"� ������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 510);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"�������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label18->Text = "�������� �����";
	label19->Text = "����: �������� ��� ������ �������� ����� � �������������� �����";
	label20->Text = "������:\n��������:";
	label1->Text = "���������! ���� ��� � ����!";
	label3->Text = "�������� ������� ������.";
	label9->Text = "�������� �������� ������.";
	label5->Text = "�������� �������� �� �������.";
	label7->Text = "�������� ������� �������.";
	label12->Text = "�������� ������";
	label11->Text = "�������� ������� �������� ������ �������� �����.";
	label14->Text = "������ ����";
	label15->Text = "�������� ������� ������ ���� � �����";
	label16->Text = "�������� ������� ����� ��������� � ����������\n�������� ����� �� ������ ������ �� ������";
	label17->Text = "� ��� ���� ��� �����, ���� ����� ������ 50 ���� ����, ��� ��� ���������.\n���� � ���� ������ 30 ���� ����, ��� ��� 2 �������� \n���� ������� - ������.\n����� ���� ����� �������, ���� ���� ����� �������.";
	this->����ToolStripMenuItem->Text = "����";
	this->�����ToolStripMenuItem->Text = "��� ����";
	this->�������ToolStripMenuItem->Text = "���� ����";
	this->������ToolStripMenuItem->Text = "���� ����";
	this->����ToolStripMenuItem->Text = "����";
	this->Text = "�������";
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label18->Text = "Course work";
	label19->Text = "Topic: a program for finding an easy path in an undirected graph";
	label20->Text = "Completed: \nChecked:";
	label1->Text = "Hello! That's what I can do!";
	label3->Text = "allows you to connect vertices.";
	label9->Text = "allows you to build tops.";
	label5->Text = "allows you to clean the entire canvas.";
	label7->Text = "lets find the top.";
	label12->Text = "medium length";
	label11->Text = "allows you to find the average length of an easy path.";
	label14->Text = "easy path";
	label15->Text = "allows you to find an easy path in the graph";
	label16->Text = "Let's take an example of how the algorithm works\nand find an easy way to travel by train.";
	label17->Text = "We have two paths, the first path takes 50 minutes, but no transfers. \nThe second path takes 30 minutes, but has 2 transfers \nbetween source and drain. \nThe first path will be simple, the second path will be short.";
	label2->Text = "Button";
	label2->Text = "Button";
	label8->Text = "Button";
	label4->Text = "Button";
	label6->Text = "Button";
	label10->Text = "Button";
	label13->Text = "Button";
	this->����ToolStripMenuItem->Text = "Language";
	this->����ToolStripMenuItem->Text = "Thems";
	this->�����ToolStripMenuItem->Text = "Bel lang";
	this->�������ToolStripMenuItem->Text = "Russk lang";
	this->������ToolStripMenuItem->Text = "Eng lang";
	this->Text = "Reference";

}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label18->Text = "�������� ������";
	label19->Text = "���� : ��������� ��� ������ �������� ���� � ����������������� �����";
	label20->Text = "�������� : \n ��������:";
	label1->Text = "������! ��� ��� � ����!";
	label3->Text = "��������� ��������� �������.";
	label9->Text = "��������� ������� �������.";
	label5->Text = "��������� �������� ���� �����";
	label7->Text = "��������� ����� �������";
	label12->Text = "������� �����";
	label11->Text = "��������� ����� ������� ����� �������� ����";
	label14->Text = "������� ���� ";
	label15->Text = "��������� ����� ������� ���� � �����.";
	label16->Text = "�������� ������ ������ ��������� � ����������\n �������� ���� �� ������ ������� �� ������";
	label17->Text = "� ��� ���� ��� ����,���� ������ �������� 50 ����� �������, �� ��� ���������.\n������ �� ���� �������� 30 ����� �������,�� ����� 2 ���������\n ����� ������� - ������.\n ������ ���� ����� �������,������ ���� ����� ����������.";
	label2->Text = "������";
	label8->Text = "������";
	label4->Text = "������";
	label6->Text = "������";
	label10->Text = "������";
	label13->Text = "������";
	this->����ToolStripMenuItem->Text = "����";
	this->����ToolStripMenuItem->Text = "����";
	this->�����ToolStripMenuItem->Text = "��� ��";
	this->�������ToolStripMenuItem->Text = "����� ��";
	this->������ToolStripMenuItem->Text = "���� ��";
	this->Text = "�������";
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->tabPage1->BackColor=System::Drawing::Color::Black;
	this->label18->ForeColor = Color::White;
	this->label19->ForeColor = Color::White;
	this->label20->ForeColor = Color::White;
	this->label21->ForeColor = Color::White;
	this->label16->ForeColor = Color::White;
	this->label17->ForeColor = Color::White;
	this->tabPage2->BackColor = System::Drawing::Color::Black;
	this->label2->ForeColor = Color::White;
	this->label8->ForeColor = Color::White;
	this->label4->ForeColor = Color::White;
	this->label6->ForeColor = Color::White;
	this->label10->ForeColor = Color::White;
	this->label13->ForeColor = Color::White;
	this->label12->ForeColor = Color::White;
	this->label11->ForeColor = Color::White;
	this->label14->ForeColor = Color::White;
	this->label13->ForeColor = Color::White;
	this->label9->ForeColor = Color::White;
	this->label5->ForeColor = Color::White;
	this->label7->ForeColor = Color::White;
	this->label1->ForeColor = Color::White;
	this->label3->ForeColor = Color::White;
	this->label15->ForeColor = Color::White;
	this->tabPage3->BackColor = System::Drawing::Color::Black;


}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->tabPage1->BackColor = System::Drawing::Color::White;
	   this->label18->ForeColor = Color::Black;
	   this->label19->ForeColor = Color::Black;
	   this->label20->ForeColor = Color::Black;
	   this->label21->ForeColor = Color::Black;
	   this->label16->ForeColor = Color::Black;
	   this->label17->ForeColor = Color::Black;
	   this->tabPage2->BackColor = System::Drawing::Color::White;
	   this->label2->ForeColor = Color::Black;
	   this->label8->ForeColor = Color::Black;
	   this->label4->ForeColor = Color::Black;
	   this->label6->ForeColor = Color::Black;
	   this->label10->ForeColor = Color::Black;
	   this->label13->ForeColor = Color::Black;
	   this->label12->ForeColor = Color::Black;
	   this->label11->ForeColor = Color::Black;
	   this->label14->ForeColor = Color::Black;
	   this->label13->ForeColor = Color::Black;
	   this->label9->ForeColor = Color::Black;
	   this->label5->ForeColor = Color::Black;
	   this->label7->ForeColor = Color::Black;
	   this->label1->ForeColor = Color::Black;
	   this->label3->ForeColor = Color::Black;
	   this->label15->ForeColor = Color::Black;
	   this->tabPage3->BackColor = System::Drawing::Color::White; 
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->tabPage1->BackColor = System::Drawing::Color::PeachPuff;
	this->label18->ForeColor = Color::Black;
	this->label19->ForeColor = Color::Black;
	this->label20->ForeColor = Color::Black;
	this->label21->ForeColor = Color::Black;
	this->label16->ForeColor = Color::Black;
	this->label17->ForeColor = Color::Black;
	this->tabPage2->BackColor = System::Drawing::Color::PeachPuff;
	this->label2->ForeColor = Color::Black;
	this->label8->ForeColor = Color::Black;
	this->label4->ForeColor = Color::Black;
	this->label6->ForeColor = Color::Black;
	this->label10->ForeColor = Color::Black;
	this->label13->ForeColor = Color::Black;
	this->label12->ForeColor = Color::Black;
	this->label11->ForeColor = Color::Black;
	this->label14->ForeColor = Color::Black;
	this->label13->ForeColor = Color::Black;
	this->label9->ForeColor = Color::Black;
	this->label5->ForeColor = Color::Black;
	this->label7->ForeColor = Color::Black;
	this->label1->ForeColor = Color::Black;
	this->label3->ForeColor = Color::Black;
	this->label15->ForeColor = Color::Black;
	this->tabPage3->BackColor = System::Drawing::Color::PeachPuff;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;

}

};
}
