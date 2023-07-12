#include "authorizationForm_2.h"//подключение окна авторизации
#include <Windows.h>//подключение библиотеки для работы с формами
#include "main_form.h"//подключение главного окна
#include"MyForm.h"
using namespace coursepaper; //используем пространство имен  coursepaper
[STAThreadAttribute] //атрибут потока однопоточного контейнера 

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)//главная функция для оконного приложения
{	Application::EnableVisualStyles(); //статический метод у статического класса
	Application::SetCompatibleTextRenderingDefault(false); // статический метод у статического класса который устанавливает единообразное отображение шрифтов текста,
	//если принимает аргумент false 
	Application::Run(gcnew authorizationForm_2);//метод Run
	return 0;//вернем целочисленный результат
}//закрываем скобку функции