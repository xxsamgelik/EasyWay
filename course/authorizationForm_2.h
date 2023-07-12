#pragma once
#include <fstream>//подключение библиотеки для работы с файлами
#include <vector>//подключение библиотеки для работы с векторами
#include <msclr\marshal_cppstd.h>//подключение библиотеки для конвертирования string

namespace coursepaper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class authorizationForm_2 : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ image2;
		int checkthemes = 0;
	public:
		authorizationForm_2(void)
		{
			InitializeComponent();

		}
	protected:

		~authorizationForm_2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темнаяТемаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белаяТемаToolStripMenuItem;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ стандартнаяТемаToolStripMenuItem;


	private:System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(authorizationForm_2::typeid));
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->темыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->темнаяТемаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->белаяТемаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->стандартнаяТемаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->menuStrip1->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackColor = System::Drawing::Color::PeachPuff;
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(640, 36);
			   this->menuStrip1->TabIndex = 22;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // настройкиToolStripMenuItem
			   // 
			   this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->языкToolStripMenuItem,
					   this->темыToolStripMenuItem
			   });
			   this->настройкиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Light", 12, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			   this->настройкиToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			   this->настройкиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"настройкиToolStripMenuItem.Image")));
			   this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			   this->настройкиToolStripMenuItem->Size = System::Drawing::Size(139, 32);
			   this->настройкиToolStripMenuItem->Text = L"Настройки";
			   // 
			   // языкToolStripMenuItem
			   // 
			   this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->русскийToolStripMenuItem,
					   this->английскийToolStripMenuItem, this->белорусскийToolStripMenuItem
			   });
			   this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			   this->языкToolStripMenuItem->Size = System::Drawing::Size(224, 32);
			   this->языкToolStripMenuItem->Text = L"Язык";
			   // 
			   // русскийToolStripMenuItem
			   // 
			   this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			   this->русскийToolStripMenuItem->Size = System::Drawing::Size(149, 32);
			   this->русскийToolStripMenuItem->Text = L"Русск.";
			   this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm_2::русскийToolStripMenuItem_Click);
			   // 
			   // английскийToolStripMenuItem
			   // 
			   this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			   this->английскийToolStripMenuItem->Size = System::Drawing::Size(149, 32);
			   this->английскийToolStripMenuItem->Text = L"Англ.";
			   this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm_2::английскийToolStripMenuItem_Click);
			   // 
			   // белорусскийToolStripMenuItem
			   // 
			   this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			   this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(149, 32);
			   this->белорусскийToolStripMenuItem->Text = L"Белл.";
			   this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm_2::белорусскийToolStripMenuItem_Click);
			   // 
			   // темыToolStripMenuItem
			   // 
			   this->темыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->темнаяТемаToolStripMenuItem,
					   this->белаяТемаToolStripMenuItem, this->стандартнаяТемаToolStripMenuItem
			   });
			   this->темыToolStripMenuItem->Name = L"темыToolStripMenuItem";
			   this->темыToolStripMenuItem->Size = System::Drawing::Size(224, 32);
			   this->темыToolStripMenuItem->Text = L"Темы";
			   // 
			   // темнаяТемаToolStripMenuItem
			   // 
			   this->темнаяТемаToolStripMenuItem->Name = L"темнаяТемаToolStripMenuItem";
			   this->темнаяТемаToolStripMenuItem->Size = System::Drawing::Size(253, 32);
			   this->темнаяТемаToolStripMenuItem->Text = L"Темная тема";
			   this->темнаяТемаToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm_2::темнаяТемаToolStripMenuItem_Click);
			   // 
			   // белаяТемаToolStripMenuItem
			   // 
			   this->белаяТемаToolStripMenuItem->Name = L"белаяТемаToolStripMenuItem";
			   this->белаяТемаToolStripMenuItem->Size = System::Drawing::Size(253, 32);
			   this->белаяТемаToolStripMenuItem->Text = L"Белая тема";
			   this->белаяТемаToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm_2::белаяТемаToolStripMenuItem_Click);
			   // 
			   // стандартнаяТемаToolStripMenuItem
			   // 
			   this->стандартнаяТемаToolStripMenuItem->Name = L"стандартнаяТемаToolStripMenuItem";
			   this->стандартнаяТемаToolStripMenuItem->Size = System::Drawing::Size(253, 32);
			   this->стандартнаяТемаToolStripMenuItem->Text = L"Стандартная тема";
			   this->стандартнаяТемаToolStripMenuItem->Click += gcnew System::EventHandler(this, &authorizationForm_2::стандартнаяТемаToolStripMenuItem_Click);
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::PeachPuff;
			   this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->panel1->Controls->Add(this->textBox2);
			   this->panel1->Controls->Add(this->linkLabel1);
			   this->panel1->Controls->Add(this->label1);
			   this->panel1->Controls->Add(this->button1);
			   this->panel1->Controls->Add(this->pictureBox2);
			   this->panel1->Controls->Add(this->label3);
			   this->panel1->Controls->Add(this->pictureBox1);
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Controls->Add(this->textBox1);
			   this->panel1->Location = System::Drawing::Point(16, 40);
			   this->panel1->Margin = System::Windows::Forms::Padding(4);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(600, 504);
			   this->panel1->TabIndex = 25;
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->textBox2->Location = System::Drawing::Point(39, 192);
			   this->textBox2->Margin = System::Windows::Forms::Padding(4);
			   this->textBox2->Multiline = true;
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(453, 62);
			   this->textBox2->TabIndex = 14;
			   // 
			   // linkLabel1
			   // 
			   this->linkLabel1->AutoSize = true;
			   this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->linkLabel1->ForeColor = System::Drawing::Color::Black;
			   this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			   this->linkLabel1->Location = System::Drawing::Point(51, 271);
			   this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->linkLabel1->Name = L"linkLabel1";
			   this->linkLabel1->Size = System::Drawing::Size(128, 20);
			   this->linkLabel1->TabIndex = 21;
			   this->linkLabel1->TabStop = true;
			   this->linkLabel1->Text = L"Создать аккаунт.";
			   this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &authorizationForm_2::linkLabel1_LinkClicked);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->ForeColor = System::Drawing::Color::Red;
			   this->label1->Location = System::Drawing::Point(49, 10);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(75, 32);
			   this->label1->TabIndex = 24;
			   this->label1->Text = L"ВХОД";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Red;
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button1->CausesValidation = false;
			   this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(242, 262);
			   this->button1->Margin = System::Windows::Forms::Padding(4);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(213, 51);
			   this->button1->TabIndex = 12;
			   this->button1->Text = L"Войти";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &authorizationForm_2::button1_Click);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			   this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(4, 205);
			   this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(27, 31);
			   this->pictureBox2->TabIndex = 23;
			   this->pictureBox2->TabStop = false;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->ForeColor = System::Drawing::Color::Red;
			   this->label3->Location = System::Drawing::Point(35, 65);
			   this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(130, 20);
			   this->label3->TabIndex = 18;
			   this->label3->Text = L"Имя пользователя";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::White;
			   this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(4, 102);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(27, 31);
			   this->pictureBox1->TabIndex = 22;
			   this->pictureBox1->TabStop = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->ForeColor = System::Drawing::Color::Red;
			   this->label2->Location = System::Drawing::Point(35, 165);
			   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(67, 23);
			   this->label2->TabIndex = 17;
			   this->label2->Text = L"Пароль";
			   this->label2->Click += gcnew System::EventHandler(this, &authorizationForm_2::label2_Click);
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->textBox1->Location = System::Drawing::Point(39, 89);
			   this->textBox1->Margin = System::Windows::Forms::Padding(4);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(453, 62);
			   this->textBox1->TabIndex = 13;
			   // 
			   // authorizationForm_2
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::PeachPuff;
			   this->ClientSize = System::Drawing::Size(640, 562);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->menuStrip1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			   this->MainMenuStrip = this->menuStrip1;
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->MaximizeBox = false;
			   this->Name = L"authorizationForm_2";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"АВТОРИЗАЦИЯ";
			   this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &authorizationForm_2::authorizationForm_2_FormClosed);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

		   private:
			   char language;
			   char theme;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);//событие нажатия на ссылку

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);//событие нажатия на кнопку
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);//событие на изменения текста в textbox
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e);//событие на изменения текста в textbox

	private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);//событие смены языка на английский
	private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);//событие смены языка на русский
	private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);//событие смены языка на бел.яз

	private: System::Void темнаяТемаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);//событие смены темы на темную
	private: System::Void белаяТемаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);//событие смены темы на светлую

	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e);//событие на отслеживание курсора
	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e);//событие на отслеживание курсора
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e){//метод нажатия на Label
	}
	private: System::Void стандартнаяТемаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void authorizationForm_2_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)//метод закрытия лишних exe из диспетчера(да-бы не засорять память)
{
	Application::Exit();
}
};
}
