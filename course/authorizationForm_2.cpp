#include "authorizationForm_2.h"//подключение хедера
#include "authorizationForm.h"//подключение хедера
#include "main_form.h"//подключение хедера

System::Void coursepaper::authorizationForm_2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{//открытие события
	try//отлавливатель
	{//открытие try 
		if (this->textBox1->TextLength > 0 && this->textBox1->TextLength <= 16)//проверка на кол-во символов
		{//открытие if 
			if (this->textBox2->TextLength > 0 && this->textBox2->TextLength <= 32)//проверка на кол-во символов
			{//открытие if 
				std::ifstream file("database.txt");//чтение из файла
				std::ifstream file2("password.txt");//чтение из  файла

				std::vector<std::string> database;//векторный список
 				std::vector<std::string> passwords;//векторный список

				std::string login_temp;//
				std::string passwords_temp;//
				bool check = false;//

				while (!file.eof())//пока не закончился файл
				{
					file >> login_temp;//пока логина в переменную
					database.push_back(login_temp);//добавление в массив - переменную
				}
				while (!file2.eof())//пока не закончился файл
				{
					file2 >> passwords_temp;//запись пароля в переменную
					passwords.push_back(passwords_temp);//добавление в массив - переменную
				}

				System::String^ managedString = Convert::ToString(this->textBox1->Text);//помещение текстбокс в переменную managedString 
				msclr::interop::marshal_context context;//объявление объекта context для преобразования типа
				std::string textbox_1 = context.marshal_as<std::string>(managedString);//преобразование переменной managed в std::string 


				System::String^ managedString_2 = Convert::ToString(this->textBox2->Text);//помещение textbox2 в переменную managedString_2
				msclr::interop::marshal_context context_2;//объявление объекта context_2 для преобразования типов
				std::string textbox_2 = context.marshal_as<std::string>(managedString_2);//преобразование переменной managedString_2 в std::String


				for (size_t i = 0; i < database.size(); i++)//цикл Фор
				{
					if (textbox_1 == database[i] && textbox_2 == passwords[i])//есть логин и пароль существует и правильные 
					{
						check = true;//помещаем проверку в значение true
					}

				}
				if (check)//если все хорошо
				{
					image2 = gcnew Bitmap(702, 443);
					main_form^ f = gcnew main_form(image2,this->language,this->theme);//создание окна
					f->Show();//открытие тз
					authorizationForm_2::Hide();//скрываем окно авторизации
				}
				else
				{
					System::Windows::Forms::DialogResult result//окно с ошибкой 
						= MessageBox::Show("Введен неверный логин или пароль", "",//окно с ошибкой
							MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);//окно с ошибкой 
				}

				file.close();//закрытие file
				file2.close();//закрытие file

			}
			else
			{
				MessageBox::Show("Введите пароль");//вывод messagebox о вводе  пароля
			}
		}
		else
		{
			MessageBox::Show("Введите логин");//вывод messagebox о вводе  логина
		}

	}
	catch (System::Exception^ ex)//иная ошибка
	{
		MessageBox::Show(ex->Message->ToString());//конвертация
	}


}

System::Void coursepaper::authorizationForm_2::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)//событие нажатия на ссылку.
{//открытие метода
	authorizationForm^ form = gcnew authorizationForm(this->language,this->theme);
	form->ShowDialog();

}

System::Void coursepaper::authorizationForm_2::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)//событие на изменение текста  textbox
{//открытие метода
	this->textBox1->ForeColor = Color::Black;//смена цвета внутри textbox на черный

}
System::Void coursepaper::authorizationForm_2::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)//событие на изменение текста  textbox
{//открытие метода
	this->textBox2->ForeColor = Color::Black;//смена цвета внутри textbox на черный
}

