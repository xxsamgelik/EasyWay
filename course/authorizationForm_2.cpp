#include "authorizationForm_2.h"//����������� ������
#include "authorizationForm.h"//����������� ������
#include "main_form.h"//����������� ������

System::Void coursepaper::authorizationForm_2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� �������
	try//�������������
	{//�������� try 
		if (this->textBox1->TextLength > 0 && this->textBox1->TextLength <= 16)//�������� �� ���-�� ��������
		{//�������� if 
			if (this->textBox2->TextLength > 0 && this->textBox2->TextLength <= 32)//�������� �� ���-�� ��������
			{//�������� if 
				std::ifstream file("database.txt");//������ �� �����
				std::ifstream file2("password.txt");//������ ��  �����

				std::vector<std::string> database;//��������� ������
 				std::vector<std::string> passwords;//��������� ������

				std::string login_temp;//
				std::string passwords_temp;//
				bool check = false;//

				while (!file.eof())//���� �� ���������� ����
				{
					file >> login_temp;//���� ������ � ����������
					database.push_back(login_temp);//���������� � ������ - ����������
				}
				while (!file2.eof())//���� �� ���������� ����
				{
					file2 >> passwords_temp;//������ ������ � ����������
					passwords.push_back(passwords_temp);//���������� � ������ - ����������
				}

				System::String^ managedString = Convert::ToString(this->textBox1->Text);//��������� ��������� � ���������� managedString 
				msclr::interop::marshal_context context;//���������� ������� context ��� �������������� ����
				std::string textbox_1 = context.marshal_as<std::string>(managedString);//�������������� ���������� managed � std::string 


				System::String^ managedString_2 = Convert::ToString(this->textBox2->Text);//��������� textbox2 � ���������� managedString_2
				msclr::interop::marshal_context context_2;//���������� ������� context_2 ��� �������������� �����
				std::string textbox_2 = context.marshal_as<std::string>(managedString_2);//�������������� ���������� managedString_2 � std::String


				for (size_t i = 0; i < database.size(); i++)//���� ���
				{
					if (textbox_1 == database[i] && textbox_2 == passwords[i])//���� ����� � ������ ���������� � ���������� 
					{
						check = true;//�������� �������� � �������� true
					}

				}
				if (check)//���� ��� ������
				{
					image2 = gcnew Bitmap(702, 443);
					main_form^ f = gcnew main_form(image2,this->language,this->theme);//�������� ����
					f->Show();//�������� ��
					authorizationForm_2::Hide();//�������� ���� �����������
				}
				else
				{
					System::Windows::Forms::DialogResult result//���� � ������� 
						= MessageBox::Show("������ �������� ����� ��� ������", "",//���� � �������
							MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);//���� � ������� 
				}

				file.close();//�������� file
				file2.close();//�������� file

			}
			else
			{
				MessageBox::Show("������� ������");//����� messagebox � �����  ������
			}
		}
		else
		{
			MessageBox::Show("������� �����");//����� messagebox � �����  ������
		}

	}
	catch (System::Exception^ ex)//���� ������
	{
		MessageBox::Show(ex->Message->ToString());//�����������
	}


}

System::Void coursepaper::authorizationForm_2::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)//������� ������� �� ������.
{//�������� ������
	authorizationForm^ form = gcnew authorizationForm(this->language,this->theme);
	form->ShowDialog();

}

System::Void coursepaper::authorizationForm_2::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)//������� �� ��������� ������  textbox
{//�������� ������
	this->textBox1->ForeColor = Color::Black;//����� ����� ������ textbox �� ������

}
System::Void coursepaper::authorizationForm_2::textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)//������� �� ��������� ������  textbox
{//�������� ������
	this->textBox2->ForeColor = Color::Black;//����� ����� ������ textbox �� ������
}

