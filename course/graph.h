#pragma once // препроцессорная директива, контролирует чтобы исходный файл при компиляции подключался строго один раз

namespace coursepaper //пространство имен в котором выполняется весь код программы
{					//открываем скобку для пространства имен
	using namespace System; // используем пространство имен System
	using namespace System::ComponentModel;// используем пространство имен
	using namespace System::Collections;// используем пространство имен
	using namespace System::Windows::Forms;// используем пространство имен 
	using namespace System::Data;// используем пространство имен 
	using namespace System::Drawing;// используем пространство имен 

	public ref class graph : public System::Windows::Forms::Form //cоздаем публичный класс
	{// открываем скобку для класса
	private: //помещаем свойства класса в private cекцию 
		System::Windows::Forms::PictureBox^ pictureBox1; //обьявлем поле класса (рисовка графа)
		Graphics^ m_graphics;//обьявлем поле класса (работа с графикой)
		Pens^ m_pen;//обьявлем поле класса  (рисование линий, окружностей))
		Brushes^ m_brush;//обьявлем поле класса  (заливка обьектов)

	public://помещаем свойства в public 

		void createGraphics(Bitmap^image) // метод createGraphics берет pictureBox для того чтобы создать область рисовки (вершин, линий и тд)
		{//открываем скобку метода
			m_graphics=Graphics::FromImage(image); //присваиваем область нашему обьекту
		}

		void clear_graph() //  очищаем область рисовки (заливает её белым цветом)
		{//открываем скобку метода
			m_graphics->Clear(Color::WhiteSmoke); //вызываем метод clear() и задаем цвет white smoke
		}//закрываем скобку метода

		void add(int x, int y, int i) //метод добавление элипсов на наш pictureBox, принимает координаты и номер вершины
		{//открываем скобку метода
			m_graphics->DrawEllipse(m_pen->Black, x, y, 40, 40); //вызов метода рисовки  , у него есть 3 параметра: цвет, координаты и размер нашей окружности
			m_graphics->FillEllipse(m_brush->Black, x, y, 40, 40); //вызов метода заливки , он принимает 3 параметра: цвет, координаты и размер нашей окружности
			m_graphics->DrawString(i.ToString(), gcnew Drawing::Font("Arial", 12), m_brush->White, x + 10, y + 10); /*метод DrawString добавляет номер вершины, это переменная i,
																											метод принимает 4 параметра(наша рисовка, шрифт ,цвет и координаты*/
			
		}//закрываем скобку метода

		void paint(Brush^ pen, int x, int y,int k) //метод добавление элипса на pictureBox, принимает координаты и цвет
		{//открываем скобку метода
			m_graphics->FillEllipse(pen, x - 3, y - 3, 46, 46);
			m_graphics->FillEllipse(Brushes::Black,x,y,40,40);//вызов метода рисовки  , он принимает 3 параметров: цвет, координаты и размер нашей окружности
			m_graphics->DrawString(k.ToString(), gcnew Drawing::Font("Arial", 12), Brushes::White, x + 10, y + 10);
		}//закрываем скобку метода

		void draw_line(int x, int y, int x1, int y1) //метод добавление линий, принимает координаты 2ух вершин
		{//открываем скобку метода
			m_graphics->DrawLine(m_pen->Black, x - 20, y - 20, x1 - 20, y1 - 20); //вызов метода добавление линий, принимает цвет и  координаты 2ух вершин
			m_graphics->DrawEllipse(m_pen->Black, x - 40, y - 40, 40, 40); //вызов метода рисовки , он принимает 3 параметров: цвет, координаты и размер нашей окружности
			m_graphics->DrawEllipse(m_pen->Black, x1 - 40, y1 - 40, 40, 40); //вызов метода рисовки , он принимает 3 параметров: цвет, координаты и размер нашей окружности
		}//закрываем скобку метода

	protected: //помещаем деструктор класса в protected 
		~graph() //декструктор класса
		{//открываем скобку декструктора
		}//закрываем скобку декструктора

	};//закрываем скобку класса


}//закрываем скобку пространства имен
