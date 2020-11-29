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
	protected:

	protected:

	protected:




	protected:


	protected:





	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
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
			this->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int pw = pictureBox1->Width, ph = pictureBox1->Height;
		Bitmap^ img = gcnew Bitmap(pw, ph);
		Graphics^ g = Graphics::FromImage(img);
		Random^ rnd = gcnew Random;
		for(int i=0; i<100; i++)
		{
			Pen^ blackPen = gcnew Pen(Color::Black, 2);
			Rectangle rect = Rectangle(rnd->Next() % pw, ph - 40, 30, 30);
			g->DrawEllipse(blackPen, rect);
		}
		this->pictureBox1->Image = img;
	}

};
}