System::Void coursepaper::authorizationForm_2::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{//�������� ������
	this->label1->Text = "AUTHORIZATION";
	this->label2->Text = "password";
	this->label3->Text = "Name user";
	this->button1->Text = "Enter";
	this->textBox1->ForeColor = Color::Gray;
	this->textBox2->ForeColor = Color::Gray;
	this->���������ToolStripMenuItem->Text = L"Parametrs";
	this->����ToolStripMenuItem->Text = L"Language";
	this->�������ToolStripMenuItem->Text = L"Russian";
	this->����������ToolStripMenuItem->Text = L"English";
	this->�����������ToolStripMenuItem->Text = L"Belarusian";
	this->����ToolStripMenuItem->Text = L"Themes";
	this->����������ToolStripMenuItem->Text = L"Dark theme";
	this->���������ToolStripMenuItem->Text = L"White theme";
	this->linkLabel1->Text = "Create account";
	this->���������ToolStripMenuItem->Text = "Options";
	this->����ToolStripMenuItem->Text = "Language";
	this->�������ToolStripMenuItem->Text = "Russk";
	this->�����������ToolStripMenuItem->Text = "Blr";
	this->����������ToolStripMenuItem->Text = "Eng";
	this->���������������ToolStripMenuItem->Text = "Default theme";
	this->textBox1->Text = "Enter username";
	this->textBox2->Text = "Enter password";
	this->Text = "AUTHORIZATION";
	this->language = 'e';


}//������� �� ����� ����� (����.��)
System::Void coursepaper::authorizationForm_2::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//����� ����� (�����.��)
{//�������� ������
	this->label1->Text = "����";
	this->label2->Text = "������ ��� �����";
	this->label3->Text = "��� ������������";
	this->button1->Text = "�����";
	this->textBox1->Text = "������� �����";
	this->textBox2->Text = "������� ������";
	this->textBox1->ForeColor = Color::Gray;
	this->textBox2->ForeColor = Color::Gray;
	this->���������ToolStripMenuItem->Text = L"���������";
	this->����ToolStripMenuItem->Text = L"����";
	this->�������ToolStripMenuItem->Text = L"�������";
	this->����������ToolStripMenuItem->Text = L"����������";
	this->�����������ToolStripMenuItem->Text = L"�����������";
	this->����ToolStripMenuItem->Text = L"����";
	this->���������ToolStripMenuItem->Text = L"����� ����";
	this->����������ToolStripMenuItem->Text = L"������ ����";
	this->linkLabel1->Text = "������� �������.";
	this->���������ToolStripMenuItem->Text = "���������";
	this->����ToolStripMenuItem->Text = "����";
	this->�������ToolStripMenuItem->Text = "�������";
	this->�����������ToolStripMenuItem->Text = "�����������";
	this->����������ToolStripMenuItem->Text = "����������";
	this->���������������ToolStripMenuItem->Text = "����������� ����";
	this->textBox1->Text = "������� �����";
	this->textBox2->Text = "������� ������";
	this->Text = "�����������";
	this->language = 'r';
}//�������� ������
System::Void coursepaper::authorizationForm_2::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//����� �����(���.��)
{
	this->label1->Text = "������";
	this->label2->Text = "������ ��� �������";
	this->label3->Text = "��� ����������i��";
	this->button1->Text = "�������";
	this->textBox1->ForeColor = Color::Gray;
	this->textBox2->ForeColor = Color::Gray;
	this->���������ToolStripMenuItem->Text = L"���������";
	this->����ToolStripMenuItem->Text = L"����";
	this->�������ToolStripMenuItem->Text = L"����";
	this->����������ToolStripMenuItem->Text = L"�������";
	this->�����������ToolStripMenuItem->Text = L"��������";
	this->����ToolStripMenuItem->Text = L"����";
	this->����������ToolStripMenuItem->Text = L"ָ���� ����";
	this->���������ToolStripMenuItem->Text = L"����� ����";
	this->linkLabel1->Text = "�������� �������";
	this->���������ToolStripMenuItem->Text = "������";
	this->����ToolStripMenuItem->Text = "����";
	this->�������ToolStripMenuItem->Text = "������";
	this->�����������ToolStripMenuItem->Text = "����������";
	this->����������ToolStripMenuItem->Text = "����i�����";
	this->���������������ToolStripMenuItem->Text = "����������� ����";
	this->textBox1->Text = "�����i�� ���i�";
	this->textBox2->Text = "�����i�� ������";
	this->Text = "�����������";
	this->language = 'b';
}

System::Void coursepaper::authorizationForm_2::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//����� ���� �� ������
{
	this->���������ToolStripMenuItem->ForeColor = Color::White;
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
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("C:���������.png");
	this->���������ToolStripMenuItem->Image = System::Drawing::Image::FromFile("C:263074.png");
	this->theme = 'd';
}
System::Void coursepaper::authorizationForm_2::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//����� ���� �� �����
{
	this->���������ToolStripMenuItem->ForeColor = Color::Black;
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
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("C:���������.png");
	this->���������ToolStripMenuItem->Image = System::Drawing::Image::FromFile("C:263074.png");
	this->theme = 'w';
}
System::Void coursepaper::authorizationForm_2::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//����� ���� �� �����������
{
	this->���������ToolStripMenuItem->ForeColor = Color::Black;
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
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("C:���������.png");
	this->���������ToolStripMenuItem->Image = System::Drawing::Image::FromFile("C:263074.png");
	this->theme = 's';
}//����� ���� �� �����������

System::Void coursepaper::authorizationForm_2::textBox1_Enter(System::Object^ sender, System::EventArgs^ e)//������� �� �������� �������
{
	if (this->textBox1->Text == "������� ��� ������������" || "Enter your user name" || "������� ��� ")
	{
		textBox1->Text = nullptr;
		if (textBox1->ForeColor != Color::Black)
		{
			textBox1->ForeColor == Color::Black;
		}
	}

}
System::Void coursepaper::authorizationForm_2::textBox2_Enter(System::Object^ sender, System::EventArgs^ e)//������� �� �������� �������
{
	if (this->textBox2->Text == "������� ������" || "Enter the password" || "������� ������")
	{
		textBox2->Text = nullptr;
		if (textBox2->ForeColor != Color::Black)
		{
			textBox2->ForeColor == Color::Black;
		}
	}
}

