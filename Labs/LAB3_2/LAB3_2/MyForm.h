#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#define M_PI           3.14159265358979323846 
namespace LAB32
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
	private: System::Windows::Forms::TextBox^ line;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Label^ Lheight;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->line = (gcnew System::Windows::Forms::TextBox());
			this->start = (gcnew System::Windows::Forms::Button());
			this->Lheight = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// line
			// 
			this->line->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->line->Location = System::Drawing::Point(3, 27);
			this->line->Name = L"line";
			this->line->Size = System::Drawing::Size(100, 32);
			this->line->TabIndex = 0;
			this->line->TextChanged += gcnew System::EventHandler(this, &MyForm::line_TextChanged);
			this->line->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::line_KeyPress);
			// 
			// start
			// 
			this->start->Enabled = false;
			this->start->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start->Location = System::Drawing::Point(3, 65);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(80, 28);
			this->start->TabIndex = 2;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			// 
			// Lheight
			// 
			this->Lheight->AutoSize = true;
			this->Lheight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Lheight->Location = System::Drawing::Point(3, 0);
			this->Lheight->Name = L"Lheight";
			this->Lheight->Size = System::Drawing::Size(139, 23);
			this->Lheight->TabIndex = 4;
			this->Lheight->Text = L"Enter parametr:";
			this->Lheight->UseWaitCursor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.22222F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.77778F)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(494, 348);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->Lheight, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->line, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->start, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(310, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 38.88889F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 61.11111F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 279)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 238)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(181, 342);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 342);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 350);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MyForm";
			this->Text = L"Task 2";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

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
						x[i] = cos(angle) * a  + xs;
						y[i] = sin(angle) * a  + ys;
					}
					Color customColor = Color::FromArgb(150, Color::Black);
					SolidBrush^ shadowBrush = gcnew SolidBrush(customColor);
					g->FillPolygon(shadowBrush, gcnew array<Point>{
						Point(x[0], y[0]),
						Point(x[1], y[1]),
						Point(x[2], y[2]),
						Point(x[3], y[3]),
						Point(x[4], y[4]),
						Point(x[5], y[5])
					});
					g->DrawPolygon(Pens::Red, gcnew array<Point>{
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
private: System::Void line_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
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
			start->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void line_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (line->Text->Length == 0)
		start->Enabled = false;
	else
		start->Enabled = true;
}

};
}
