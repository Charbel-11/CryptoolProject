#pragma once
#include<string>
#include <msclr/marshal_cppstd.h>
#include "NumberTheory.h"
using namespace std;
namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for fastexp
	/// </summary>
	public ref class fastexp : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		fastexp(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~fastexp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ output;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ backButton;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(54, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(257, 160);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(470, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(96, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Compute";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &fastexp::button1_Click);
			// 
			// output
			// 
			this->output->AutoSize = true;
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->output->Location = System::Drawing::Point(347, 255);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(0, 25);
			this->output->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(191, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 36);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Fast Exponentiation";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(91, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"x";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(192, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"^";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(297, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(390, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"mod";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(504, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"m";
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(237, 335);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(157, 48);
			this->backButton->TabIndex = 11;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &fastexp::backButton_Click);
			// 
			// fastexp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 422);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->output);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"fastexp";
			this->Text = L"fastexp";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			string xStr = marshal_as<string, String^>(textBox1->Text);
			string nStr = marshal_as<string, String^>(textBox2->Text);
			string modStr = marshal_as<string, String^>(textBox3->Text);

			if (xStr.empty() || nStr.empty() || modStr.empty()) {
				output->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return;
			}
			if (!System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[-]?[0-9]+")) {
				output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
			}
			if (!System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[-]?[0-9]+")) {
				output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
			}
			if (!System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[-]?[0-9]+")) {
				output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
			}
			
			ll x = stoi(xStr);
			ll n = stoi(nStr);
			ll mody = stoi(modStr);

			NumberTheory NT;
			ll ans = NT.modularPower(x, n, mody);
			string ansy = to_string(ans);
			output->Text = marshal_as<String^, string>(ansy);
		}
		private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
			parent->Show(); this->Close();
		}
};
}
