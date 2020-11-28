#pragma once

namespace LAB32 {

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
	private: System::Windows::Forms::TextBox^ width;
	private: System::Windows::Forms::TextBox^ height;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Label^ Lheight;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	protected:





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
			System::Windows::Forms::Label^ Lwidth;
			this->width = (gcnew System::Windows::Forms::TextBox());
			this->height = (gcnew System::Windows::Forms::TextBox());
			this->start = (gcnew System::Windows::Forms::Button());
			this->Lheight = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			Lwidth = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// width
			// 
			this->width->Location = System::Drawing::Point(3, 24);
			this->width->Name = L"width";
			this->width->Size = System::Drawing::Size(100, 20);
			this->width->TabIndex = 0;
			// 
			// height
			// 
			this->height->Location = System::Drawing::Point(3, 74);
			this->height->Name = L"height";
			this->height->Size = System::Drawing::Size(100, 20);
			this->height->TabIndex = 1;
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(3, 106);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(75, 23);
			this->start->TabIndex = 2;
			this->start->Text = L"start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			// 
			// Lwidth
			// 
			Lwidth->AutoSize = true;
			Lwidth->Location = System::Drawing::Point(3, 50);
			Lwidth->Name = L"Lwidth";
			Lwidth->Size = System::Drawing::Size(32, 13);
			Lwidth->TabIndex = 3;
			Lwidth->Text = L"width";
			// 
			// Lheight
			// 
			this->Lheight->AutoSize = true;
			this->Lheight->Location = System::Drawing::Point(3, 0);
			this->Lheight->Name = L"Lheight";
			this->Lheight->Size = System::Drawing::Size(36, 13);
			this->Lheight->TabIndex = 4;
			this->Lheight->Text = L"height";
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
			this->tableLayoutPanel2->Controls->Add(this->width, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->start, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->Lheight, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->height, 0, 3);
			this->tableLayoutPanel2->Controls->Add(Lwidth, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(310, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 42)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 58)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
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
			this->Text = L"MyForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: delegate double Function(double);
	private: double f(double x) { return Math::Sin(x); }
	private: double x1 = -2 * Math::PI, x2 = 2 * Math::PI, xstep, y1, y2, ystep;
	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int pw = pictureBox1->Width, ph = pictureBox1->Height;
		Function^ f = gcnew Function(this, &MyForm::f);
		Bitmap^ img = gcnew Bitmap(pw, ph);
		Graphics^ g = Graphics::FromImage(img);
		int mx = pw/2, my = ph/2;
		g->DrawLine(Pens::Red, mx, 0, mx, ph);//верт
		g->DrawLine(Pens::Red, 0, my, pw, my);//гор
		g->DrawLine(Pens::Green, 10, 10, 20, 10);
		g->DrawLine(Pens::Green, 20, 10, 25, 15);
		g->DrawLine(Pens::Green, 25, 15, 25, 25);
		g->DrawLine(Pens::Green, 25, 25, 20, 30);
		g->DrawLine(Pens::Green, 20, 30, , );
		this->pictureBox1->Image = img;
	}
};
}
