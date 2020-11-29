#pragma once

namespace LAB31 {

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
	private: System::Windows::Forms::Button^ calculate;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ base;
	private: System::Windows::Forms::TextBox^ height;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ result;



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
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->base = (gcnew System::Windows::Forms::TextBox());
			this->height = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// calculate
			// 
			this->calculate->BackColor = System::Drawing::Color::Gainsboro;
			this->calculate->Enabled = false;
			this->calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->calculate->Location = System::Drawing::Point(28, 161);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(533, 32);
			this->calculate->TabIndex = 2;
			this->calculate->Text = L"Calculate";
			this->calculate->UseVisualStyleBackColor = false;
			this->calculate->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Triangles base (cm)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(336, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Triangles height (cm)";
			// 
			// base
			// 
			this->base->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->base->Location = System::Drawing::Point(28, 119);
			this->base->MaxLength = 10;
			this->base->Name = L"base";
			this->base->Size = System::Drawing::Size(220, 32);
			this->base->TabIndex = 5;
			this->base->TextChanged += gcnew System::EventHandler(this, &MyForm::base_TextChanged);
			this->base->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::base_KeyPress);
			// 
			// height
			// 
			this->height->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->height->Location = System::Drawing::Point(341, 119);
			this->height->MaxLength = 10;
			this->height->Name = L"height";
			this->height->Size = System::Drawing::Size(220, 32);
			this->height->TabIndex = 6;
			this->height->TextChanged += gcnew System::EventHandler(this, &MyForm::base_TextChanged);
			this->height->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::base_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(291, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Triangle square equally (cm):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(23, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(538, 50);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Application for triangle area calculation, if the base and\r\nheight of the triangl"
				L"e are known (in cm).";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->Location = System::Drawing::Point(320, 212);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 23);
			this->result->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(590, 258);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->height);
			this->Controls->Add(this->base);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->calculate);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(25);
			this->ShowIcon = false;
			this->Text = L"Task 1";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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
private: System::Void base_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if ((base->Text->Length == 0) || (height->Text->Length == 0))
		calculate->Enabled = false;
	else
		calculate->Enabled = true;
}
};
}