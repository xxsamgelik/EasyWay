#include "authorizationForm_2.h"//����������� ���� �����������
#include <Windows.h>//����������� ���������� ��� ������ � �������
#include "main_form.h"//����������� �������� ����
#include"MyForm.h"
using namespace coursepaper; //���������� ������������ ����  coursepaper
[STAThreadAttribute] //������� ������ ������������� ���������� 

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)//������� ������� ��� �������� ����������
{	Application::EnableVisualStyles(); //����������� ����� � ������������ ������
	Application::SetCompatibleTextRenderingDefault(false); // ����������� ����� � ������������ ������ ������� ������������� ������������� ����������� ������� ������,
	//���� ��������� �������� false 
	Application::Run(gcnew authorizationForm_2);//����� Run
	return 0;//������ ������������� ���������
}//��������� ������ �������