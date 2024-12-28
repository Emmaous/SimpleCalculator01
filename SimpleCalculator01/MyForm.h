#pragma once

namespace SimpleCalculator01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textDisplay01;
	protected:

	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_plusOper;
	private: System::Windows::Forms::Button^ btn_sign;
	protected:




	private: System::Windows::Forms::Button^ btn_CE;

	private: System::Windows::Forms::Button^ btn07;
	private: System::Windows::Forms::Button^ btn_minusOper;


	private: System::Windows::Forms::Button^ btn09;

	private: System::Windows::Forms::Button^ btn08;

	private: System::Windows::Forms::Button^ btn04;
	private: System::Windows::Forms::Button^ btn_multiOper;


	private: System::Windows::Forms::Button^ btn06;

	private: System::Windows::Forms::Button^ btn05;

	private: System::Windows::Forms::Button^ btn01;
	private: System::Windows::Forms::Button^ btn_divOper;


	private: System::Windows::Forms::Button^ btn03;

	private: System::Windows::Forms::Button^ btn02;
	private: System::Windows::Forms::Button^ btn_zero;



	private: System::Windows::Forms::Button^ btn_equals;
	private: System::Windows::Forms::Button^ btn_period;






















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textDisplay01 = (gcnew System::Windows::Forms::TextBox());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_plusOper = (gcnew System::Windows::Forms::Button());
			this->btn_sign = (gcnew System::Windows::Forms::Button());
			this->btn_CE = (gcnew System::Windows::Forms::Button());
			this->btn07 = (gcnew System::Windows::Forms::Button());
			this->btn_minusOper = (gcnew System::Windows::Forms::Button());
			this->btn09 = (gcnew System::Windows::Forms::Button());
			this->btn08 = (gcnew System::Windows::Forms::Button());
			this->btn04 = (gcnew System::Windows::Forms::Button());
			this->btn_multiOper = (gcnew System::Windows::Forms::Button());
			this->btn06 = (gcnew System::Windows::Forms::Button());
			this->btn05 = (gcnew System::Windows::Forms::Button());
			this->btn01 = (gcnew System::Windows::Forms::Button());
			this->btn_divOper = (gcnew System::Windows::Forms::Button());
			this->btn03 = (gcnew System::Windows::Forms::Button());
			this->btn02 = (gcnew System::Windows::Forms::Button());
			this->btn_zero = (gcnew System::Windows::Forms::Button());
			this->btn_equals = (gcnew System::Windows::Forms::Button());
			this->btn_period = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textDisplay01
			// 
			this->textDisplay01->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDisplay01->Location = System::Drawing::Point(12, 12);
			this->textDisplay01->Multiline = true;
			this->textDisplay01->Name = L"textDisplay01";
			this->textDisplay01->ReadOnly = true;
			this->textDisplay01->Size = System::Drawing::Size(390, 83);
			this->textDisplay01->TabIndex = 0;
			this->textDisplay01->Text = L"0";
			this->textDisplay01->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn_clear
			// 
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear->Location = System::Drawing::Point(12, 113);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(96, 52);
			this->btn_clear->TabIndex = 1;
			this->btn_clear->Text = L"Clear";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// btn_plusOper
			// 
			this->btn_plusOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_plusOper->Location = System::Drawing::Point(316, 113);
			this->btn_plusOper->Name = L"btn_plusOper";
			this->btn_plusOper->Size = System::Drawing::Size(86, 52);
			this->btn_plusOper->TabIndex = 4;
			this->btn_plusOper->Text = L"+";
			this->btn_plusOper->UseVisualStyleBackColor = true;
			this->btn_plusOper->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn_sign
			// 
			this->btn_sign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sign->Location = System::Drawing::Point(215, 113);
			this->btn_sign->Name = L"btn_sign";
			this->btn_sign->Size = System::Drawing::Size(95, 52);
			this->btn_sign->TabIndex = 5;
			this->btn_sign->Text = L"+/-";
			this->btn_sign->UseVisualStyleBackColor = true;
			this->btn_sign->Click += gcnew System::EventHandler(this, &MyForm::btn_sign_Click);
			// 
			// btn_CE
			// 
			this->btn_CE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_CE->Location = System::Drawing::Point(114, 113);
			this->btn_CE->Name = L"btn_CE";
			this->btn_CE->Size = System::Drawing::Size(95, 52);
			this->btn_CE->TabIndex = 6;
			this->btn_CE->Text = L"CE";
			this->btn_CE->UseVisualStyleBackColor = true;
			this->btn_CE->Click += gcnew System::EventHandler(this, &MyForm::btn_CE_Click);
			// 
			// btn07
			// 
			this->btn07->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn07->Location = System::Drawing::Point(12, 171);
			this->btn07->Name = L"btn07";
			this->btn07->Size = System::Drawing::Size(96, 52);
			this->btn07->TabIndex = 1;
			this->btn07->Text = L"7";
			this->btn07->UseVisualStyleBackColor = true;
			this->btn07->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_minusOper
			// 
			this->btn_minusOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_minusOper->Location = System::Drawing::Point(316, 171);
			this->btn_minusOper->Name = L"btn_minusOper";
			this->btn_minusOper->Size = System::Drawing::Size(86, 52);
			this->btn_minusOper->TabIndex = 4;
			this->btn_minusOper->Text = L"-";
			this->btn_minusOper->UseVisualStyleBackColor = true;
			this->btn_minusOper->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn09
			// 
			this->btn09->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn09->Location = System::Drawing::Point(215, 171);
			this->btn09->Name = L"btn09";
			this->btn09->Size = System::Drawing::Size(95, 52);
			this->btn09->TabIndex = 5;
			this->btn09->Text = L"9";
			this->btn09->UseVisualStyleBackColor = true;
			this->btn09->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn08
			// 
			this->btn08->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn08->Location = System::Drawing::Point(114, 171);
			this->btn08->Name = L"btn08";
			this->btn08->Size = System::Drawing::Size(95, 52);
			this->btn08->TabIndex = 6;
			this->btn08->Text = L"8";
			this->btn08->UseVisualStyleBackColor = true;
			this->btn08->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn04
			// 
			this->btn04->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn04->Location = System::Drawing::Point(12, 229);
			this->btn04->Name = L"btn04";
			this->btn04->Size = System::Drawing::Size(96, 52);
			this->btn04->TabIndex = 1;
			this->btn04->Text = L"4";
			this->btn04->UseVisualStyleBackColor = true;
			this->btn04->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_multiOper
			// 
			this->btn_multiOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_multiOper->Location = System::Drawing::Point(316, 229);
			this->btn_multiOper->Name = L"btn_multiOper";
			this->btn_multiOper->Size = System::Drawing::Size(86, 52);
			this->btn_multiOper->TabIndex = 4;
			this->btn_multiOper->Text = L"*";
			this->btn_multiOper->UseVisualStyleBackColor = true;
			this->btn_multiOper->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn06
			// 
			this->btn06->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn06->Location = System::Drawing::Point(215, 229);
			this->btn06->Name = L"btn06";
			this->btn06->Size = System::Drawing::Size(95, 52);
			this->btn06->TabIndex = 5;
			this->btn06->Text = L"6";
			this->btn06->UseVisualStyleBackColor = true;
			this->btn06->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn05
			// 
			this->btn05->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn05->Location = System::Drawing::Point(114, 229);
			this->btn05->Name = L"btn05";
			this->btn05->Size = System::Drawing::Size(95, 52);
			this->btn05->TabIndex = 6;
			this->btn05->Text = L"5";
			this->btn05->UseVisualStyleBackColor = true;
			this->btn05->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn01
			// 
			this->btn01->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn01->Location = System::Drawing::Point(12, 287);
			this->btn01->Name = L"btn01";
			this->btn01->Size = System::Drawing::Size(96, 52);
			this->btn01->TabIndex = 1;
			this->btn01->Text = L"1";
			this->btn01->UseVisualStyleBackColor = true;
			this->btn01->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_divOper
			// 
			this->btn_divOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_divOper->Location = System::Drawing::Point(316, 287);
			this->btn_divOper->Name = L"btn_divOper";
			this->btn_divOper->Size = System::Drawing::Size(86, 52);
			this->btn_divOper->TabIndex = 4;
			this->btn_divOper->Text = L"/";
			this->btn_divOper->UseVisualStyleBackColor = true;
			this->btn_divOper->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn03
			// 
			this->btn03->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn03->Location = System::Drawing::Point(215, 287);
			this->btn03->Name = L"btn03";
			this->btn03->Size = System::Drawing::Size(95, 52);
			this->btn03->TabIndex = 5;
			this->btn03->Text = L"3";
			this->btn03->UseVisualStyleBackColor = true;
			this->btn03->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn02
			// 
			this->btn02->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn02->Location = System::Drawing::Point(114, 287);
			this->btn02->Name = L"btn02";
			this->btn02->Size = System::Drawing::Size(95, 52);
			this->btn02->TabIndex = 6;
			this->btn02->Text = L"2";
			this->btn02->UseVisualStyleBackColor = true;
			this->btn02->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_zero
			// 
			this->btn_zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_zero->Location = System::Drawing::Point(12, 356);
			this->btn_zero->Name = L"btn_zero";
			this->btn_zero->Size = System::Drawing::Size(96, 69);
			this->btn_zero->TabIndex = 1;
			this->btn_zero->Text = L"0";
			this->btn_zero->UseVisualStyleBackColor = true;
			this->btn_zero->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_equals
			// 
			this->btn_equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_equals->Location = System::Drawing::Point(215, 356);
			this->btn_equals->Name = L"btn_equals";
			this->btn_equals->Size = System::Drawing::Size(187, 69);
			this->btn_equals->TabIndex = 4;
			this->btn_equals->Text = L"=";
			this->btn_equals->UseVisualStyleBackColor = true;
			this->btn_equals->Click += gcnew System::EventHandler(this, &MyForm::btn_equals_Click);
			// 
			// btn_period
			// 
			this->btn_period->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_period->Location = System::Drawing::Point(114, 356);
			this->btn_period->Name = L"btn_period";
			this->btn_period->Size = System::Drawing::Size(95, 69);
			this->btn_period->TabIndex = 5;
			this->btn_period->Text = L".";
			this->btn_period->UseVisualStyleBackColor = true;
			this->btn_period->Click += gcnew System::EventHandler(this, &MyForm::btn_period_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 437);
			this->Controls->Add(this->btn02);
			this->Controls->Add(this->btn05);
			this->Controls->Add(this->btn08);
			this->Controls->Add(this->btn_period);
			this->Controls->Add(this->btn_CE);
			this->Controls->Add(this->btn03);
			this->Controls->Add(this->btn06);
			this->Controls->Add(this->btn09);
			this->Controls->Add(this->btn_equals);
			this->Controls->Add(this->btn_sign);
			this->Controls->Add(this->btn_divOper);
			this->Controls->Add(this->btn_multiOper);
			this->Controls->Add(this->btn_minusOper);
			this->Controls->Add(this->btn_zero);
			this->Controls->Add(this->btn_plusOper);
			this->Controls->Add(this->btn01);
			this->Controls->Add(this->btn04);
			this->Controls->Add(this->btn07);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->textDisplay01);
			this->MaximumSize = System::Drawing::Size(430, 500);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(400, 450);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simple Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//declaring variables to handle numbers and operators
		double firstNumber, secondNumber, result;
		String^ operators;


		// funtion to handle number entry
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	
	Button^ Numbers = safe_cast<Button^>(sender);

	if (textDisplay01->Text == "0")
	{
		textDisplay01->Text = Numbers->Text;
	}
	else
	{
		textDisplay01->Text += Numbers->Text;
	}
}

	   // funtion to handle operator buttons
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ Operators = safe_cast<Button^>(sender);

	firstNumber = Double::Parse(textDisplay01->Text);
	textDisplay01->Text = "0";
	operators = Operators->Text;
}

	   //function to handle period button
private: System::Void btn_period_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!textDisplay01->Text->Contains("."))
	{
		textDisplay01->Text += ".";
	}
}

	   // funtion to handle equals to button and arithmetic operations
private: System::Void btn_equals_Click(System::Object^ sender, System::EventArgs^ e) {

	secondNumber = Double::Parse(textDisplay01->Text);

	// logic to handle arithmetic operations
	if (operators == "+")
	{
		result = firstNumber + secondNumber;
	}
	else if (operators == "-")
	{
		result = firstNumber - secondNumber;
	}
	else if (operators == "*") 
	{
		result = firstNumber * secondNumber;
	}
	else if (operators == "/")
	{
		result = firstNumber / secondNumber;
	}

	//display result of the operation
	textDisplay01->Text = System::Convert::ToString(result);
}

	   // funtion to handle clear button
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {

	textDisplay01->Text = "0";
}

// funtion to handle sign button
private: System::Void btn_sign_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textDisplay01->Text->Contains("-"))
	{
		textDisplay01->Text = textDisplay01->Text->Remove(0, 1);
	}
	else
	{
		textDisplay01->Text = "-" + textDisplay01->Text;
	}
}

	   // funtion to handle clear entry button
private: System::Void btn_CE_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textDisplay01->Text->Length > 0)
	{
		textDisplay01->Text = textDisplay01->Text->Remove(textDisplay01->Text->Length - 1, 1);
	}

	if (textDisplay01->Text == "")
	{
		textDisplay01->Text = "0";
	}
}
};
}
