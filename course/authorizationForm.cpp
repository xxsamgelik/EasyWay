	#include "authorizationForm.h"//����������� ������

	#pragma region Reg

	System::Void coursepaper::authorizationForm::button1_ClickRegistration(System::Object^ sender, System::EventArgs^ e)//����� ������ 1
	{//�������� �������
		try//������������� ������
		{//�������� ������ try

			if (this->textBox1->TextLength >= 1)//���� � �����-����� ���� ���� 1 ������
			{//�������� ������ if
				if (this->textBox2->TextLength >= 8 && this->textBox3->TextLength >= 1)//�������� �� ������� 8 ��� ����� �������� � textbox
				{//�������� ������ if 
					if (this->checkBox1->Checked)
					{//�������� ������ if
						if (this->textBox2->Text->Equals(this->textBox3->Text))//��������� �������
						{
							if (this->textBox1->TextLength >= 1 && this->textBox1->TextLength <= 32)//�������� �� ���-�� ��������
							{//�������� ������ if
								checkLog = true;//���������� checklog - true
								StreamWriter^ sw = gcnew StreamWriter("database.txt", true);//���������� �������, �������� �����
								sw->WriteLine(textBox1->Text);//�������� ����� + ������
								sw->Close();//�������� �����
							}//�������� ������ if

							if (this->textBox2->TextLength >=8 && this->textBox2->TextLength <= 16)//�������� �� ���-�� ��������
							{//�������� if
								StreamWriter^ sw = gcnew StreamWriter("password.txt", true);//���������� �������, �������� �����
								sw->WriteLine(textBox2->Text);//�������� ����� + ������
								sw->Close();//��������
							}//�������� ������ if

							if (checkLog)//���� ��� ������
							{//�������� if
								System::Windows::Forms::DialogResult result
									= MessageBox::Show("����������� ������ �������", "",
										MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);//�������� �����������
								authorizationForm::Hide();//��������
							}//�������� ������ if

						}
						else//� ���� ������
						{//�������� else
							System::Windows::Forms::DialogResult result
								= MessageBox::Show("������ �� ���������", "",
									MessageBoxButtons::OKCancel, MessageBoxIcon::Error);//������ ������������ ��������� �� ���������� �����������
						}//�������� ������ else

					}
					else
					{//�������� else 
						this->button1->Enabled = false;
					}//�������� else

				}
				else
				{//�������� else
					if (this->textBox2->TextLength < 1)//�������� �� ���� 
					{//�������� if
						this->textBox2->Clear();// �������� textbox2
						this->textBox2->Text = "������� ������";//���� � textbox2
						this->textBox2->ForeColor = Color::Red;//��������� ����� ������ textbox 2 �� �������
					}
					else
					{
						MessageBox::Show("������ ������ ��������� 8 ��������");//�������� �� ������������ ������
					}//�������� if

					if (this->textBox3->TextLength <= 1)//�������� �� ����
					{//�������� if
						this->textBox3->Clear();// �������� textbox2
						this->textBox3->Text = "��������� ������";//���� � textbox2
						this->textBox3->ForeColor = Color::Red;//��������� ����� ������ textbox 2 �� �������
					}//�������� if 
				}//�������� else

			}
			else
			{//�������� ������ else
				if (this->textBox1->TextLength < 1)
				{//�������� ������ if
					this->textBox1->Clear();//������� textbox 
					this->textBox1->Text = "������� �����";//���� � textbox
					this->textBox1->ForeColor = Color::Red;//����� ����� ������ textbox �� �������
				}//�������� if 
				else
				{//�������� ������ else
					this->textBox2->Clear();//������� textbox 
					this->textBox2->Text = "������� ������";//���� � textbox
					this->textBox2->ForeColor = Color::Red;//����� ����� ������ textbox �� �������

					this->textBox3->Clear();//������� textbox 
					this->textBox3->Text = "��������� ������";//���� � textbox
					this->textBox3->ForeColor = Color::Red;//����� ����� ������ textbox �� �������

				}//�������� if 
			}//�������� else


		}
		catch (System::Exception ^ ex)//��������� ������
		{//�������� catch
			MessageBox::Show(ex->Message->ToString());//�������� ������ �� message box 
		}//�������� catch 

	}//�������� �������
	System::Void coursepaper::authorizationForm::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{//�������� �������
		try
		{//�������� try 
			if (this->checkBox1->Checked)//�������� checkbox1
				this->button1->Enabled = true;//��� �����
			else//� ���� ������
				this->button1->Enabled = false;//�� ����� 
		}//�������� try
		catch (std::exception& ex)
		{//�������� catch
			System::String^ err_name = gcnew System::String("������");
			System::String^ err_descr = gcnew System::String(ex.what());
			MessageBox::Show(err_descr, err_name, MessageBoxButtons::OK, MessageBoxIcon::Error);
		}//�������� catch 
	}
	System::Void coursepaper::authorizationForm::authorizationForm_Load(System::Object^ sender, System::EventArgs^ e)
	{//�������� �������
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
		this->button1->Enabled = false;
	}//�������� �������
	#pragma endregion
	System::Void coursepaper::authorizationForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{//�������� �������
		this->textBox1->ForeColor = Color::Black;//����� ����� ������ textbox �� ������

	}//�������� �������
	System::Void coursepaper::authorizationForm::textBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e)
	{//�������� �������
		this->textBox1->Clear();//�������
	}//�������� �������
	System::Void coursepaper::authorizationForm::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{//�������� �������
		this->textBox2->ForeColor = Color::Black;//����� ����� ������ textbox �� ������
	
	}//�������� �������

	System::Void coursepaper::authorizationForm::textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{//�������� �������
		this->textBox3->ForeColor = Color::Black;
	}//�������� �������
	System::Void coursepaper::authorizationForm::textBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e)
	{//�������� �������
		this->textBox2->Clear();//�������
	}//�������� �������
	System::Void coursepaper::authorizationForm::textBox3_DoubleClick(System::Object^ sender, System::EventArgs^ e)
	{//�������� �������
		this->textBox3->Clear();//�������
	}//�������� �������

