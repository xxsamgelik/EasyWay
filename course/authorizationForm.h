#pragma once
#include <exception>
#include <stdexcept>

namespace coursepaper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	public ref class authorizationForm : public System::Windows::Forms::Form
	{
	public:
		authorizationForm(char language,char theme)
		{
			InitializeComponent();
			if (language == 'r')
			{
				this->label5->Text = "�����������";
				this->label3->Text = "��� �����������";
				this->label2->Text = "������ ��� �����";
				this->label1->Text = "����������� ������";
				this->checkBox1->Text = "� ���������� � ���������";
				this->button1->Text = "�����������";
				this->������ToolStripMenuItem->Text = "����.��";
				this->�����ToolStripMenuItem->Text = "���.��";
				this->�������ToolStripMenuItem->Text = "�����.��";
				this->����ToolStripMenuItem->Text = "����";
				this->����ToolStripMenuItem->Text = "����";
				this->Text = "�����������";
				
			}
			if (language == 'b')
			{
				this->label5->Text = "���I�������";
				this->label3->Text = "��� ����������i��";
				this->label2->Text = "������ ��� �������";
				this->label1->Text = "���������� ������";
				this->checkBox1->Text = "� ��������� � �������";
				this->button1->Text = "���i�������";
				this->�����ToolStripMenuItem->Text = "���.����";
				this->������ToolStripMenuItem->Text = "����.����";
				this->�������ToolStripMenuItem->Text = "�����.����";
				this->����ToolStripMenuItem->Text = "����";
				this->����ToolStripMenuItem->Text = "����";
				this->Text = "���I��������";
			}
			if (language == 'e')
			{
				this->label5->Text = "REGISTRATION";
				this->label3->Text = "Username";
				this->label2->Text = "Login password";
				this->label1->Text = "�onfirm the password";
				this->checkBox1->Text = "I am familiar with the rules";
				this->button1->Text = "Registration";
				this->������ToolStripMenuItem->Text = "Eng.lang";
				this->�����ToolStripMenuItem->Text = "Bel.lang";
				this->�������ToolStripMenuItem->Text = "Russk.lang";
				this->����ToolStripMenuItem->Text = "Language";
				this->����ToolStripMenuItem->Text = "Thems";
				this->Text = "REGISTRATION";

			}
			if (theme == 'd')
			{
				this->label5->BackColor = Color::White;
				this->label5->ForeColor = Color::Black;
				this->label3->BackColor = Color::White;
				this->label2->BackColor = Color::White;
				this->label1->BackColor = Color::White;
				this->checkBox1->BackColor = Color::White;
				this->checkBox1->ForeColor = Color::Black;
				this->button1->BackColor = Color::White;
				authorizationForm::BackColor = Color::Black;
				this->textBox1->BackColor = Color::White;
				this->textBox2->BackColor = Color::White;
				this->textBox3->BackColor = Color::White;

			}
			if (theme == 'w')
			{
				this->label5->BackColor = Color::Black;
				this->label5->ForeColor = Color::White;
				this->label3->BackColor = Color::White;
				this->label3->ForeColor = Color::Black;
				this->label2->BackColor = Color::White;
				this->label2->ForeColor = Color::Black;
				this->label1->BackColor = Color::White;
				this->label1->ForeColor = Color::Black;
				this->checkBox1->BackColor = Color::Black;
				this->checkBox1->ForeColor = Color::White;
				this->button1->BackColor = Color::White;
				this->button1->ForeColor = Color::Black;
				authorizationForm::BackColor = Color::White;
				this->textBox1->BackColor = Color::Black;
				this->textBox2->BackColor = Color::Black;
				this->textBox3->BackColor = Color::Black;
			}
			if (theme == 's')
			{
				this->label5->BackColor = Color::White;
				this->label5->ForeColor = Color::Red;
				this->label3->BackColor = Color::White;
				this->label3->ForeColor = Color::Black;
				this->label2->BackColor = Color::White;
				this->label2->ForeColor = Color::Black;
				this->label1->BackColor = Color::White;
				this->label1->ForeColor = Color::Black;
				this->checkBox1->BackColor = Color::White;
				this->checkBox1->ForeColor = Color::Black;
				this->button1->BackColor = Color::IndianRed;
				this->button1->ForeColor = Color::Black;
				authorizationForm::BackColor = Color::White;
				this->textBox1->BackColor = Color::PeachPuff;
				this->textBox2->BackColor = Color::PeachPuff;
				this->textBox3->BackColor = Color::PeachPuff;
			}
		}

	protected:

		~authorizationForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::IndianRed;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(17, 453);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(453, 74);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�����������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &authorizationForm::button1_ClickRegistration);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::PeachPuff;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(13, 130);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(453, 55);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::PeachPuff;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Crimson;
			this->textBox2->Location = System::Drawing::Point(13, 226);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(453, 55);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::PeachPuff;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(13, 334);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(453, 55);
			this->textBox3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 309);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"����������� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 201);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(256, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"������ ��� �����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(13, 107);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(237, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"��� ������������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 34);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(347, 38);
			this->label5->TabIndex = 11;
			this->label5->Text = L"�����������";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 8));
			this->checkBox1->Location = System::Drawing::Point(17, 407);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(337, 22);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"� ���������� � ���������.\r\n";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &authorizationForm::checkBox1_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(640, 30);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(57, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->�����ToolStripMenuItem->Text = L"���.��";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::�����ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->�������ToolStripMenuItem->Text = L"�����.��";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::�������ToolStripMenuItem_Click_1);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->������ToolStripMenuItem->Text = L"����.��";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(61, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::������ToolStripMenuItem_Click_1);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::�������ToolStripMenuItem_Click_1);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::�����������ToolStripMenuItem_Click);
			// 
			// authorizationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(640, 593);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"authorizationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����������";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &authorizationForm::authorizationForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &authorizationForm::authorizationForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: bool checkLog = false;//bool ���������� ��� �������� ����������� ������������
	private: System::Void button1_ClickRegistration(System::Object^ sender, System::EventArgs^ e);//������� ������ 1
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);//������� check box
	private: System::Void authorizationForm_Load(System::Object^ sender, System::EventArgs^ e);//������� ��� �������� �����
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);//������� ��������� textbox1
	private: System::Void textBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e);//������� text box �� ������� ����
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);//������� ��������� textbox2
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e);//������� ��������� textbox3
	private: System::Void textBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e);//������� text box2 �� ������� ����
	private: System::Void textBox3_DoubleClick(System::Object^ sender, System::EventArgs^ e);//������� text box3 �� ������� ����

