#pragma once
#include "NumberTheory.h"
#include <msclr/marshal_cppstd.h>

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PrimeFactorization
	/// </summary>
	public ref class PrimeFactorization : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		PrimeFactorization(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PrimeFactorization()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ backButton;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ output;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->output = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(349, 284);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(157, 48);
			this->backButton->TabIndex = 23;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &PrimeFactorization::backButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(91, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(176, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(270, 36);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Prime Factorization";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(48, 189);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(184, 25);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Prime Factorization:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(75, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 48);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Factorize";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PrimeFactorization::button1_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(270, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 26);
			this->textBox2->TabIndex = 13;
			// 
			// output
			// 
			this->output->AutoSize = true;
			this->output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->output->Location = System::Drawing::Point(265, 189);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(0, 25);
			this->output->TabIndex = 24;
			// 
			// PrimeFactorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 372);
			this->Controls->Add(this->output);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Name = L"PrimeFactorization";
			this->Text = L"PrimeFactorization";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		string nStr = marshal_as<string, String^>(textBox2->Text);
		if (nStr.empty()) {
			output->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return;
		}
		if (!System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[-]?[0-9]+")) {
			output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
		}
		
		ll n = stoll(nStr);
		bool neg = false;
		if (n < 0) { n = -n; neg = true; }
		NumberTheory NT;
		vector<pair<ll, int>> primeF = NT.primeFact(n);
		string ans = (neg ? "-" : "");
		for (auto& p : primeF) {
			ans += to_string(p.first);
			if (p.second > 1) {
				ans += "^" + to_string(p.second);
			}
			ans += " x ";
		}
		ans.pop_back();
		ans.pop_back();
		ans.pop_back();

		output->Text = marshal_as < String^, string >(ans);
	}
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show(); this->Close();
	}
};
}
