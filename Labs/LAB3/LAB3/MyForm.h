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
	private: System::Windows::Forms::Label^ task3;

	private: System::Windows::Forms::Label^ task2;

	private: System::Windows::Forms::Label^ task1;

	private: System::Windows::Forms::Label^ main_title;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ triangles_height;

	private: System::Windows::Forms::Label^ triangles_base;

	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ triangles_square;

	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::TextBox^ height;
	private: System::Windows::Forms::TextBox^ base;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ line;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Label^ parametr;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ generate;
	private: System::Windows::Forms::Timer^ move;


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
			this->parametr = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->triangles_height = (gcnew System::Windows::Forms::Label());
			this->triangles_base = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->triangles_square = (gcnew System::Windows::Forms::Label());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->height = (gcnew System::Windows::Forms::TextBox());
			this->base = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->task3 = (gcnew System::Windows::Forms::Label());
			this->task2 = (gcnew System::Windows::Forms::Label());
			this->task1 = (gcnew System::Windows::Forms::Label());
			this->main_title = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->generate = (gcnew System::Windows::Forms::Timer(this->components));
			this->move = (gcnew System::Windows::Forms::Timer(this->components));
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
			this->stop->Enabled = false;
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
			this->start2->Click += gcnew System::EventHandler(this, &MyForm::start2_Click);
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
			this->tableLayoutPanel2->Controls->Add(this->parametr, 0, 0);
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
			// parametr
			// 
			this->parametr->AutoSize = true;
			this->parametr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->parametr->Location = System::Drawing::Point(3, 0);
			this->parametr->Name = L"parametr";
			this->parametr->Padding = System::Windows::Forms::Padding(0, 6, 0, 0);
			this->parametr->Size = System::Drawing::Size(139, 29);
			this->parametr->TabIndex = 0;
			this->parametr->Text = L"Enter parametr:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 48);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(608, 282);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->triangles_height);
			this->tabPage2->Controls->Add(this->triangles_base);
			this->tabPage2->Controls->Add(this->result);
			this->tabPage2->Controls->Add(this->triangles_square);
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
			// triangles_height
			// 
			this->triangles_height->AutoSize = true;
			this->triangles_height->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->triangles_height->Location = System::Drawing::Point(35, 131);
			this->triangles_height->Name = L"triangles_height";
			this->triangles_height->Size = System::Drawing::Size(192, 23);
			this->triangles_height->TabIndex = 6;
			this->triangles_height->Text = L"Triangles height (cm):";
			// 
			// triangles_base
			// 
			this->triangles_base->AutoSize = true;
			this->triangles_base->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->triangles_base->Location = System::Drawing::Point(35, 77);
			this->triangles_base->Name = L"triangles_base";
			this->triangles_base->Size = System::Drawing::Size(177, 23);
			this->triangles_base->TabIndex = 5;
			this->triangles_base->Text = L"Triangles base (cm):";
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
			// triangles_square
			// 
			this->triangles_square->AutoSize = true;
			this->triangles_square->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->triangles_square->Location = System::Drawing::Point(35, 256);
			this->triangles_square->Name = L"triangles_square";
			this->triangles_square->Size = System::Drawing::Size(252, 23);
			this->triangles_square->TabIndex = 3;
			this->triangles_square->Text = L"Triangle square equally (cm):";
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
			this->tabPage1->Controls->Add(this->task3);
			this->tabPage1->Controls->Add(this->task2);
			this->tabPage1->Controls->Add(this->task1);
			this->tabPage1->Controls->Add(this->main_title);
			this->tabPage1->Location = System::Drawing::Point(4, 30);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(6);
			this->tabPage1->Size = System::Drawing::Size(626, 345);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Main menu";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// task3
			// 
			this->task3->AutoSize = true;
			this->task3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task3->Location = System::Drawing::Point(9, 221);
			this->task3->Margin = System::Windows::Forms::Padding(3);
			this->task3->Name = L"task3";
			this->task3->Size = System::Drawing::Size(594, 115);
			this->task3->TabIndex = 3;
			this->task3->Text = resources->GetString(L"task3.Text");
			// 
			// task2
			// 
			this->task2->AutoSize = true;
			this->task2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task2->Location = System::Drawing::Point(9, 146);
			this->task2->Margin = System::Windows::Forms::Padding(3);
			this->task2->Name = L"task2";
			this->task2->Size = System::Drawing::Size(534, 69);
			this->task2->TabIndex = 2;
			this->task2->Text = L"Task 2. Machine graphics\r\nFill the screen with a drawing of fish scales with a gi"
				L"ven size of\r\nelementary scales.";
			// 
			// task1
			// 
			this->task1->AutoSize = true;
			this->task1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task1->Location = System::Drawing::Point(9, 71);
			this->task1->Margin = System::Windows::Forms::Padding(3);
			this->task1->Name = L"task1";
			this->task1->Size = System::Drawing::Size(578, 69);
			this->task1->TabIndex = 1;
			this->task1->Text = L"Task 1. The simplest Windows applications\r\nApplication for triangle area calculat"
				L"ion, if the base and height of the\r\ntriangle are known (in cm).\r\n";
			// 
			// main_title
			// 
			this->main_title->AutoSize = true;
			this->main_title->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->main_title->Location = System::Drawing::Point(9, 9);
			this->main_title->Margin = System::Windows::Forms::Padding(3);
			this->main_title->Name = L"main_title";
			this->main_title->Size = System::Drawing::Size(534, 46);
			this->main_title->TabIndex = 0;
			this->main_title->Text = L"This is the Main menu available here, where you can select the\r\nrequired laborato"
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
			// generate
			// 
			this->generate->Interval = 25;
			this->generate->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// move
			// 
			this->move->Interval = 25;
			this->move->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 401);
			this->Controls->Add(this->tabControl1);
			this->DoubleBuffered = true;
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
array<ball^>^ balls;
int point;
int max = 1000;
Random^ rndforballs = gcnew Random;
private: System::Void start2_Click(System::Object^ sender, System::EventArgs^ e)
{
	balls = gcnew array<ball^>(max);
	for (int i = 0; i < max; i++)
		balls[i] = gcnew ball;
	point = 0;
	generate->Start();
	move->Start();
	this->stop->Text = L"Stop";
	this->stop->Enabled = true;
	
}
private: System::Void stop_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->stop->Text == L"Stop")
	{
		generate->Stop();
		move->Stop();
		this->stop->Text = L"Restart";
	}
	else
		if (this->stop->Text == L"Restart")
		{
			this->stop->Text = L"Stop";
			generate->Start();
			move->Start();
		}
}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	
	int pw = pictureBox1->Width, ph = pictureBox1->Height;
	for (int i = 0; i < point; i++)
		if (balls[i]->y + ph < 0)
		{
			balls[i]->y = 0;
			balls[i]->width = 1;
			balls[i]->recalculate();
		}
	for (int i = 0; i < point; i++)
		for (int j = i + 1; j < point; j++)
		{
			if ((balls[i]->xlb == balls[j]->x && balls[i]->ylb <= balls[j]->y && balls[i]->xrb == balls[j]->xrt && balls[i]->yrb <= balls[j]->yrt && balls[i]->y > balls[j]->ylb && balls[i]->yrt > balls[j]->yrb) || //bottom
				(balls[i]->x == balls[j]->xlb && balls[i]->y >= balls[j]->ylb && balls[i]->xrt == balls[j]->xrb && balls[i]->yrt >= balls[j]->yrb && balls[i]->y > balls[j]->ylb && balls[i]->yrt > balls[j]->yrb) || //top
				(balls[i]->x <= balls[j]->xrt && balls[i]->y == balls[j]->yrt && balls[i]->xlb <= balls[j]->xrb && balls[i]->ylb == balls[j]->yrb && balls[i]->xrt > balls[j]->x && balls[i]->xrb > balls[j]->xlb) || //left
				(balls[i]->xrt >= balls[j]->x && balls[i]->yrt == balls[j]->y && balls[i]->xrb >= balls[j]->xlb && balls[i]->yrb == balls[j]->ylb && balls[i]->x < balls[j]->xrt && balls[i]->xlb < balls[j]->xrb) || //right
				(balls[i]->xrb > balls[j]->x && balls[i]->yrb < balls[j]->y && balls[i]->xrb < balls[j]->xrb && balls[i]->yrb > balls[j]->yrb) || //bottom right
				(balls[i]->xlb < balls[j]->xrt && balls[i]->ylb < balls[j]->yrt && balls[i]->xlb > balls[j]->xlb && balls[i]->ylb > balls[j]->ylb) || //bottom left
				(balls[i]->x > balls[j]->x && balls[i]->y < balls[j]->y && balls[i]->x < balls[j]->xrb && balls[i]->y > balls[j]->yrb) || //top left
				(balls[i]->xrt > balls[j]->xlb && balls[i]->yrt > balls[j]->ylb && balls[i]->xrt < balls[j]->xrt && balls[i]->yrt < balls[j]->yrt) || //top right
				(balls[i]->x<balls[j]->x && balls[i]->y>balls[j]->y && balls[i]->xrt>balls[j]->xrt && balls[i]->yrt>balls[j]->yrt && balls[i]->xrb>balls[j]->xrb && balls[i]->yrb<balls[j]->yrb && balls[i]->xlb<balls[j]->xlb && balls[i]->ylb<balls[j]->ylb) || //inside
				(balls[i]->x>balls[j]->x && balls[i]->y<balls[j]->y && balls[i]->xrt < balls[j]->xrt && balls[i]->yrt > balls[j]->yrt && balls[i]->xrb < balls[j]->xrb && balls[i]->yrb > balls[j]->yrb && balls[i]->xlb > balls[j]->xlb && balls[i]->ylb < balls[j]->ylb) || //around
				(balls[i]->xlb < balls[j]->x && balls[i]->ylb <= balls[j]->y && balls[i]->xrb > balls[j]->xrt && balls[i]->yrb <= balls[j]->yrt && balls[i]->x < balls[j]->xlb && balls[i]->y > balls[j]->ylb && balls[i]->xrt > balls[j]->xrb && balls[i]->yrt > balls[j]->yrb) || // inside bottom
				(balls[i]->x < balls[j]->xlb && balls[i]->y >= balls[j]->ylb && balls[i]->xrt > balls[j]->xrb && balls[i]->yrt >= balls[j]->yrb && balls[i]->xlb > balls[j]->x && balls[i]->ylb > balls[j]->y && balls[i]->xrb > balls[j]->xrt && balls[i]->yrb > balls[j]->yrt) || // inside top
				(balls[i]->x <= balls[j]->xrt && balls[i]->y > balls[j]->yrt && balls[i]->xlb <= balls[j]->xrb && balls[i]->ylb < balls[j]->yrb && balls[i]->xrt > balls[j]->x && balls[i]->yrt > balls[j]->y && balls[i]->xrb > balls[j]->xlb && balls[i]->yrb < balls[j]->ylb) || //inside left
				(balls[i]->xrt >= balls[j]->x && balls[i]->yrt > balls[j]->y && balls[i]->xrb >= balls[j]->xlb && balls[i]->yrb < balls[j]->ylb && balls[i]->x < balls[j]->xrt && balls[i]->y > balls[j]->yrt && balls[i]->xlb < balls[j]->xrb && balls[i]->ylb < balls[j]->yrb) || //inside right
				(balls[j]->xlb < balls[i]->x&& balls[j]->ylb <= balls[i]->y && balls[j]->xrb > balls[i]->xrt && balls[j]->yrb <= balls[i]->yrt && balls[j]->x < balls[i]->xlb&& balls[j]->y > balls[i]->ylb && balls[j]->xrt > balls[i]->xrb && balls[j]->yrt > balls[i]->yrb) || // around bottom
				(balls[j]->x < balls[i]->xlb&& balls[j]->y >= balls[i]->ylb && balls[j]->xrt > balls[i]->xrb && balls[j]->yrt >= balls[i]->yrb && balls[j]->xlb > balls[i]->x && balls[j]->ylb > balls[i]->y && balls[j]->xrb > balls[i]->xrt && balls[j]->yrb > balls[i]->yrt) || // around top
				(balls[j]->x <= balls[i]->xrt && balls[j]->y > balls[i]->yrt && balls[j]->xlb <= balls[i]->xrb && balls[j]->ylb < balls[i]->yrb&& balls[j]->xrt > balls[i]->x && balls[j]->yrt > balls[i]->y && balls[j]->xrb > balls[i]->xlb && balls[j]->yrb < balls[i]->ylb) || //around left
				(balls[j]->xrt >= balls[i]->x && balls[j]->yrt > balls[i]->y && balls[j]->xrb >= balls[i]->xlb && balls[j]->yrb < balls[i]->ylb&& balls[j]->x < balls[i]->xrt&& balls[j]->y > balls[i]->yrt&& balls[j]->xlb < balls[i]->xrb&& balls[j]->ylb < balls[i]->yrb)) //around right
			{
				ball^ tmp = gcnew ball;
				tmp->x = (balls[i]->x + balls[j]->x) / 2;
				tmp->y = (balls[i]->y + balls[j]->y) / 2;
				tmp->width = (balls[i]->width + balls[j]->width) / 2;
				//tmp->width = Math::Sqrt(balls[i]->width + balls[j]->width);
				tmp->recalculate();
				balls[i] = tmp;
				balls[j]->width = 10;
				balls[j]->y = 0;
				balls[j]->x += rndforballs->Next() % pw+3;
				balls[j]->recalculate();
			}
		}
	for (int i = 0; i < point; i++)
		e->Graphics->DrawEllipse(Pens::Black, balls[i]->x, balls[i]->y + ph, balls[i]->width, balls[i]->width);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
	Random^ rnd = gcnew Random;
	int pw = pictureBox1->Width, ph = pictureBox1->Height;
	int k = rnd->Next() % 2;
	if (point > max - 1)
		point = 0;
	for (int i = 0; i < k && point < max; i++)
	{
		balls[point]->width = 1;
		balls[point]->y = 0;
		balls[point]->x += rnd->Next() % pw;
		balls[point]->recalculate();
		point++;
	}
	pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e)
{
	Random^ rnd = gcnew Random;
	for (int i = 0; i < point; i++)
	{
		balls[i]->y -= rnd->Next() % 10;
		balls[i]->width += rnd->Next() % 2;
		balls[i]->recalculate();
	}
	pictureBox2->Invalidate();
}
};
}