System::Void coursepaper::authorizationForm_2::английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//открытие метода
	this->label1->Text = "AUTHORIZATION";
	this->label2->Text = "password";
	this->label3->Text = "Name user";
	this->button1->Text = "Enter";
	this->textBox1->ForeColor = Color::Gray;
	this->textBox2->ForeColor = Color::Gray;
	this->настройкиToolStripMenuItem->Text = L"Parametrs";
	this->языкToolStripMenuItem->Text = L"Language";
	this->русскийToolStripMenuItem->Text = L"Russian";
	this->английскийToolStripMenuItem->Text = L"English";
	this->белорусскийToolStripMenuItem->Text = L"Belarusian";
	this->темыToolStripMenuItem->Text = L"Themes";
	this->темнаяТемаToolStripMenuItem->Text = L"Dark theme";
	this->белаяТемаToolStripMenuItem->Text = L"White theme";
	this->linkLabel1->Text = "Create account";
	this->настройкиToolStripMenuItem->Text = "Options";
	this->языкToolStripMenuItem->Text = "Language";
	this->русскийToolStripMenuItem->Text = "Russk";
	this->белорусскийToolStripMenuItem->Text = "Blr";
	this->английскийToolStripMenuItem->Text = "Eng";
	this->стандартнаяТемаToolStripMenuItem->Text = "Default theme";
	this->textBox1->Text = "Enter username";
	this->textBox2->Text = "Enter password";
	this->Text = "AUTHORIZATION";
	this->language = 'e';


}//событие на смену языка (англ.яз)
System::Void coursepaper::authorizationForm_2::русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена языка (русск.яз)
{//открытие метода
	this->label1->Text = "Вход";
	this->label2->Text = "Пароль для входа";
	this->label3->Text = "Имя пользователя";
	this->button1->Text = "Войти";
	this->textBox1->Text = "Введите логин";
	this->textBox2->Text = "Введите пароль";
	this->textBox1->ForeColor = Color::Gray;
	this->textBox2->ForeColor = Color::Gray;
	this->настройкиToolStripMenuItem->Text = L"Параметры";
	this->языкToolStripMenuItem->Text = L"Язык";
	this->русскийToolStripMenuItem->Text = L"Русский";
	this->английскийToolStripMenuItem->Text = L"Английский";
	this->белорусскийToolStripMenuItem->Text = L"Белорусский";
	this->темыToolStripMenuItem->Text = L"Темы";
	this->белаяТемаToolStripMenuItem->Text = L"Белая тема";
	this->темнаяТемаToolStripMenuItem->Text = L"Темная тема";
	this->linkLabel1->Text = "Создать аккаунт.";
	this->настройкиToolStripMenuItem->Text = "Параметры";
	this->языкToolStripMenuItem->Text = "Язык";
	this->русскийToolStripMenuItem->Text = "Русский";
	this->белорусскийToolStripMenuItem->Text = "Белорусский";
	this->английскийToolStripMenuItem->Text = "Английский";
	this->стандартнаяТемаToolStripMenuItem->Text = "Стандартная тема";
	this->textBox1->Text = "Введите логин";
	this->textBox2->Text = "Введите пароль";
	this->Text = "АВТОРИЗАЦИЯ";
	this->language = 'r';
}//закрытие метода
System::Void coursepaper::authorizationForm_2::белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена языка(бел.яз)
{
	this->label1->Text = "УВАХОД";
	this->label2->Text = "Пароль для ўваходу";
	this->label3->Text = "Имя карыстальнiка";
	this->button1->Text = "Увайсці";
	this->textBox1->ForeColor = Color::Gray;
	this->textBox2->ForeColor = Color::Gray;
	this->настройкиToolStripMenuItem->Text = L"Параметры";
	this->языкToolStripMenuItem->Text = L"Мова";
	this->русскийToolStripMenuItem->Text = L"Рускі";
	this->английскийToolStripMenuItem->Text = L"Англійскі";
	this->белорусскийToolStripMenuItem->Text = L"Беларускі";
	this->темыToolStripMenuItem->Text = L"Тэмы";
	this->темнаяТемаToolStripMenuItem->Text = L"Цёмная тэма";
	this->белаяТемаToolStripMenuItem->Text = L"Белая тэма";
	this->linkLabel1->Text = "стварыць рахунак";
	this->настройкиToolStripMenuItem->Text = "Наладкі";
	this->языкToolStripMenuItem->Text = "Мова";
	this->русскийToolStripMenuItem->Text = "Руская";
	this->белорусскийToolStripMenuItem->Text = "Беларуская";
	this->английскийToolStripMenuItem->Text = "Англiйская";
	this->стандартнаяТемаToolStripMenuItem->Text = "Стандартная тэма";
	this->textBox1->Text = "Увядзiце лагiн";
	this->textBox2->Text = "Увядзiце пароль";
	this->Text = "АУТОРЫЗАЦЫЯ";
	this->language = 'b';
}