private: System::Void authorizationForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)//����� ��� �������� exe �� ����������� ��-�� ��������� �������� � �������
{
	Application::Exit();
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //����� ����� �����(��� ��) 
{
	this->label5->Text = "���I�������";
	this->label3->Text = "��� ����������i��";
	this->label2->Text = "������ ��� �������";
	this->label1->Text = "���������� ������";
	this->checkBox1->Text = "� ��������� � �������";
	this->button1->Text = "���i�������";
	this->�����ToolStripMenuItem->Text = "���.����";
	this->������ToolStripMenuItem->Text = "����.����";
	this->�������ToolStripMenuItem->Text = "�����.����";
	this->����ToolStripMenuItem->Text = "����";
	this->����ToolStripMenuItem->Text = "����";
	this->Text = "���I��������";
}

private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //����� ����� �����(���� ��)
{
	this->label5->Text = "REGISTRATION";
	this->label3->Text = "Username";
	this->label2->Text = "Login password";
	this->label1->Text = "�onfirm the password";
	this->checkBox1->Text = "I am familiar with the rules";
	this->button1->Text = "Registration";
	this->������ToolStripMenuItem->Text = "Eng.lang";
	this->�����ToolStripMenuItem->Text = "Bel.lang";
	this->�������ToolStripMenuItem->Text = "Russk.lang";
	this->����ToolStripMenuItem->Text = "Language";
	this->����ToolStripMenuItem->Text = "Thems";
	this->Text = "REGISTRATION";
}
private: System::Void �������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)//����� ����� ����� (����� ��)
{
	this->label5->Text = "�����������";
	this->label3->Text = "��� �����������";
	this->label2->Text = "������ ��� �����";
	this->label1->Text = "����������� ������";
	this->checkBox1->Text = "� ���������� � ���������";
	this->button1->Text = "�����������";
	this->������ToolStripMenuItem->Text = "����.��";
	this->�����ToolStripMenuItem->Text = "���.��";
	this->�������ToolStripMenuItem->Text = "�����.��";
	this->����ToolStripMenuItem->Text = "����";
	this->����ToolStripMenuItem->Text = "����";
	this->Text = "�����������";


}

private: System::Void ������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) //����� ������ ����
{
	this->label5->BackColor = Color::White;
	this->label5->ForeColor = Color::Black;
	this->label3->BackColor = Color::White;
	this->label2->BackColor = Color::White;
	this->label1->BackColor = Color::White;
	this->checkBox1->BackColor = Color::White;
	this->checkBox1->ForeColor = Color::Black;
	this->button1->BackColor = Color::White;
	authorizationForm::BackColor = Color::Black;
	this->textBox1->BackColor = Color::White;
	this->textBox2->BackColor = Color::White;
	this->textBox3->BackColor = Color::White;
}
 private: System::Void �������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)//����� ������� ����
{
	this->label5->BackColor = Color::Black;
	this->label5->ForeColor = Color::White;
	this->label3->BackColor = Color::White;
	this->label3->ForeColor = Color::Black;
	this->label2->BackColor = Color::White;
	this->label2->ForeColor = Color::Black;
	this->label1->BackColor = Color::White;
	this->label1->ForeColor = Color::Black;
	this->checkBox1->BackColor = Color::Black;
	this->checkBox1->ForeColor = Color::White;
	this->button1->BackColor = Color::White;
	this->button1->ForeColor = Color::Black;
	authorizationForm::BackColor = Color::White;
	this->textBox1->BackColor = Color::Black;
	this->textBox2->BackColor = Color::Black;
	this->textBox3->BackColor = Color::Black;


}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //����� �� ����������� ����
{
	this->label5->BackColor = Color::White;
	this->label5->ForeColor = Color::Red;
	this->label3->BackColor = Color::White;
	this->label3->ForeColor = Color::Black;
	this->label2->BackColor = Color::White;
	this->label2->ForeColor = Color::Black;
	this->label1->BackColor = Color::White;
	this->label1->ForeColor = Color::Black;
	this->checkBox1->BackColor = Color::White;
	this->checkBox1->ForeColor = Color::Black;
	this->button1->BackColor = Color::IndianRed;
	this->button1->ForeColor = Color::Black;
	authorizationForm::BackColor = Color::White;
	this->textBox1->BackColor = Color::PeachPuff;
	this->textBox2->BackColor = Color::PeachPuff;
	this->textBox3->BackColor = Color::PeachPuff;

}

};
};
