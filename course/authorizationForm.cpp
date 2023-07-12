	#include "authorizationForm.h"//подключение хедера

	#pragma region Reg

	System::Void coursepaper::authorizationForm::button1_ClickRegistration(System::Object^ sender, System::EventArgs^ e)//метод кнопки 1
	{//открытие события
		try//отлавливатель ошибок
		{//открытие скобки try

			if (this->textBox1->TextLength >= 1)//если в текст-боксе есть хоть 1 символ
			{//открытие скобки if
				if (this->textBox2->TextLength >= 8 && this->textBox3->TextLength >= 1)//проверка на наличие 8 или более символов в textbox
				{//открытие скобки if 
					if (this->checkBox1->Checked)
					{//открытие скобки if
						if (this->textBox2->Text->Equals(this->textBox3->Text))//сравнение паролей
						{
							if (this->textBox1->TextLength >= 1 && this->textBox1->TextLength <= 32)//проверка на кол-во символов
							{//открытие скобки if
								checkLog = true;//присвоение checklog - true
								StreamWriter^ sw = gcnew StreamWriter("database.txt", true);//объявление объекта, создание файла
								sw->WriteLine(textBox1->Text);//открытие файла + запись
								sw->Close();//закрытие файла
							}//закрытие скобки if

							if (this->textBox2->TextLength >=8 && this->textBox2->TextLength <= 16)//проверка на кол-во символов
							{//открытие if
								StreamWriter^ sw = gcnew StreamWriter("password.txt", true);//объявление объекта, создание файла
								sw->WriteLine(textBox2->Text);//открытие файла + запись
								sw->Close();//закрытие
							}//закрытие скобки if

							if (checkLog)//если все хорошо
							{//открытие if
								System::Windows::Forms::DialogResult result
									= MessageBox::Show("Регистрация прошла успешно", "",
										MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);//успешная регистрация
								authorizationForm::Hide();//закрытие
							}//закрытие скобки if

						}
						else//в ином случае
						{//открытие else
							System::Windows::Forms::DialogResult result
								= MessageBox::Show("Пароли не совпадают", "",
									MessageBoxButtons::OKCancel, MessageBoxIcon::Error);//выдать пользователю сообщение об неуспешной регистрации
						}//закрытие скобки else

					}
					else
					{//открытие else 
						this->button1->Enabled = false;
					}//закрытие else

				}
				else
				{//открытие else
					if (this->textBox2->TextLength < 1)//проверка на ввод 
					{//открытие if
						this->textBox2->Clear();// очистить textbox2
						this->textBox2->Text = "Введите пароль";//ввод в textbox2
						this->textBox2->ForeColor = Color::Red;//изменение цвета внутри textbox 2 на красный
					}
					else
					{
						MessageBox::Show("Пароль должен содержать 8 символов");//проверка на правильность пароля
					}//закрытие if

					if (this->textBox3->TextLength <= 1)//проверка на ввод
					{//открытие if
						this->textBox3->Clear();// очистить textbox2
						this->textBox3->Text = "Повторите пароль";//ввод в textbox2
						this->textBox3->ForeColor = Color::Red;//изменение цвета внутри textbox 2 на красный
					}//закрытие if 
				}//закрытие else

			}
			else
			{//открытие скобки else
				if (this->textBox1->TextLength < 1)
				{//открытие скобки if
					this->textBox1->Clear();//очистка textbox 
					this->textBox1->Text = "Введите логин";//ввод в textbox
					this->textBox1->ForeColor = Color::Red;//смена цвета внутри textbox на красный
				}//закрытие if 
				else
				{//открытие скобки else
					this->textBox2->Clear();//очистка textbox 
					this->textBox2->Text = "Введите пароль";//ввод в textbox
					this->textBox2->ForeColor = Color::Red;//смена цвета внутри textbox на красный

					this->textBox3->Clear();//очистка textbox 
					this->textBox3->Text = "Повторите пароль";//ввод в textbox
					this->textBox3->ForeColor = Color::Red;//смена цвета внутри textbox на красный

				}//закрытие if 
			}//закрытие else


		}
		catch (System::Exception ^ ex)//возможные ошибки
		{//открытие catch
			MessageBox::Show(ex->Message->ToString());//показать данные из message box 
		}//закрытие catch 

	}//закрытие события
	System::Void coursepaper::authorizationForm::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{//открытие события
		try
		{//открытие try 
			if (this->checkBox1->Checked)//проверка checkbox1
				this->button1->Enabled = true;//все верно
			else//в ином случае
				this->button1->Enabled = false;//не верно 
		}//закрытие try
		catch (std::exception& ex)
		{//открытие catch
			System::String^ err_name = gcnew System::String("Ошибка");
			System::String^ err_descr = gcnew System::String(ex.what());
			MessageBox::Show(err_descr, err_name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}//закрытие catch 
	}
	System::Void coursepaper::authorizationForm::authorizationForm_Load(System::Object^ sender, System::EventArgs^ e)
	{//открытие события
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
		this->button1->Enabled = false;
	}//закрыьие события
	#pragma endregion
	System::Void coursepaper::authorizationForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{//открытие события
		this->textBox1->ForeColor = Color::Black;//смена цвета внутри textbox на черный

	}//закрыьие события
	System::Void coursepaper::authorizationForm::textBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e)
	{//открытие события
		this->textBox1->Clear();//очистка
	}//закрыьие события
	System::Void coursepaper::authorizationForm::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{//открытие события
		this->textBox2->ForeColor = Color::Black;//смена цвета внутри textbox на черный
	
	}//закрыьие события

	System::Void coursepaper::authorizationForm::textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{//открытие события
		this->textBox3->ForeColor = Color::Black;
	}//закрыьие события
	System::Void coursepaper::authorizationForm::textBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e)
	{//открытие события
		this->textBox2->Clear();//очистка
	}//закрыьие события
	System::Void coursepaper::authorizationForm::textBox3_DoubleClick(System::Object^ sender, System::EventArgs^ e)
	{//открытие события
		this->textBox3->Clear();//очистка
	}//закрыьие события

