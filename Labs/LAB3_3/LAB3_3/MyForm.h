#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#define M_PI           3.14159265358979323846 

namespace LAB33
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(562, 413);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 421);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(1);
			this->Text = L"Task 3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	ref class ball {
	public:
		int y, x, width, xrt, yrt, xlb, ylb, xrb, yrb;
		ball() {
			y = x = width = xrt = yrt = xlb = ylb = xrb = yrb = 0;
		}
		void recalculate() {
			xrt = x + width;
			yrt =y;
			xlb = x;
			ylb = y - width;
			xrb = x + width;
			yrb = y - width;
		}
	};
	array<ball^>^ balls;
	int point;
	int max = 100;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		balls = gcnew array<ball^>(max);
		for (int i = 0; i < max; i++) {
			balls[i] = gcnew ball;
		}
		point = 0;
		timer1->Interval = 20;
		timer2->Interval = 20;
		timer1->Start();
		timer2->Start();
	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		int pw = pictureBox1->Width, ph = pictureBox1->Height;
		for (int i = 0; i < point; i++)
			if (balls[i]->y + ph < 0) {
				balls[i]->y = 0;
				balls[i]->width = 1;
				balls[i]->recalculate();
			}
		for(int i=0; i<point; i++)
			for (int j = i+1; j < point; j++) {
				if ((balls[i]->xlb == balls[j]->xlb && balls[i]->xrb == balls[j]->xrb && balls[i]->y < balls[j]->y && balls[i]->yrt < balls[j]->yrt))
				{
					ball^ tmp=gcnew ball;
					tmp->x = (balls[i]->x+balls[j]->x)/2;
					tmp->y = (balls[i]->y + balls[j]->y)/2;
					tmp->width = balls[i]->width+balls[j]->width;
					tmp->recalculate();
					balls[i] = balls[j] = tmp;
				}
			}
		for(int i=0; i<point; i++)
			e->Graphics->DrawEllipse(Pens::Black, balls[i]->x, balls[i]->y+ph, balls[i]->width, balls[i]->width);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Random^ rnd = gcnew Random;
		int pw = pictureBox1->Width, ph = pictureBox1->Height;
		int k = rnd->Next() % 2;
		
		for (int i = 0; i < k && point < max; i++) {
			balls[point]->width = 1;
			balls[point]->y = 0;
			balls[point]->x += rnd->Next() % pw;
			balls[point]->recalculate();
			point++;
		}
		pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		Random^ rnd = gcnew Random;
		for (int i = 0; i < point; i++) {
			balls[i]->y -= rnd->Next() % 10;
			balls[i]->width += rnd->Next() % 2;
			balls[i]->recalculate();
		}
		pictureBox1->Invalidate();
	}
};
}
