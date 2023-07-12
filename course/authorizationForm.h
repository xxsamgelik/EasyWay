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
				this->label5->Text = "ÐÅÃÈÑÒÐÀÖÈß";
				this->label3->Text = "Èìÿ ïîëüçâàòåëÿ";
				this->label2->Text = "Ïàðîëü äëÿ âõîäà";
				this->label1->Text = "Ïîäòâåðäèòå ïàðîëü";
				this->checkBox1->Text = "ß îçíàêîìëåí ñ ïðàâèëàìè";
				this->button1->Text = "Ðåãèñòðàöèÿ";
				this->àíãëÿçToolStripMenuItem->Text = "Àíãë.ÿç";
				this->áåëÿçToolStripMenuItem->Text = "Áåë.ÿç";
				this->ðóññêÿçToolStripMenuItem->Text = "Ðóññê.ÿç";
				this->ÿçûêToolStripMenuItem->Text = "ßçûê";
				this->òåìûToolStripMenuItem->Text = "Òåìû";
				this->Text = "ÐÅÃÈÑÒÐÀÖÈß";
				
			}
			if (language == 'b')
			{
				this->label5->Text = "ÐÝÃIÑÒÐÀÖÛß";
				this->label3->Text = "Èìÿ êàðûñòàëüíiêà";
				this->label2->Text = "Ïàðîëü äëÿ ¢âàõîäó";
				this->label1->Text = "Ïàöâåðäç³öå ïàðîëü";
				this->checkBox1->Text = "ß àçíà¸ìëåíû ç ïðàâ³ëàì³";
				this->button1->Text = "Ðýãiñòðàöûÿ";
				this->áåëÿçToolStripMenuItem->Text = "Áåë.ìîâà";
				this->àíãëÿçToolStripMenuItem->Text = "Àíãë.ìîâà";
				this->ðóññêÿçToolStripMenuItem->Text = "Ðóññê.ìîâà";
				this->ÿçûêToolStripMenuItem->Text = "Ìîâà";
				this->òåìûToolStripMenuItem->Text = "Òýìû";
				this->Text = "ÐÝÃIÈÑÒÐÀÖÛß";
			}
			if (language == 'e')
			{
				this->label5->Text = "REGISTRATION";
				this->label3->Text = "Username";
				this->label2->Text = "Login password";
				this->label1->Text = "Ñonfirm the password";
				this->checkBox1->Text = "I am familiar with the rules";
				this->button1->Text = "Registration";
				this->àíãëÿçToolStripMenuItem->Text = "Eng.lang";
				this->áåëÿçToolStripMenuItem->Text = "Bel.lang";
				this->ðóññêÿçToolStripMenuItem->Text = "Russk.lang";
				this->ÿçûêToolStripMenuItem->Text = "Language";
				this->òåìûToolStripMenuItem->Text = "Thems";
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
	private: System::Windows::Forms::ToolStripMenuItem^ ÿçûêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåìûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëÿçToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ðóññêÿçToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëÿçToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåìíàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâåòëàÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòàíäàðòíàÿToolStripMenuItem;


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
			this->ÿçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëÿçToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ðóññêÿçToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëÿçToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåìûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåìíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâåòëàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòàíäàðòíàÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->button1->Text = L"Ðåãèñòðàöèÿ";
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
			this->label1->Text = L"Ïîäòâåðäèòå ïàðîëü";
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
			this->label2->Text = L"Ïàðîëü äëÿ âõîäà";
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
			this->label3->Text = L"Èìÿ ïîëüçîâàòåëÿ";
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
			this->label5->Text = L"ÐÅÃÈÑÒÐÀÖÈß";
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
			this->checkBox1->Text = L"ß îçíàêîìëåí ñ ïðàâèëàìè.\r\n";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &authorizationForm::checkBox1_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ÿçûêToolStripMenuItem,
					this->òåìûToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(640, 30);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ÿçûêToolStripMenuItem
			// 
			this->ÿçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->áåëÿçToolStripMenuItem,
					this->ðóññêÿçToolStripMenuItem, this->àíãëÿçToolStripMenuItem
			});
			this->ÿçûêToolStripMenuItem->Name = L"ÿçûêToolStripMenuItem";
			this->ÿçûêToolStripMenuItem->Size = System::Drawing::Size(57, 26);
			this->ÿçûêToolStripMenuItem->Text = L"ßçûê";
			// 
			// áåëÿçToolStripMenuItem
			// 
			this->áåëÿçToolStripMenuItem->Name = L"áåëÿçToolStripMenuItem";
			this->áåëÿçToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->áåëÿçToolStripMenuItem->Text = L"Áåë.ÿç";
			this->áåëÿçToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::áåëÿçToolStripMenuItem_Click);
			// 
			// ðóññêÿçToolStripMenuItem
			// 
			this->ðóññêÿçToolStripMenuItem->Name = L"ðóññêÿçToolStripMenuItem";
			this->ðóññêÿçToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->ðóññêÿçToolStripMenuItem->Text = L"Ðóññê.ÿç";
			this->ðóññêÿçToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::ðóññêÿçToolStripMenuItem_Click_1);
			// 
			// àíãëÿçToolStripMenuItem
			// 
			this->àíãëÿçToolStripMenuItem->Name = L"àíãëÿçToolStripMenuItem";
			this->àíãëÿçToolStripMenuItem->Size = System::Drawing::Size(146, 26);
			this->àíãëÿçToolStripMenuItem->Text = L"Àíãë.ÿç";
			this->àíãëÿçToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::àíãëÿçToolStripMenuItem_Click);
			// 
			// òåìûToolStripMenuItem
			// 
			this->òåìûToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->òåìíàÿToolStripMenuItem,
					this->ñâåòëàÿToolStripMenuItem, this->ñòàíäàðòíàÿToolStripMenuItem
			});
			this->òåìûToolStripMenuItem->Name = L"òåìûToolStripMenuItem";
			this->òåìûToolStripMenuItem->Size = System::Drawing::Size(61, 26);
			this->òåìûToolStripMenuItem->Text = L"Òåìû";
			// 
			// òåìíàÿToolStripMenuItem
			// 
			this->òåìíàÿToolStripMenuItem->Name = L"òåìíàÿToolStripMenuItem";
			this->òåìíàÿToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->òåìíàÿToolStripMenuItem->Text = L"Òåìíàÿ";
			this->òåìíàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::òåìíàÿToolStripMenuItem_Click_1);
			// 
			// ñâåòëàÿToolStripMenuItem
			// 
			this->ñâåòëàÿToolStripMenuItem->Name = L"ñâåòëàÿToolStripMenuItem";
			this->ñâåòëàÿToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ñâåòëàÿToolStripMenuItem->Text = L"Ñâåòëàÿ";
			this->ñâåòëàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::ñâåòëàÿToolStripMenuItem_Click_1);
			// 
			// ñòàíäàðòíàÿToolStripMenuItem
			// 
			this->ñòàíäàðòíàÿToolStripMenuItem->Name = L"ñòàíäàðòíàÿToolStripMenuItem";
			this->ñòàíäàðòíàÿToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->ñòàíäàðòíàÿToolStripMenuItem->Text = L"Ñòàíäàðòíàÿ";
			this->ñòàíäàðòíàÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm::ñòàíäàðòíàÿToolStripMenuItem_Click);
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
			this->Text = L"ÐÅÃÈÑÒÐÀÖÈß";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &authorizationForm::authorizationForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &authorizationForm::authorizationForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: bool checkLog = false;//bool ïåðåìåííàÿ äëÿ ïðîâåðêè ðåãèñòðàöèè ïîëüçîâàòåëÿ
	private: System::Void button1_ClickRegistration(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå êíîïêè 1
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå check box
	private: System::Void authorizationForm_Load(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå ïðè çàãðóçêå ôîðìû
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå èçìåíåíèå textbox1
	private: System::Void textBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå text box íà äâîéíîé êëèê
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå èçìåíåíèå textbox2
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå èçìåíåíèå textbox3
	private: System::Void textBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå text box2 íà äâîéíîé êëèê
	private: System::Void textBox3_DoubleClick(System::Object^ sender, System::EventArgs^ e);//ñîáûòèå text box3 íà äâîéíîé êëèê

private: System::Void authorizationForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)//ìåòîä äëÿ óäàëåíèÿ exe èç äèñòïåò÷åðà äà-áû óñòðàíèòü ïðîáëåìû ñ ïàìÿòüþ
{
	Application::Exit();
}
private: System::Void áåëÿçToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //ìåòîä ñìåíû ÿçûêà(áåë ÿç) 
{
	this->label5->Text = "ÐÝÃIÑÒÐÀÖÛß";
	this->label3->Text = "Èìÿ êàðûñòàëüíiêà";
	this->label2->Text = "Ïàðîëü äëÿ ¢âàõîäó";
	this->label1->Text = "Ïàöâåðäç³öå ïàðîëü";
	this->checkBox1->Text = "ß àçíà¸ìëåíû ç ïðàâ³ëàì³";
	this->button1->Text = "Ðýãiñòðàöûÿ";
	this->áåëÿçToolStripMenuItem->Text = "Áåë.ìîâà";
	this->àíãëÿçToolStripMenuItem->Text = "Àíãë.ìîâà";
	this->ðóññêÿçToolStripMenuItem->Text = "Ðóññê.ìîâà";
	this->ÿçûêToolStripMenuItem->Text = "Ìîâà";
	this->òåìûToolStripMenuItem->Text = "Òýìû";
	this->Text = "ÐÝÃIÈÑÒÐÀÖÛß";
}

private: System::Void àíãëÿçToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //ìåòîä ñìåíû ÿçûêà(àíãë ÿç)
{
	this->label5->Text = "REGISTRATION";
	this->label3->Text = "Username";
	this->label2->Text = "Login password";
	this->label1->Text = "Ñonfirm the password";
	this->checkBox1->Text = "I am familiar with the rules";
	this->button1->Text = "Registration";
	this->àíãëÿçToolStripMenuItem->Text = "Eng.lang";
	this->áåëÿçToolStripMenuItem->Text = "Bel.lang";
	this->ðóññêÿçToolStripMenuItem->Text = "Russk.lang";
	this->ÿçûêToolStripMenuItem->Text = "Language";
	this->òåìûToolStripMenuItem->Text = "Thems";
	this->Text = "REGISTRATION";
}
private: System::Void ðóññêÿçToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)//ìåòîä ñìåíû ÿçûêà (ðóññê ÿç)
{
	this->label5->Text = "ÐÅÃÈÑÒÐÀÖÈß";
	this->label3->Text = "Èìÿ ïîëüçâàòåëÿ";
	this->label2->Text = "Ïàðîëü äëÿ âõîäà";
	this->label1->Text = "Ïîäòâåðäèòå ïàðîëü";
	this->checkBox1->Text = "ß îçíàêîìëåí ñ ïðàâèëàìè";
	this->button1->Text = "Ðåãèñòðàöèÿ";
	this->àíãëÿçToolStripMenuItem->Text = "Àíãë.ÿç";
	this->áåëÿçToolStripMenuItem->Text = "Áåë.ÿç";
	this->ðóññêÿçToolStripMenuItem->Text = "Ðóññê.ÿç";
	this->ÿçûêToolStripMenuItem->Text = "ßçûê";
	this->òåìûToolStripMenuItem->Text = "Òåìû";
	this->Text = "ÐÅÃÈÑÒÐÀÖÈß";


}

private: System::Void òåìíàÿToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) //ñìåíà òåìíîé òåìû
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
 private: System::Void ñâåòëàÿToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)//ñìåíà ñâåòëîé òåìû
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
private: System::Void ñòàíäàðòíàÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) //ñìåíà íà ñòàíäàðòíóþ òåìó
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
