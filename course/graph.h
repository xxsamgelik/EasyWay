#pragma once // ��������������� ���������, ������������ ����� �������� ���� ��� ���������� ����������� ������ ���� ���

namespace coursepaper //������������ ���� � ������� ����������� ���� ��� ���������
{					//��������� ������ ��� ������������ ����
	using namespace System; // ���������� ������������ ���� System
	using namespace System::ComponentModel;// ���������� ������������ ����
	using namespace System::Collections;// ���������� ������������ ����
	using namespace System::Windows::Forms;// ���������� ������������ ���� 
	using namespace System::Data;// ���������� ������������ ���� 
	using namespace System::Drawing;// ���������� ������������ ���� 

	public ref class graph : public System::Windows::Forms::Form //c������ ��������� �����
	{// ��������� ������ ��� ������
	private: //�������� �������� ������ � private c����� 
		System::Windows::Forms::PictureBox^ pictureBox1; //�������� ���� ������ (������� �����)
		Graphics^ m_graphics;//�������� ���� ������ (������ � ��������)
		Pens^ m_pen;//�������� ���� ������  (��������� �����, �����������))
		Brushes^ m_brush;//�������� ���� ������  (������� ��������)

	public://�������� �������� � public 

		void createGraphics(Bitmap^image) // ����� createGraphics ����� pictureBox ��� ���� ����� ������� ������� ������� (������, ����� � ��)
		{//��������� ������ ������
			m_graphics=Graphics::FromImage(image); //����������� ������� ������ �������
		}

		void clear_graph() //  ������� ������� ������� (�������� � ����� ������)
		{//��������� ������ ������
			m_graphics->Clear(Color::WhiteSmoke); //�������� ����� clear() � ������ ���� white smoke
		}//��������� ������ ������

		void add(int x, int y, int i) //����� ���������� ������� �� ��� pictureBox, ��������� ���������� � ����� �������
		{//��������� ������ ������
			m_graphics->DrawEllipse(m_pen->Black, x, y, 40, 40); //����� ������ �������  , � ���� ���� 3 ���������: ����, ���������� � ������ ����� ����������
			m_graphics->FillEllipse(m_brush->Black, x, y, 40, 40); //����� ������ ������� , �� ��������� 3 ���������: ����, ���������� � ������ ����� ����������
			m_graphics->DrawString(i.ToString(), gcnew Drawing::Font("Arial", 12), m_brush->White, x + 10, y + 10); /*����� DrawString ��������� ����� �������, ��� ���������� i,
																											����� ��������� 4 ���������(���� �������, ����� ,���� � ����������*/
			
		}//��������� ������ ������

		void paint(Brush^ pen, int x, int y,int k) //����� ���������� ������ �� pictureBox, ��������� ���������� � ����
		{//��������� ������ ������
			m_graphics->FillEllipse(pen, x - 3, y - 3, 46, 46);
			m_graphics->FillEllipse(Brushes::Black,x,y,40,40);//����� ������ �������  , �� ��������� 3 ����������: ����, ���������� � ������ ����� ����������
			m_graphics->DrawString(k.ToString(), gcnew Drawing::Font("Arial", 12), Brushes::White, x + 10, y + 10);
		}//��������� ������ ������

		void draw_line(int x, int y, int x1, int y1) //����� ���������� �����, ��������� ���������� 2�� ������
		{//��������� ������ ������
			m_graphics->DrawLine(m_pen->Black, x - 20, y - 20, x1 - 20, y1 - 20); //����� ������ ���������� �����, ��������� ���� �  ���������� 2�� ������
			m_graphics->DrawEllipse(m_pen->Black, x - 40, y - 40, 40, 40); //����� ������ ������� , �� ��������� 3 ����������: ����, ���������� � ������ ����� ����������
			m_graphics->DrawEllipse(m_pen->Black, x1 - 40, y1 - 40, 40, 40); //����� ������ ������� , �� ��������� 3 ����������: ����, ���������� � ������ ����� ����������
		}//��������� ������ ������

	protected: //�������� ���������� ������ � protected 
		~graph() //����������� ������
		{//��������� ������ ������������
		}//��������� ������ ������������

	};//��������� ������ ������


}//��������� ������ ������������ ����
