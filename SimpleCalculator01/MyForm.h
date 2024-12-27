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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(379, 79);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 64);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(104, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(196, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 64);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(288, 112);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 64);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button3";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 191);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 64);
			this->button5->TabIndex = 1;
			this->button5->Text = L"button1";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(104, 191);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 64);
			this->button6->TabIndex = 2;
			this->button6->Text = L"button2";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(196, 191);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 64);
			this->button7->TabIndex = 3;
			this->button7->Text = L"button3";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(288, 191);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(86, 64);
			this->button8->TabIndex = 3;
			this->button8->Text = L"button3";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 270);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 64);
			this->button9->TabIndex = 1;
			this->button9->Text = L"button1";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(104, 270);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(86, 64);
			this->button10->TabIndex = 2;
			this->button10->Text = L"button2";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(196, 270);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(86, 64);
			this->button11->TabIndex = 3;
			this->button11->Text = L"button3";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(288, 270);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(86, 64);
			this->button12->TabIndex = 3;
			this->button12->Text = L"button3";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(12, 349);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(86, 64);
			this->button13->TabIndex = 1;
			this->button13->Text = L"button1";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(104, 349);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(86, 64);
			this->button14->TabIndex = 2;
			this->button14->Text = L"button2";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(196, 349);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(86, 64);
			this->button15->TabIndex = 3;
			this->button15->Text = L"button3";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(288, 349);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(86, 64);
			this->button16->TabIndex = 3;
			this->button16->Text = L"button3";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(12, 429);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(178, 64);
			this->button17->TabIndex = 1;
			this->button17->Text = L"button1";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(196, 429);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(86, 64);
			this->button19->TabIndex = 3;
			this->button19->Text = L"button3";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(288, 429);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(86, 64);
			this->button20->TabIndex = 3;
			this->button20->Text = L"button3";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(403, 550);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
