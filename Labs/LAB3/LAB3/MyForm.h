#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#define M_PI           3.14159265358979323846 

namespace LAB3
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

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
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::TextBox^ height;
	private: System::Windows::Forms::TextBox^ base;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ line;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ stop;

	private: System::Windows::Forms::Button^ start2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->stop = (gcnew System::Windows::Forms::Button());
			this->start2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->line = (gcnew System::Windows::Forms::TextBox());
			this->start = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->height = (gcnew System::Windows::Forms::TextBox());
			this->base = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->stop);
			this->tabPage4->Controls->Add(this->start2);
			this->tabPage4->Controls->Add(this->pictureBox2);
			this->tabPage4->Location = System::Drawing::Point(4, 30);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(626, 345);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Task 3";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// stop
			// 
			this->stop->Location = System::Drawing::Point(314, 312);
			this->stop->Name = L"stop";
			this->stop->Size = System::Drawing::Size(306, 27);
			this->stop->TabIndex = 2;
			this->stop->Text = L"Stop";
			this->stop->UseVisualStyleBackColor = true;
			this->stop->Click += gcnew System::EventHandler(this, &MyForm::stop_Click);
			// 
			// start2
			// 
			this->start2->Location = System::Drawing::Point(3, 312);
			this->start2->Name = L"start2";
			this->start2->Size = System::Drawing::Size(306, 27);
			this->start2->TabIndex = 1;
			this->start2->Text = L"Start";
			this->start2->UseVisualStyleBackColor = true;
			this->start2->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(3, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(617, 303);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tableLayoutPanel1);
			this->tabPage3->Location = System::Drawing::Point(4, 30);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(626, 345);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Task 2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 6);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 288)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(614, 333);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				315)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				145)));
			this->tableLayoutPanel2->Controls->Add(this->line, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->start, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.36364F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(608, 39);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// line
			// 
			this->line->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->line->Location = System::Drawing::Point(151, 3);
			this->line->Name = L"line";
			this->line->Size = System::Drawing::Size(309, 32);
			this->line->TabIndex = 1;
			this->line->TextChanged += gcnew System::EventHandler(this, &MyForm::base_TextChanged);
			this->line->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::base_KeyPress);
			// 
			// start
			// 
			this->start->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start->Location = System::Drawing::Point(466, 3);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(139, 32);
			this->start->TabIndex = 2;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(3, 0);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(0, 6, 0, 0);
			this->label9->Size = System::Drawing::Size(139, 29);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Enter parametr:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(605, 282);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->result);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->calculate);
			this->tabPage2->Controls->Add(this->height);
			this->tabPage2->Controls->Add(this->base);
			this->tabPage2->Location = System::Drawing::Point(4, 30);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(626, 345);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Task 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(35, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(192, 23);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Triangles height (cm):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(35, 77);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(177, 23);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Triangles base (cm):";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(293, 256);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 23);
			this->result->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(35, 256);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(252, 23);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Triangle square equally (cm):";
			// 
			// calculate
			// 
			this->calculate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->calculate->Location = System::Drawing::Point(39, 192);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(544, 29);
			this->calculate->TabIndex = 2;
			this->calculate->Text = L"Calculate";
			this->calculate->UseVisualStyleBackColor = true;
			this->calculate->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// height
			// 
			this->height->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->height->Location = System::Drawing::Point(291, 128);
			this->height->Name = L"height";
			this->height->Size = System::Drawing::Size(292, 32);
			this->height->TabIndex = 1;
			this->height->TextChanged += gcnew System::EventHandler(this, &MyForm::base_TextChanged);
			this->height->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::base_KeyPress);
			// 
			// base
			// 
			this->base->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->base->Location = System::Drawing::Point(291, 74);
			this->base->Name = L"base";
			this->base->Size = System::Drawing::Size(292, 32);
			this->base->TabIndex = 0;
			this->base->TextChanged += gcnew System::EventHandler(this, &MyForm::base_TextChanged);
			this->base->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::base_KeyPress);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 30);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(6);
			this->tabPage1->Size = System::Drawing::Size(626, 345);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Main menu";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(9, 221);
			this->label4->Margin = System::Windows::Forms::Padding(3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(594, 115);
			this->label4->TabIndex = 3;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 146);
			this->label3->Margin = System::Windows::Forms::Padding(3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(534, 69);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Task 2. Machine graphics\r\nFill the screen with a drawing of fish scales with a gi"
				L"ven size of\r\nelementary scales.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 71);
			this->label2->Margin = System::Windows::Forms::Padding(3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(578, 69);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Task 1. The simplest Windows applications\r\nApplication for triangle area calculat"
				L"ion, if the base and height of the\r\ntriangle are known (in cm).\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Margin = System::Windows::Forms::Padding(3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(534, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"This is the Main menu available here, where you can select the\r\nrequired laborato"
				L"ry work and learn the text of its task.";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(13, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(634, 379);
			this->tabControl1->TabIndex = 0;
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
			this->ClientSize = System::Drawing::Size(659, 401);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Laboratory work є3";
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

//Task 1
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Regex^ r = gcnew Regex("^[0-9]*[,]?[0-9]+$");
	Match^ name_ex = r->Match(base->Text);
	Match^ name_ex2 = r->Match(height->Text);

		if (name_ex->Success && name_ex2->Success)
	{
		double dbase = Convert::ToDouble(base->Text);
		double dheight = Convert::ToDouble(height->Text);
			if (dbase == 0 || dheight == 0)
			MessageBox::Show("Incorrect data! Paramets can not be zero value.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else
		{
			double square = dbase * dheight / 2;
			result->Text = square.ToString();
		}
	}
	else
		MessageBox::Show("Incorrect data! Please use integer or real numbers.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
private: System::Void base_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		return;
	if (e->KeyChar == '.')
	{
		e->KeyChar = ',';
		return;
	}
	if (e->KeyChar == ',')
		return;
	if (Char::IsControl(e->KeyChar))
	{
		if (e->KeyChar == (char)Keys::Enter)
			calculate->Focus();
		return;
	}
	e->Handled = true;
}
//Task 2
private: System::Void base_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if ((base->Text->Length == 0) || (height->Text->Length == 0))
		calculate->Enabled = false;
	else
		calculate->Enabled = true;
}
private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e)
{
	Regex^ r = gcnew Regex("^[0-9]*[,]?[0-9]+$");
	Match^ value = r->Match(line->Text);
	if (value->Success)
	{
		int pw = pictureBox1->Width, ph = pictureBox1->Height;
		Bitmap^ img = gcnew Bitmap(pw, ph);
		Graphics^ g = Graphics::FromImage(img);
		double a = Convert::ToDouble(line->Text);
		array<double>^ x = gcnew array<double>(6), ^ y = gcnew array<double>(6);
		for (double ys = 0; ys < ph; ys += a)
		{
			for (double xs = 0; xs < pw; xs += a)
			{
				for (int i = 0; i < 6; i++)
				{
					double angle = M_PI * i / 3;
					x[i] = cos(angle) * a + xs;
					y[i] = sin(angle) * a + ys;
				}
				Color customColor = Color::FromArgb(150, Color::Black);
				SolidBrush^ shadowBrush = gcnew SolidBrush(customColor);
				g->FillPolygon(shadowBrush, gcnew array<Point>
				{
					Point(x[0], y[0]),
					Point(x[1], y[1]),
					Point(x[2], y[2]),
					Point(x[3], y[3]),
					Point(x[4], y[4]),
					Point(x[5], y[5])
				});
				g->DrawPolygon(Pens::Red, gcnew array<Point>
				{
					Point(x[0], y[0]),
					Point(x[1], y[1]),
					Point(x[2], y[2]),
					Point(x[3], y[3]),
					Point(x[4], y[4]),
					Point(x[5], y[5])
				});
			}
		}
		this->pictureBox1->Image = img;
	}
	else
		MessageBox::Show("Incorrect data! Please use integer or real numbers.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void line_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (line->Text->Length == 0)
		start->Enabled = false;
	else
		start->Enabled = true;
}
//Task 3
ref class ball
{
	public:
	int y, x, width, xrt, yrt, xlb, ylb, xrb, yrb;
	ball()
	{
		y = x = width = xrt = yrt = xlb = ylb = xrb = yrb = 0;
	}
	void recalculate()
	{
		xrt = x + width;
		yrt = y;
		xlb = x;
		ylb = y - width;
		xrb = x + width;
		yrb = y - width;
	}
};
array<ball^>^ b;
int point;
int max = 100;
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	b = gcnew array<ball^>(max);
	for (int i = 0; i < max; i++)
		b[i] = gcnew ball;
	point = 0;
	timer1->Interval = 20;
	timer2->Interval = 20;
	timer1->Start();
	timer2->Start();
}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	int pw = pictureBox1->Width, ph = pictureBox1->Height;
	for (int i = 0; i < point; i++)
		if (b[i]->y + ph < 0)
		{
			b[i]->y = 0;
			b[i]->width = 1;
			b[i]->recalculate();
		}
	for (int i = 0; i < point; i++)
		for (int j = i + 1; j < point; j++)
		{
			if (
				(b[i]->xlb == b[j]->x && b[i]->ylb >= b[j]->y && b[i]->xrb == b[j]->xrt && b[i]->yrb >= b[j]->yrt) || //bottom
				(b[i]->x == b[j]->xlb && b[i]->y <= b[j]->ylb && b[i]->xrt == b[j]->xrb && b[i]->yrt <= b[j]->yrb) || //top
				(b[i]->x <= b[j]->xrt && b[i]->y == b[j]->yrt && b[i]->xlb <= b[j]->xrb && b[i]->ylb == b[j]->yrb) || //left
				(b[i]->xrt >= b[j]->x && b[i]->yrt == b[j]->y && b[i]->xrb >= b[j]->xlb && b[i]->yrb == b[j]->ylb) || //right

				(b[i]->xrb > b[j]->x && b[i]->yrb > b[j]->y && b[i]->xrb < b[j]->xrt && b[i]->yrb > b[j]->yrt) || //bottom right
				(b[i]->xlb < b[j]->xrt && b[i]->ylb > b[j]->yrt && b[i]->xlb > b[j]->x && b[i]->ylb > b[j]->y) || //bottom left
				(b[i]->x > b[j]->x && b[i]->y > b[j]->y && b[i]->x < b[j]->xrt && b[i]->y > b[j]->yrt) || //top left
				(b[i]->xrt > b[j]->xlb && b[i]->yrt < b[j]->ylb && b[i]->xrt < b[j]->xrb && b[i]->yrt < b[j]->yrb) //top right
				)
			{
				ball^ tmp = gcnew ball;
				tmp->x = (b[i]->x + b[j]->x) / 2;
					tmp->y = (b[i]->y + b[j]->y) / 2;
				tmp->width = (b[i]->width + b[j]->width) / 2;
				//tmp->width = Math::Sqrt(b[i]->width + b[j]->width);
				tmp->recalculate();
				b[i] = b[j] = tmp;
			}
		}
	for (int i = 0; i < point; i++)
		e->Graphics->DrawEllipse(Pens::Black, b[i]->x, b[i]->y + ph, b[i]->width, b[i]->width);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	Random^ rnd = gcnew Random;
	int pw = pictureBox1->Width, ph = pictureBox1->Height;
	int k = rnd->Next() % 2;
		for (int i = 0; i < k && point < max; i++)
	{
		b[point]->width = 1;
		b[point]->y = 0;
		b[point]->x += rnd->Next() % pw;
		b[point]->recalculate();
		point++;
	}
	pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e)
{
	Random^ rnd = gcnew Random;
	for (int i = 0; i < point; i++)
	{
		b[i]->y -= rnd->Next() % 10;
		b[i]->width += rnd->Next() % 2;
		b[i]->recalculate();
	}
	pictureBox2->Invalidate();
}
private: System::Void stop_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Stop();
	timer2->Stop();
}
};
}