#pragma once
#include "Calculator.h"
#include "smart_ptr.h"

namespace UniverOOPCLR {

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
			calc = new smart_ptr<Calculator>(new Calculator());
			InitializeComponent();
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
			if (calc != nullptr) {
				delete calc;
				calc = nullptr;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: smart_ptr<Calculator>* calc;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
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
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(219, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 36);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(287, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Result";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(278, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Input";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(206, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(11, 146);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(35, 20);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"+";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(11, 172);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(32, 20);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"-";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(10, 224);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(32, 20);
			this->radioButton3->TabIndex = 9;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"/";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(10, 198);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(33, 20);
			this->radioButton4->TabIndex = 10;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"*";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(135, 224);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(50, 20);
			this->radioButton5->TabIndex = 11;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"sqrt";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(135, 172);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(53, 20);
			this->radioButton6->TabIndex = 12;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"pow";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(135, 198);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(75, 20);
			this->radioButton7->TabIndex = 13;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"factorial";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(135, 146);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(38, 20);
			this->radioButton8->TabIndex = 14;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"ln";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(70, 146);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(45, 20);
			this->radioButton9->TabIndex = 15;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"sin";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(70, 172);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(50, 20);
			this->radioButton10->TabIndex = 16;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"cos";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(70, 198);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(39, 20);
			this->radioButton11->TabIndex = 17;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"tg";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(69, 224);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(46, 20);
			this->radioButton12->TabIndex = 18;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"ctg";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(255, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(26, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(287, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(26, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(319, 137);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(26, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(255, 166);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(26, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(287, 166);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(26, 23);
			this->button7->TabIndex = 23;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(319, 166);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(26, 23);
			this->button8->TabIndex = 24;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(255, 195);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(26, 23);
			this->button9->TabIndex = 25;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(287, 195);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(26, 23);
			this->button10->TabIndex = 26;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(319, 195);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(26, 23);
			this->button11->TabIndex = 27;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(287, 224);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(26, 23);
			this->button12->TabIndex = 28;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::digitButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 262);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->radioButton12);
			this->Controls->Add(this->radioButton11);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Engineering calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double input1 = System::Convert::ToDouble(textBox1->Text);
			double result = System::Convert::ToDouble(textBox2->Text);

			if (radioButton1->Checked) {         // "+"
				result = (*calc)->add(result, input1);
			}
			else if (radioButton2->Checked) {   // "-"
				result = (*calc)->subtract(result, input1);
			}
			else if (radioButton3->Checked) {   // "/"
				result = (*calc)->divide(result, input1);
			}
			else if (radioButton4->Checked) {   // "*"
				result = (*calc)->multiply(result, input1);
			}
			else if (radioButton5->Checked) {   // "sqrt"
				result = (*calc)->sqrt(input1);
			}
			else if (radioButton6->Checked) {   // "pow"
				result = (*calc)->power(result, input1);
			}
			else if (radioButton7->Checked) {   // "factorial"
				result = (*calc)->factorial((int)input1);
			}
			else if (radioButton8->Checked) {   // "ln"
				result = (*calc)->ln(input1);
			}
			else if (radioButton9->Checked) {   // "sin"
				result = (*calc)->sin(input1);
			}
			else if (radioButton10->Checked) {  // "cos"
				result = (*calc)->cos(input1);
			}
			else if (radioButton11->Checked) {  // "tg"
				result = (*calc)->tan(input1);
			}
			else if (radioButton12->Checked) {  // "ctg"
				result = 1.0 / (*calc)->tan(input1);
			}

			textBox2->Text = result.ToString();
			textBox1->Clear();
		}
		catch (System::FormatException^) {
			MessageBox::Show("Enter the correct numbers.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Text = "0";
	}
	private: System::Void digitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ click_button = safe_cast<Button^>(sender);
		String^ digit = click_button->Text;
		textBox1->Text += digit;
	}

};
}
