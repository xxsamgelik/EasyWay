#pragma once
#include "graph.h"//подключение окна graph
#include <list>//подклюение библиотеки списка
#include<queue>//подключение библиотеки очереди
#include<stack>//подключение библиотеки стэк
#include<string>//подключение библиотеки стринг
#include"MyForm.h"
#include "authorizationForm_2.h"
#include<exception>

using namespace System::IO;
using namespace std;
struct Edge//структура для ребер
{
	int begin;
	int end;
};

namespace coursepaper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class main_form : public System::Windows::Forms::Form
	{
	public:


		graph c_graph;
		main_form(Bitmap^ image2)//создание поля для рисовки графа
		{
			InitializeComponent();
			image = image2;
			c_graph.createGraphics(image);
		}
		main_form(Bitmap^ image2, char language, char theme)//создание поля для рисовки графа
		{
			InitializeComponent();
			image = image2;
			c_graph.createGraphics(image);
			if (language == 'b')//if для того чтобы когда пользователь выбирал тему /язык она/он сохранялся в последующей форме.
			{
				this->label2->Text = "Коль-ць вяршыняў";
				this->label4->Text = "Пошук вяршыні";
				this->label5->Text = "Матрыца сумежнасцi";
				this->button5->Text = "Просты шлях";
				this->button6->Text = "Сярэдняя даўжыня";
				this->label3->Text = "Матрыца вагау";
				this->языкToolStripMenuItem->Text = "Мова";
				this->русскToolStripMenuItem->Text = "Руская.мова";
				this->белToolStripMenuItem->Text = "Бел мова";
				this->англToolStripMenuItem->Text = "Aнгл мова";
				this->темыToolStripMenuItem->Text = "Тэмы";
				this->темнаяToolStripMenuItem->Text = "Цёмная";
				this->светлаяToolStripMenuItem->Text = "Светлая";
				this->стандартнаяToolStripMenuItem->Text = "Стандартная";
				this->справкаToolStripMenuItem->Text = "Спраука";
				this->Text = "Галоунае акно";
				this->сохранитьКакToolStripMenuItem->Text = "Захаваць як";
				this->открытьToolStripMenuItem->Text = "Адкрыць";
				this->матрицаToolStripMenuItem->Text = "Захаваць матрыцу";
				this->открытьМатрицуToolStripMenuItem->Text = "Адкрыць матрыцу";
				this->language = 'b';
			}
			if (language == 'e')//if для того чтобы когда пользователь выбирал тему /язык она/он сохранялся в последующей форме.
			{
				this->label2->Text = "Number of peaks";
				this->label4->Text = "Peak search";
				this->label5->Text = "Adjacency matrix";
				this->button5->Text = "Easy way";
				this->button6->Text = "Average length";
				this->label3->Text = "Matrix lenghts";
				this->языкToolStripMenuItem->Text = "Language";
				this->русскToolStripMenuItem->Text = "Russk lang";
				this->белToolStripMenuItem->Text = "Bel lang";
				this->англToolStripMenuItem->Text = "Eng lang";
				this->темыToolStripMenuItem->Text = "Thems";
				this->темнаяToolStripMenuItem->Text = "Dark";
				this->светлаяToolStripMenuItem->Text = "Light";
				this->стандартнаяToolStripMenuItem->Text = "Default";
				this->справкаToolStripMenuItem->Text = "Reference";
				this->Text = "Main window";
				this->сохранитьКакToolStripMenuItem->Text = "Save";
				this->открытьToolStripMenuItem->Text = "Open";
				this->матрицаToolStripMenuItem->Text = "Matrix save";
				this->открытьМатрицуToolStripMenuItem->Text = "Open matrix";
				this->language = 'e';

			}
			if (language == 'r')//if для того чтобы когда пользователь выбирал тему /язык она/он сохранялся в последующей форме.
			{
				this->label2->Text = "Кол-во вершин";
				this->label4->Text = "Поиск вершины";
				this->label5->Text = "Матрица смежности";
				this->button5->Text = "Простой путь";
				this->button6->Text = "Средняя длина";
				this->label3->Text = "Матрица весов";
				this->языкToolStripMenuItem->Text = "Язык";
				this->русскToolStripMenuItem->Text = "Русск.яз";
				this->белToolStripMenuItem->Text = "Бел.яз";
				this->англToolStripMenuItem->Text = "Aнгл.яз";
				this->темыToolStripMenuItem->Text = "Темы";
				this->темнаяToolStripMenuItem->Text = "Тёмная";
				this->светлаяToolStripMenuItem->Text = "Светлая";
				this->стандартнаяToolStripMenuItem->Text = "Стандартная";
				this->справкаToolStripMenuItem->Text = "Справка";
				this->Text = "Главное окно";
				this->открытьToolStripMenuItem->Text = "Открыть";
				this->сохранитьКакToolStripMenuItem->Text = "Сохранить";
				this->открытьToolStripMenuItem->Text = "Открыть";
				this->матрицаToolStripMenuItem->Text = "Сохранить матрицу";
				this->открытьМатрицуToolStripMenuItem->Text = "Открыть матрицу";
				this->language = 'r';

			}
			if (theme == 'd')//if для того чтобы когда пользователь выбирал тему /язык она/он сохранялся в последующей форме.
			{
				main_form::BackColor = Color::Black;
				this->label2->ForeColor = Color::White;
				this->label4->ForeColor = Color::White;
				this->label5->ForeColor = Color::White;
				this->button5->BackColor = Color::White;
				this->button6->ForeColor = Color::Black;
				this->dataGridView1->BackColor = Color::White;
				this->button2->BackColor = Color::Black;
				this->button4->BackColor = Color::Black;
				this->button1->BackColor = Color::Black;
				this->theme = 'd';
			}
			if (theme == 'w')//if для того чтобы когда пользователь выбирал тему /язык она/он сохранялся в последующей форме.
			{
				main_form::BackColor = Color::White;
				this->label2->ForeColor = Color::Black;
				this->label4->ForeColor = Color::Black;
				this->label5->ForeColor = Color::Black;
				this->button5->ForeColor = Color::Black;
				this->button6->ForeColor = Color::Black;
				this->dataGridView1->BackColor = Color::Black;
				this->button2->BackColor = Color::White;
				this->button4->BackColor = Color::White;
				this->button1->BackColor = Color::White;
				this->label6->ForeColor = Color::Black;
				this->theme = 'w';
			}
			if (theme == 's')//if для того чтобы когда пользователь выбирал тему /язык она/он сохранялся в последующей форме.
			{

				main_form::BackColor = Color::PeachPuff;
				this->label2->ForeColor = Color::Black;
				this->label4->ForeColor = Color::Black;
				this->label5->ForeColor = Color::Black;
				this->button5->ForeColor = Color::Black;
				this->button6->ForeColor = Color::Black;
				this->dataGridView1->BackColor = Color::Black;
				this->button2->BackColor = Color::PeachPuff;
				this->button4->BackColor = Color::PeachPuff;
				this->button1->BackColor = Color::PeachPuff;
				this->theme = 's';
			}
		}

	protected:

		~main_form()
		{
			if (components)//удаление массивов и компонентов
			{
				delete[] masX;
				delete[] masY;
				delete components;
			}
		}
	public:
		Bitmap^ image;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ англToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ темнаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ светлаяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ стандартнаяToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ матрицаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьМатрицуToolStripMenuItem;

















	protected:

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main_form::typeid));
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->русскToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->белToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->англToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->темыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->темнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->светлаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->стандартнаяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->матрицаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->открытьМатрицуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::White;
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pictureBox1->Location = System::Drawing::Point(495, 31);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(702, 443);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main_form::pictureBox1_MouseClick_1);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::PeachPuff;
			   this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			   this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button1->CausesValidation = false;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->ForeColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(226, 94);
			   this->button1->Margin = System::Windows::Forms::Padding(4);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(99, 44);
			   this->button1->TabIndex = 1;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &main_form::button1_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			   this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->ForeColor = System::Drawing::Color::White;
			   this->button3->Location = System::Drawing::Point(436, 97);
			   this->button3->Margin = System::Windows::Forms::Padding(4);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(51, 39);
			   this->button3->TabIndex = 4;
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &main_form::button3_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			   this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			   this->dataGridView1->ColumnHeadersHeight = 5;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			   this->dataGridView1->Location = System::Drawing::Point(22, 279);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 5;
			   this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			   this->dataGridView1->Size = System::Drawing::Size(218, 175);
			   this->dataGridView1->TabIndex = 6;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::PeachPuff;
			   this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			   this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->ForeColor = System::Drawing::Color::White;
			   this->button2->Location = System::Drawing::Point(436, 46);
			   this->button2->Margin = System::Windows::Forms::Padding(4);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(51, 43);
			   this->button2->TabIndex = 5;
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &main_form::button2_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(45, 234);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(0, 31);
			   this->label1->TabIndex = 7;
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(332, 47);
			   this->textBox3->Multiline = true;
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(100, 39);
			   this->textBox3->TabIndex = 13;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(222, 31);
			   this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(103, 16);
			   this->label2->TabIndex = 8;
			   this->label2->Text = L"Кол-во вершин\r\n";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(225, 47);
			   this->textBox1->Margin = System::Windows::Forms::Padding(4);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(100, 39);
			   this->textBox1->TabIndex = 2;
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::PeachPuff;
			   this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			   this->button4->Location = System::Drawing::Point(332, 94);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(100, 44);
			   this->button4->TabIndex = 14;
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &main_form::button4_Click_1);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(19, 259);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(139, 16);
			   this->label5->TabIndex = 17;
			   this->label5->Text = L"Матрица смежности";
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(12, 45);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(100, 41);
			   this->button5->TabIndex = 19;
			   this->button5->Text = L"Простой путь";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &main_form::button5_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Cursor = System::Windows::Forms::Cursors::No;
			   this->textBox2->Location = System::Drawing::Point(13, 93);
			   this->textBox2->Margin = System::Windows::Forms::Padding(4);
			   this->textBox2->Multiline = true;
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->ReadOnly = true;
			   this->textBox2->Size = System::Drawing::Size(99, 44);
			   this->textBox2->TabIndex = 20;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(324, 31);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(108, 16);
			   this->label4->TabIndex = 22;
			   this->label4->Text = L"Поиск вершины";
			   // 
			   // button6
			   // 
			   this->button6->Location = System::Drawing::Point(118, 47);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(100, 41);
			   this->button6->TabIndex = 23;
			   this->button6->Text = L"Средняя длинна";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &main_form::button6_Click);
			   // 
			   // textBox5
			   // 
			   this->textBox5->Cursor = System::Windows::Forms::Cursors::No;
			   this->textBox5->Location = System::Drawing::Point(119, 92);
			   this->textBox5->Multiline = true;
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->ReadOnly = true;
			   this->textBox5->Size = System::Drawing::Size(100, 44);
			   this->textBox5->TabIndex = 24;
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				   this->языкToolStripMenuItem,
					   this->темыToolStripMenuItem, this->справкаToolStripMenuItem, this->сохранитьКакToolStripMenuItem, this->открытьToolStripMenuItem,
					   this->матрицаToolStripMenuItem, this->открытьМатрицуToolStripMenuItem
			   });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(1210, 28);
			   this->menuStrip1->TabIndex = 26;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // языкToolStripMenuItem
			   // 
			   this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->русскToolStripMenuItem,
					   this->белToolStripMenuItem, this->англToolStripMenuItem
			   });
			   this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			   this->языкToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			   this->языкToolStripMenuItem->Text = L"Язык";
			   // 
			   // русскToolStripMenuItem
			   // 
			   this->русскToolStripMenuItem->Name = L"русскToolStripMenuItem";
			   this->русскToolStripMenuItem->Size = System::Drawing::Size(131, 26);
			   this->русскToolStripMenuItem->Text = L"Русск.";
			   this->русскToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::русскToolStripMenuItem_Click);
			   // 
			   // белToolStripMenuItem
			   // 
			   this->белToolStripMenuItem->Name = L"белToolStripMenuItem";
			   this->белToolStripMenuItem->Size = System::Drawing::Size(131, 26);
			   this->белToolStripMenuItem->Text = L"Бел.";
			   this->белToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::белToolStripMenuItem_Click);
			   // 
			   // англToolStripMenuItem
			   // 
			   this->англToolStripMenuItem->Name = L"англToolStripMenuItem";
			   this->англToolStripMenuItem->Size = System::Drawing::Size(131, 26);
			   this->англToolStripMenuItem->Text = L"Англ.";
			   this->англToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::англToolStripMenuItem_Click);
			   // 
			   // темыToolStripMenuItem
			   // 
			   this->темыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->темнаяToolStripMenuItem,
					   this->светлаяToolStripMenuItem, this->стандартнаяToolStripMenuItem
			   });
			   this->темыToolStripMenuItem->Name = L"темыToolStripMenuItem";
			   this->темыToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			   this->темыToolStripMenuItem->Text = L"Темы";
			   // 
			   // темнаяToolStripMenuItem
			   // 
			   this->темнаяToolStripMenuItem->Name = L"темнаяToolStripMenuItem";
			   this->темнаяToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			   this->темнаяToolStripMenuItem->Text = L"Темная";
			   this->темнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::темнаяToolStripMenuItem_Click);
			   // 
			   // светлаяToolStripMenuItem
			   // 
			   this->светлаяToolStripMenuItem->Name = L"светлаяToolStripMenuItem";
			   this->светлаяToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			   this->светлаяToolStripMenuItem->Text = L"Светлая";
			   this->светлаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::светлаяToolStripMenuItem_Click);
			   // 
			   // стандартнаяToolStripMenuItem
			   // 
			   this->стандартнаяToolStripMenuItem->Name = L"стандартнаяToolStripMenuItem";
			   this->стандартнаяToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			   this->стандартнаяToolStripMenuItem->Text = L"Стандартная";
			   this->стандартнаяToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::стандартнаяToolStripMenuItem_Click);
			   // 
			   // справкаToolStripMenuItem
			   // 
			   this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			   this->справкаToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			   this->справкаToolStripMenuItem->Text = L"Справка";
			   this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::справкаToolStripMenuItem_Click);
			   // 
			   // сохранитьКакToolStripMenuItem
			   // 
			   this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			   this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(97, 24);
			   this->сохранитьКакToolStripMenuItem->Text = L"Сохранить";
			   this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::сохранитьКакToolStripMenuItem_Click_1);
			   // 
			   // открытьToolStripMenuItem
			   // 
			   this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			   this->открытьToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			   this->открытьToolStripMenuItem->Text = L"Открыть";
			   this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::открытьToolStripMenuItem_Click_1);
			   // 
			   // матрицаToolStripMenuItem
			   // 
			   this->матрицаToolStripMenuItem->Name = L"матрицаToolStripMenuItem";
			   this->матрицаToolStripMenuItem->Size = System::Drawing::Size(186, 24);
			   this->матрицаToolStripMenuItem->Text = L"Сохранить матрицу как";
			   this->матрицаToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::матрицаToolStripMenuItem_Click_1);
			   // 
			   // dataGridView2
			   // 
			   this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			   this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			   this->dataGridView2->ColumnHeadersHeight = 5;
			   this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			   this->dataGridView2->Location = System::Drawing::Point(269, 279);
			   this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			   this->dataGridView2->Name = L"dataGridView2";
			   this->dataGridView2->RowHeadersWidth = 5;
			   this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			   this->dataGridView2->Size = System::Drawing::Size(218, 175);
			   this->dataGridView2->TabIndex = 27;
			   this->dataGridView2->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &main_form::dataGridView2_CellEndEdit);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(281, 259);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(107, 16);
			   this->label3->TabIndex = 28;
			   this->label3->Text = L"Матрица весов";
			   // 
			   // textBox4
			   // 
			   this->textBox4->Cursor = System::Windows::Forms::Cursors::No;
			   this->textBox4->Location = System::Drawing::Point(12, 160);
			   this->textBox4->Multiline = true;
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(100, 36);
			   this->textBox4->TabIndex = 29;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(19, 141);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(88, 16);
			   this->label6->TabIndex = 30;
			   this->label6->Text = L"Другие пути";
			   // 
			   // openFileDialog1
			   // 
			   this->openFileDialog1->FileName = L"openFileDialog1";
			   // 
			   // открытьМатрицуToolStripMenuItem
			   // 
			   this->открытьМатрицуToolStripMenuItem->Name = L"открытьМатрицуToolStripMenuItem";
			   this->открытьМатрицуToolStripMenuItem->Size = System::Drawing::Size(144, 24);
			   this->открытьМатрицуToolStripMenuItem->Text = L"Открыть матрицу";
			   this->открытьМатрицуToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::открытьМатрицуToolStripMenuItem_Click);
			   // 
			   // main_form
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::PeachPuff;
			   this->ClientSize = System::Drawing::Size(1210, 483);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->textBox4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->dataGridView2);
			   this->Controls->Add(this->textBox5);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->menuStrip1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->MainMenuStrip = this->menuStrip1;
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"main_form";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Главное окно";
			   this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &main_form::main_form_FormClosed);
			   this->Load += gcnew System::EventHandler(this, &main_form::main_form_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private:
		char language;
		char theme;
	private:int i_gl = 0;//приватная переменная
	private:int size = 0;//приватная переменная
	private:int sel_vert = 0;//приватная переменная
	private:int* masX;//приватный массив
	private:int* masY;//приватный массив
	private:int** masM;
	private: int* masLine;//приватный массив
	private: int* masLineInter;//приватный массив
	private: int intermediate = 0;//приватная переменная
	private: int* matrix;//приватный массив
	private:int x = 0, y = 0, z = i_gl, current = 0, value = 0;//приватные переменные
	private:bool flag = false, flag2 = false, flag3 = false;//приватные переменные
	private: int it_1 = 0, it_2 = 0;//приватные переменные
	private: int average = 0;//приватная переменная
	private: int count = 1;//счетчик
	private: System::Void русскToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена языка(русский)
	{

		this->label2->Text = "Кол-во вершин";
		this->label4->Text = "Поиск вершины";
		this->label5->Text = "Матрица смежности";
		this->button5->Text = "Простой путь";
		this->button6->Text = "Средняя длина";
		this->label3->Text = "Матрица весов";
		this->языкToolStripMenuItem->Text = "Язык";
		this->русскToolStripMenuItem->Text = "Русск.яз";
		this->белToolStripMenuItem->Text = "Бел.яз";
		this->англToolStripMenuItem->Text = "Aнгл.яз";
		this->темыToolStripMenuItem->Text = "Темы";
		this->темнаяToolStripMenuItem->Text = "Тёмная";
		this->светлаяToolStripMenuItem->Text = "Светлая";
		this->стандартнаяToolStripMenuItem->Text = "Стандартная";
		this->справкаToolStripMenuItem->Text = "Справка";
		this->Text = "Главное окно";
		this->сохранитьКакToolStripMenuItem->Text = "Сохранить";
		this->открытьToolStripMenuItem->Text = "Открыть";
		this->label6->Text = "Другие пути";
		this->матрицаToolStripMenuItem->Text = "Сохранить матрицу";
		this->открытьМатрицуToolStripMenuItem->Text = "Открыть матрицу";
		this->language = 'r';




	}
	private: System::Void белToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена языка(белорусский)
	{
		this->label2->Text = "Коль-ць вяршыняў";
		this->label4->Text = "Пошук вяршыні";
		this->label5->Text = "Матрыца сумежнасцi";
		this->button5->Text = "Просты шлях";
		this->button6->Text = "Сярэдняя даўжыня";
		this->label3->Text = "Матрыца вагау";
		this->языкToolStripMenuItem->Text = "Мова";
		this->русскToolStripMenuItem->Text = "Руская.мова";
		this->белToolStripMenuItem->Text = "Бел мова";
		this->англToolStripMenuItem->Text = "Aнгл мова";
		this->темыToolStripMenuItem->Text = "Тэмы";
		this->темнаяToolStripMenuItem->Text = "Цёмная";
		this->светлаяToolStripMenuItem->Text = "Светлая";
		this->стандартнаяToolStripMenuItem->Text = "Стандартная";
		this->справкаToolStripMenuItem->Text = "Спраука";
		this->Text = "Галоунае акно";
		this->сохранитьКакToolStripMenuItem->Text = "Захаваць ";
		this->открытьToolStripMenuItem->Text = "Адкрыць";
		this->label6->Text = "Иншыя шляхи";
		this->матрицаToolStripMenuItem->Text = "Захаваць матрыцу";
		this->открытьМатрицуToolStripMenuItem->Text = "Адкрыць матрыцу";
		this->language = 'b';


	}
	private: System::Void англToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена яз(Английский)
	{
		this->label2->Text = "Number of peaks";
		this->label4->Text = "Peak search";
		this->label5->Text = "Adjacency matrix";
		this->button5->Text = "Easy way";
		this->button6->Text = "Average length";
		this->label3->Text = "Matrix lenghts";
		this->языкToolStripMenuItem->Text = "Language";
		this->русскToolStripMenuItem->Text = "Russk lang";
		this->белToolStripMenuItem->Text = "Bel lang";
		this->англToolStripMenuItem->Text = "Eng lang";
		this->темыToolStripMenuItem->Text = "Thems";
		this->темнаяToolStripMenuItem->Text = "Dark";
		this->светлаяToolStripMenuItem->Text = "Light";
		this->стандартнаяToolStripMenuItem->Text = "Default";
		this->справкаToolStripMenuItem->Text = "Reference";
		this->открытьToolStripMenuItem->Text = "Open";
		this->сохранитьКакToolStripMenuItem->Text = "Save";
		this->Text = "Main window";
		this->label6->Text = "Other path";
		this->матрицаToolStripMenuItem->Text = "Matrix save";
		this->открытьМатрицуToolStripMenuItem->Text = "Open matrix";
		this->language = 'e';


	}
	private: System::Void темнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена темы(темная)
	{
		main_form::BackColor = Color::Black;
		this->label2->ForeColor = Color::White;
		this->label4->ForeColor = Color::White;
		this->label5->ForeColor = Color::White;
		this->button5->BackColor = Color::White;
		this->button6->ForeColor = Color::Black;
		this->dataGridView1->BackColor = Color::White;
		this->button2->BackColor = Color::Black;
		this->button4->BackColor = Color::Black;
		this->button1->BackColor = Color::Black;
		this->theme = 'd';



	}
	private: System::Void светлаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена темы(светлая)
	{
		main_form::BackColor = Color::White;
		this->label2->ForeColor = Color::Black;
		this->label4->ForeColor = Color::Black;
		this->label5->ForeColor = Color::Black;
		this->button5->ForeColor = Color::Black;
		this->button6->ForeColor = Color::Black;
		this->dataGridView1->BackColor = Color::Black;
		this->button2->BackColor = Color::White;
		this->button4->BackColor = Color::White;
		this->button1->BackColor = Color::White;
		this->label6->ForeColor = Color::Black;
		this->theme = 'w';
	}
	private: System::Void стандартнаяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена темы на стандартную
	{
		main_form::BackColor = Color::PeachPuff;
		this->label2->ForeColor = Color::Black;
		this->label4->ForeColor = Color::Black;
		this->label5->ForeColor = Color::Black;
		this->button5->ForeColor = Color::Black;
		this->button6->ForeColor = Color::Black;
		this->dataGridView1->BackColor = Color::Black;
		this->button2->BackColor = Color::PeachPuff;
		this->button4->BackColor = Color::PeachPuff;
		this->button1->BackColor = Color::PeachPuff;
		this->theme = 's';


	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			this->textBox1->BackColor = Color::White;

			size = Convert::ToInt32(this->textBox1->Text);
			if (size <= 10)//введеные вершины <= макс.кол-ву
			{
				this->button1->Enabled = false;//блокировка кнопок
				this->button2->Enabled = false;//блокировка кнопок

				masX = new int[size];//создание массива
				masY = new int[size];//создание массива

				masLine = new int[100]; // создание массива
				masLineInter = new int[4]; // создание массива
				matrix = new int[2];// создание массива

				this->dataGridView1->RowCount = size;//построение матрицы на основании вершин
				this->dataGridView1->ColumnCount = size;//построение матрицы на основании вершин
				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size; j++)
					{
						this->dataGridView1->Rows[i]->Cells[j]->Value = 0;
					}

				}
				this->dataGridView2->RowCount = size;
				this->dataGridView2->ColumnCount = size;
				for (size_t i = 0; i < size; i++)
				{
					for (size_t j = 0; j < size; j++)
					{
						this->dataGridView2->Rows[i]->Cells[j]->Value = 0;
					}

				}
				this->button3->Enabled = true;
			}
			else
			{
				if (темыToolStripMenuItem->Text == "Темы")
				{
					MessageBox::Show("Введите кол-во вершин меньше или равное 10");//предотвращение ошибки пользователя (ввод вершин >10)
				}
				if (темыToolStripMenuItem->Text == "Тэмы")
				{
					MessageBox::Show("Увядзіце колькасць вяршыняў меншая або роўная 10");//предотвращение ошибки пользователя (ввод вершин >10)
				}
				if (темыToolStripMenuItem->Text == "Thems")
				{
					MessageBox::Show("Enter number of vertices less than or equal to 10");
				}
			}
		}
		catch (const FormatException^ ex)
		{
			this->textBox1->BackColor = Color::Salmon;
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox1->Text = "";

		c_graph.clear_graph();//очищение графа
		i_gl = 0;

		masX = nullptr;//массив NULL
		masY = nullptr;//массив NULL

		this->dataGridView1->RowCount = 1;//заполнение строки (матрица смежности)
		this->dataGridView1->ColumnCount = 1;//заполнение столбиков(матрица смежности)
		this->dataGridView1->Rows[0]->Cells[0]->Value = 0;//заполнение диагонали(матрица весов)

		this->dataGridView2->RowCount = 1;//заполнение строки (матрица весов)
		this->dataGridView2->ColumnCount = 1;//заполнение столбиков (матрица весов)
		this->dataGridView2->Rows[0]->Cells[0]->Value = 0;//заполнение диагонали нулями(матрица весов)

		///блокировка кнопок
		this->button1->Enabled = true;
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button4->Enabled = false;
		this->button5->Enabled = false;
		this->button6->Enabled = true;

		this->textBox2->Clear();
		this->textBox5->Clear();
		this->textBox3->Clear();

		flag3 = false;
		this->pictureBox1->Image = image;
		return;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)//блокировка кнопок
	{
		this->button1->Enabled = false;
		this->button2->Enabled = true;
		flag3 = true;
		this->pictureBox1->Image = image;
		return;
	}
	private: System::Void pictureBox1_MouseClick_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (!flag3)//проверка состояния кнопки
		{
			if (i_gl < size)//проверка не меньше ли кол-во вершин размерности
			{
				x = e->X;//запись координат x клика по пикчербокс
				y = e->Y;//запись координат y клика по пикчербокс
				if (i_gl < size && size > 0 && masX && masY != nullptr)
				{
					for (int n = i_gl; n >= 0; n--)//цикл фор
					{
						if (i_gl == 0)//проверка на первую вершину
						{
							flag2 = true;
							break;
						}

						if ((e->X >= masX[n] - 20 && e->Y >= masY[n] - 20) && (e->X <= masX[n] + 20 && e->Y <= masY[n] + 20))// проверка попали ли координаты нажатого курсора на уже построенную вершину
						{
							flag2 = false;
							break;
						}
						else
						{
							flag2 = true;
						}
					}

					if (flag2)//проверка можно ли строить вершину
					{
						masX[i_gl] = x;
						masY[i_gl] = y;
						c_graph.add(x - 20, y - 20, i_gl);
						i_gl++;
						flag2 = false;
					}
				}
			}
			else
			{
				if (темыToolStripMenuItem->Text == "Темы")
				{
					MessageBox::Show(size.ToString(), "Количество вершин");//если человек ввел 4 вершины,и пытается поставить на поле пятую,выведет сообщение о том что уже достигнут лимит.
				}
				if (темыToolStripMenuItem->Text == "Thems")
				{
					MessageBox::Show(size.ToString(), "Number of vertices");
				}
				if (темыToolStripMenuItem->Text == "Тэмы")
				{

					MessageBox::Show(size.ToString(), "Колькасць вяршыняў");
				}
			}


			if (i_gl == size && size != 0)//блок кнопок
			{
				this->button2->Enabled = true;
				this->button3->Enabled = true;
				this->button4->Enabled = true;
				this->button5->Enabled = true;
				this->button6->Enabled = true;

			}

			z++;//переменная чтобы можно было строить ребра после вершин
		}
		else if (z > size)//проверка z
		{
			if (flag3)//проверка на нажатие кнопки ребер
			{
				for (size_t k = 0; k < size; k++)  //цикл фор
				{

					if ((e->X >= masX[k] - 20 && e->Y >= masY[k] - 20) && (e->X <= masX[k] + 20 && e->Y <= masY[k] + 20))// проверка попали ли координаты нажатого курсора на уже построенную вершину,
					{
						flag = true;
						current = k;
						break;
					}
					else
					{
						flag = false;
					}
				}
				if (flag)//если курсор попал
				{
					c_graph.paint(Brushes::Red, masX[current] - 20, masY[current] - 20, current);//расскраска вершины в красный

					masLine[it_1] = masX[current];//заносим в массив
					it_1++;
					masLine[it_1] = masY[current];
					it_1++;

					masLineInter[it_2] = masX[current];
					it_2++;
					masLineInter[it_2] = masY[current];
					it_2++;

					matrix[value] = current;//текущую вершину засунуть в матрицу

					value++;//увеличить итератор

					if (value == 2)//проверка выделены ли две вершины
					{
						c_graph.draw_line(masLineInter[0] + 20, masLineInter[1] + 20, masLineInter[2] + 20, masLineInter[3] + 20);

						if (matrix[0] != matrix[1])//проверка на разность вершин
						{
							intermediate;//переменная для заполнения матрицы весов рандомом от 1 до 100
							this->dataGridView1->Rows[matrix[0]]->Cells[matrix[1]]->Value = 1; // изменения матрицы смежности
							this->dataGridView1->Rows[matrix[1]]->Cells[matrix[0]]->Value = 1; // изменения матрицы смежности
							this->dataGridView2->Rows[matrix[0]]->Cells[matrix[1]]->Value = intermediate; // изменения матрицы весов
							this->dataGridView2->Rows[matrix[1]]->Cells[matrix[0]]->Value = intermediate; // изменения матрицы весов
						}

						for (size_t i = 0; i < 4; i++)//цикл фор
						{
							masLineInter[i] = 0;//заполнение массива нулями
						}

						for (size_t i = 0; i < 2; i++)//цикл фор
						{
							matrix[i] = 0;//заполнение массива нулями
						}

						it_2 = 0;//присвоить переменной 0
						value = 0;//присвоить переменной 0
					}
				}
			}
		}
		else if (z >= size)//блокировка кнопок
		{
			z++;
			this->button2->Enabled = true;
			this->button3->Enabled = true;
			this->button4->Enabled = true;
			this->button5->Enabled = true;
			this->button6->Enabled = true;
		}
		this->pictureBox1->Image = image;
		return;
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e)//алгоритм поиска вершины
	{
		sel_vert = Convert::ToInt32(this->textBox3->Text);//конвертирование в инт
		c_graph.paint(Brushes::Lime, masX[sel_vert] - 20, masY[sel_vert] - 20, sel_vert);//если найдена вершина,расскрасить ее в Lime
		for (size_t i = 0; i < size; i++)
		{
			if (i != sel_vert)//если человек находит еще одну вершину,предыдущую найденную расскрасить в черный
			{

				c_graph.paint(Brushes::Black, masX[i] - 20, masY[i] - 20, i);
			}
		}
		this->pictureBox1->Image = image;
		return;
	}
	private: System::Void main_form_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
	{
		Application::Exit();//метод чтобы не сохранялись окна в диспетчере задач и не засоряло памятьы
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox3->TextLength <= 0)
		{
			if (темыToolStripMenuItem->Text == "Темы")
			{
				MessageBox::Show("Введите искомую вершину!");
				return;
			}
			if (темыToolStripMenuItem->Text == "Тэмы")
			{
				MessageBox::Show("Увядзіце шуканую вяршыню!");
			}
			if (темыToolStripMenuItem->Text == "Thems")
			{
				MessageBox::Show("Enter the vertex you are looking for!");
			}


		}
		this->textBox2->Clear();//очистка textbox
		int** mas = new int* [size];//динамический массив
		int* nodes = new int[size];//динамический массив
		bool* popysk = new bool[size];//динамический массив
		int** masM = new int* [size];
		for (int i = 0; i < size; i++)//цикл фор
			popysk[i] = true;

		int it_box = 0;//объявление переменной
		String^ text;//динамический указатель(стринг)
		queue<int>Queue;//очередь из целых чисел - вершин
		queue<int>POPYSK;//очередь
		stack<Edge>Edgess;//стэк из дуг графа
		int req;//поиск вершины
		Edge edgee;//стек из ребер

		for (size_t i = 0; i < size; i++)//цикл фор
		{
			mas[i] = new int[size];//заполнение массива
		}

		for (int i = 0; i < size; i++)//цикл фор
		{
			for (int j = 0; j < size; j++)//цикл фор
			{
				mas[i][j] = Convert::ToInt32(this->dataGridView1->Rows[i]->Cells[j]->Value);//конвертирование в инт
			}

		}

		for (int i = 0; i < size; i++)//цикл фор
		{
			nodes[i] = 0;//заполнение массива нулями
		}

		req = Convert::ToInt32(this->textBox3->Text);//конвертирование в инт 
		Queue.push(0);//помешаем в очередь первую вершину
		while (!Queue.empty())//цикл работает, пока очередь не пуста
		{
			int node = Queue.front();//читаем значение вершины из очереди спереди
			Queue.pop();//извлекаем (удаляем) вершину из очереди спереди
			nodes[node] = 2;//отмечаем эту вершину как посещенную 
			for (int j = 0; j < size; j++)//цикл фор
			{
				if (mas[node][j] == 1 && nodes[j] == 0)//если вершина смежная и не обнаружена ранее
				{
					Queue.push(j);//то добавляем ее в очередь
					nodes[j] = 1;//отвечаем вершниу как обнаруженную
					edgee.begin = node;//вершина начали дуги
					edgee.end = j;//вершина конца дуги
					Edgess.push(edgee);//помещаем в эту дугу стек
					if (node == req)//если номер вершины совпал с номером искомой вершины
					{
						break;//прекращаем проход по вершинам графа
					}

				}
			}
		}
		count = 0;//счетчик посещенных вершин
		this->textBox2->Text += Convert::ToString(req);//конвертация в стринг
		popysk[req] = false;//посещенные вершины - false
		int req1 = req;//присвоение содержимого из req в req1
		while (!Edgess.empty())//цикл выполняется ,пока стек с дугами не пустой
		{
			edgee = Edgess.top();//берем верхнюю(последнюю) вершину стека(там ребро), копируем (сохраняем) его данные в ребро 
			Edgess.pop();//удаляем то ребро из вершины стека
			if (edgee.end == req)//если конечная вершина взятого ребра равна номеру требуемой вершины
			{
				req = edgee.begin;//то начальную вершину ребра делаем искомой
				this->textBox2->Text += Convert::ToString(" <- " + req);//конвертация + вывод
				popysk[req] = false;//посещенные вершины - false

			}

		}
		for (size_t i = 0; i < size; i++)//цикл фор
		{
			for (size_t j = 0; j < size; j++)//цикл фор
			{
				if ((Convert::ToInt32(this->dataGridView2->Rows[i]->Cells[j]->Value)) > 0)//конвертирование datagridveiw да-бы сравнить с нулем
				{
					count++;//наращиваем счетчик
					average += Convert::ToInt32(this->dataGridView2->Rows[i]->Cells[j]->Value);//плюсуем числа >0
				}


			}
		}
		count /= 2;//делим кол-во вершин >0
		average /= 2;//делим cреднее на 2 

		//присваиваем average значения строки req
		//average /= count;
		System::String^ str;//динамический указатель на строку
		for (int i = 0; i < size; i++)//цикл фор
		{
			if (popysk[i])//проверка на  не посещенные вершины
				str += i + " ";//если вершина не посещена то записываем 
		}
		if (темыToolStripMenuItem->Text == "Темы")//смена языка у messagebox
		{
			MessageBox::Show("Непосещенные вершины : " + str);//вывод 
			textBox4->Text = "0 " + str;
		}
		if (темыToolStripMenuItem->Text == "Тэмы")//смена языка у messagebox
		{
			MessageBox::Show("Ненаведаныя вяршыні : " + str);//вывод 
		}
		if (темыToolStripMenuItem->Text == "Thems")//смена языка у messagebox
		{
			MessageBox::Show("Unvisited Peaks : " + str);//вывод 
		}

		for (int i = 0; i < size; i++)//покраска простого пути в зеленых,а остальных в красный
		{
			if (popysk[i] != false)
			{
				c_graph.paint(Brushes::DarkRed, masX[i] - 20, masY[i] - 20, i);

			}
			else
			{
				c_graph.paint(Brushes::Green, masX[i] - 20, masY[i] - 20, i);
			}
		}
		this->pictureBox1->Image = image;
		return;
	}
	private:int average2 = 0, count2 = 0;//приватные переменные
	private: Void SREDN()//функция для нахождения среднего значения
	{
		average2 = 0;
		count2 = 0;
		for (size_t i = 0; i < size; i++)//цикл фор
		{
			for (size_t j = 0; j < size; j++)//цикл фор
			{
				if ((Convert::ToInt32(this->dataGridView2->Rows[i]->Cells[j]->Value)) > 0)//конвертирование datagridveiw да-бы справнить с нулем
				{
					count2++;//наращиваем счетчик
					average2 += Convert::ToInt32(this->dataGridView2->Rows[i]->Cells[j]->Value);//плюсуем числа >0
				}
			}
		}
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)//метод нажатия 6 кнопки
	{
		try
		{


			this->textBox5->Clear();//очистка textbox5
			SREDN();
			average2 /= count2;//среднее/кол-во вершин
			this->textBox5->Text += Convert::ToString(average2);//засунуть в текст бокс average и конвертировать его в стринг
			this->button6->Enabled = false;//блокировка 
		}
		catch (Exception^ FormatException)//отлавливатель ошибок
		{
			if (темыToolStripMenuItem->Text == "Thems")//смена языка у messagebox
			{
				MessageBox::Show("Fill in the weight matrix");//смена языка у messagebox
			}
			if (темыToolStripMenuItem->Text == "Темы")
			{
				MessageBox::Show("Заполните матрицу весов");//смена языка у messagebox
			}
			if (темыToolStripMenuItem->Text == "Тэмы")
			{
				MessageBox::Show("Запоўніце матрыцу вагаў");//смена языка у messagebox
			}
		}

	}

	private: System::Void main_form_Load(System::Object^ sender, System::EventArgs^ e)//блокировка кнопок
	{
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button4->Enabled = false;
		this->button5->Enabled = false;
		this->button6->Enabled = false;
	}
	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//открытие новой формы с справкой
	{
		MyForm^ f = gcnew MyForm(this->language, this->theme);
		f->Show();
	}
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//открытие графа из файла
	{
		ifstream file("test.txt");

		if (!file.is_open())
		{
			MessageBox::Show("Не удалось открыть граф");
		}

		vector<int> arr_x;
		vector<int> arr_y;
		vector<int> coordinates;
		int temp;

		while (file >> temp)
		{
			coordinates.push_back(temp);
		}

		for (size_t i = 0; i < size * 2; i++)
		{
			if (i % 2 == 0)
			{
				arr_x.push_back(coordinates[i]);
			}
			else
			{
				arr_y.push_back(coordinates[i]);
			}
		}

		for (size_t i = 0; i < arr_x.size(); i++)
		{
			MessageBox::Show(arr_x[i].ToString());
			MessageBox::Show(arr_y[i].ToString());
		}

		for (size_t i = 0; i < arr_x.size(); i++)
		{
			c_graph.add(arr_x[i] - 20, arr_y[i] - 20, i);
		}

		file.close();
		this->pictureBox1->Image = image;

		return;
	}
	private: System::Void dataGridView2_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)//метод для того чтоб когда вводишь в матрицу весов вес,он дублировался и к другой вершине
	{
		int row = e->RowIndex;
		int coll = e->ColumnIndex;
		if (row != coll)
		{
			dataGridView2->Rows[coll]->Cells[row]->Value = dataGridView2->Rows[row]->Cells[coll]->Value;
		}
		else
		{
			dataGridView2->Rows[row]->Cells[coll]->Value = 0;
		}
	}

	private: System::Void сохранитьКакToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)//сохранение графа в файл
	{
		ofstream file("test.txt");
		file.close();
		fstream f;
		f.open("test.txt", fstream::in | fstream::out);

		if (!f.is_open())
		{
			MessageBox::Show("Не удалось сохранить граф");
		}

		for (int i = 0; i < size; i++)
		{
			f << masX[i] << " " << masY[i] << " ";
		}

		f << 9999 << '\n';

		for (size_t i = 0; i < 100; i++)
		{
			f << masLine[i] << " ";
		}

		f << 8888 << '\n' << size;
		///////////////////////////////////////////////////
		f.close();
		///////////////////////////////////////////////////////////////////////////////////////////
	}

	private: System::Void открытьToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			this->button1->PerformClick();

			ifstream file("test.txt");

			if (!file.is_open())
			{
				MessageBox::Show("Не удалось открыть граф");
				return;
			}

			vector<int> cord;
			vector<int> line;
			vector<int> line_interm;
			int temp;
			int size;
			bool isVert = true;
			bool isLine = false;

			while (file >> temp)
			{

				if (isVert && temp != 9999)
				{
					cord.push_back(temp);
				}
				else
				{
					isVert = false;
				}

				if (isLine || temp == 9999)
				{
					isLine = true;
					if (temp != 9999 && temp != 8888 && temp > 10)
					{
						line.push_back(temp);
						line_interm.push_back(temp);

						if (line_interm.size() == 4)
						{
							c_graph.draw_line(line_interm[0] + 20, line_interm[1] + 20, line_interm[2] + 20, line_interm[3] + 20);
							line_interm.clear();
						}
					}
				}
				else if (temp == 8888)
				{
					isLine = false;
				}

				if (temp <= 10)
				{
					size = temp;
				}
			}

			this->textBox1->Text = Convert::ToString(size);
			this->button1->PerformClick();

			for (size_t i = 0, j = 0; i < size * 2; i++)
			{
				if (i % 2 == 0)
				{
					masX[j] = cord[i];
				}

				if (i % 2 != 0)
				{
					masY[j] = cord[i];
					j++;
				}
			}
			i_gl = size;
			z = i_gl + 1;

			for (size_t i = 0; i < size; i++)
			{
				c_graph.add(masX[i] - 20, masY[i] - 20, i);
			}

			for (size_t i = 0; i < line.size(); i++)
			{
				masLine[i] = line[i];
			}


			file.close();
			this->pictureBox1->Image = image;

			return;

		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message->ToString());
		}
		try
		{
			saveFileDialog1->Filter = "Text file (*.txt)|*.txt|All files(*.*)|*.*";
			saveFileDialog1->FilterIndex = 1;
			saveFileDialog1->RestoreDirectory = true;

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialog1->FileName->Length > 0)
			{
				String^ text;
				String^ filename = saveFileDialog1->FileName;
				System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(filename);
				for (int i = 0; i < size; i++)
				{
					file->Write(masX[i] + " " + masY[i] + " ");
				}
				file->Write(9999 + "\n");

				for (size_t i = 0; i < 100; i++)
				{
					file->Write(masLine[i] + " ");
				}

				file->Write(8888 + "\n");
				file->Write(size.ToString() + "\n");
				file->Close();
			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show(ex->Message->ToString());
		}
		/////////////////////////////////////////////////////////////////////////

	}
	private: System::Void матрицаToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		SaveFileDialog^ sfd = gcnew SaveFileDialog();
		sfd->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		if (System::Windows::Forms::DialogResult::OK == sfd->ShowDialog())
		{
			String^ path = sfd->FileName;
			StreamWriter^ sw = gcnew StreamWriter(path, false); // Открываем файл для записи
			for (int i = 0; i < size; i++)
			{
				for (size_t j = 0; j < size; j++)
				{
					sw->Write(this->dataGridView2->Rows[i]->Cells[j]->Value->ToString() + " ");
				}
				sw->Write("\n");
			}
			sw->Close(); // Закрываем файл
		}
	}
	private: System::Void открытьМатрицуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Stream^ myStream;
		string path;
		openFileDialog1->InitialDirectory = "D:\\";
		openFileDialog1->Filter = "txt (*.txt)|*.txt|All files(*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		if (this->dataGridView2->Rows->Count != 1)
		{
			if (System::Windows::Forms::DialogResult::OK == openFileDialog1->ShowDialog())
			{
				if ((myStream = openFileDialog1->OpenFile()) != nullptr)
				{

					System::String^ managedString = Convert::ToString(openFileDialog1->FileName);//помещение текстбокс в переменную managedString 
					msclr::interop::marshal_context context;//объявление объекта context для преобразования типа
					path = context.marshal_as<std::string>(managedString);//преобразование переменной managed в std::string 
				}
			}
			ifstream file(path);
			vector<int>matrix;
			int temp;
			while (file >> temp)
			{
				matrix.push_back(temp);
			}
			int k = 0;
			for (size_t i = 0; i < size * size; i++)
			{
				for (size_t j = 0; j < size; j++)
				{
					if (k < size * size)
					{
						this->dataGridView2->Rows[i]->Cells[j]->Value = matrix[k];
						k++;
					}
				}
			}

		}
		else
		{
			MessageBox::Show("Откройте или постройте граф");
		}
		

	}
	};
}