System::Void coursepaper::authorizationForm_2::темнаяТемаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена темы на темную
{
	this->настройкиToolStripMenuItem->ForeColor = Color::White;
	this->menuStrip1->BackColor = Color::Black;
	this->panel1->BackColor = Color::Black;
	authorizationForm_2::BackColor = Color::Black;
	this->textBox1->BackColor = Color::White;
	this->textBox2->BackColor = Color::White;
	this->label1->ForeColor = Color::White;
	this->label2->ForeColor = Color::White;
	this->label3->ForeColor = Color::White;
	this->linkLabel1->LinkColor = Color::White;
	this->menuStrip1->ForeColor = Color::White;
	this->button1->BackColor = Color::White;
	this->button1->ForeColor = Color::Black;
	this->pictureBox1->BackColor = Color::Black;
	this->pictureBox1->BackColor  = Color::White;
	this->pictureBox2->BackColor = Color::White;
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("C:загружено.png");
	this->настройкиToolStripMenuItem->Image = System::Drawing::Image::FromFile("C:263074.png");
	this->theme = 'd';
}
System::Void coursepaper::authorizationForm_2::белаяТемаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена темы на белую
{
	this->настройкиToolStripMenuItem->ForeColor = Color::Black;
	this->panel1->BackColor = Color::White;
	this->textBox1->BackColor = Color::WhiteSmoke;
	this->textBox2->BackColor = Color::WhiteSmoke;
	this->menuStrip1->BackColor = Color::White;
	authorizationForm_2::BackColor = Color::White;
	this->label1->ForeColor = Color::Black;
	this->label2->ForeColor = Color::Black;
	this->label3->ForeColor = Color::Black;
	this->linkLabel1->LinkColor = Color::Black;
	this->menuStrip1->ForeColor = Color::Black;
	this->button1->BackColor = Color::IndianRed;
	this->button1->ForeColor = Color::White;
	this->pictureBox1->BackColor = Color::White;
	this->pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("C:149452.png");
	this->pictureBox2->BackColor = Color::White;
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("C:загружено.png");
	this->настройкиToolStripMenuItem->Image = System::Drawing::Image::FromFile("C:263074.png");
	this->theme = 'w';
}
System::Void coursepaper::authorizationForm_2::стандартнаяТемаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//смена темы на стандартную
{
	this->настройкиToolStripMenuItem->ForeColor = Color::Black;
	this->panel1->BackColor = Color::PeachPuff;
	this->textBox1->BackColor = Color::WhiteSmoke;
	this->textBox2->BackColor = Color::WhiteSmoke;
	this->menuStrip1->BackColor = Color::PeachPuff;
	authorizationForm_2::BackColor = Color::PeachPuff;
	this->label1->ForeColor = Color::Red;
	this->label2->ForeColor = Color::Red;
	this->label3->ForeColor = Color::Red;
	this->linkLabel1->LinkColor = Color::Black;
	this->menuStrip1->ForeColor = Color::Black;
	this->button1->BackColor = Color::IndianRed;
	this->button1->ForeColor = Color::White;
	this->pictureBox1->BackColor = Color::White;
	this->pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("C:149452.png");
	this->pictureBox2->BackColor = Color::White;
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("C:загружено.png");
	this->настройкиToolStripMenuItem->Image = System::Drawing::Image::FromFile("C:263074.png");
	this->theme = 's';
}//смена темы на стандартную

System::Void coursepaper::authorizationForm_2::textBox1_Enter(System::Object^ sender, System::EventArgs^ e)//событие на отслежку курсора
{
	if (this->textBox1->Text == "Введите имя пользователя" || "Enter your user name" || "Увядзіце имя ")
	{
		textBox1->Text = nullptr;
		if (textBox1->ForeColor != Color::Black)
		{
			textBox1->ForeColor == Color::Black;
		}
	}

}
System::Void coursepaper::authorizationForm_2::textBox2_Enter(System::Object^ sender, System::EventArgs^ e)//событие на отслежку курсора
{
	if (this->textBox2->Text == "Введите пароль" || "Enter the password" || "Увядзіце пароль")
	{
		textBox2->Text = nullptr;
		if (textBox2->ForeColor != Color::Black)
		{
			textBox2->ForeColor == Color::Black;
		}
	}
}

