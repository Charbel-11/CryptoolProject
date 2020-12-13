#pragma once
#include "NumberTheory.h"

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MillerRabin
	/// </summary>
	public ref class MillerRabin : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		MillerRabin(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MillerRabin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ output;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ output2;

	private: System::Windows::Forms::Label^ label5;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->output = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->output2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(205, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(205, 169);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 1;
			// 
			// output
			// 
			this->output->AutoSize = true;
			this->output->Location = System::Drawing::Point(201, 242);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(0, 20);
			this->output->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"x";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"k";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 34);
			this->button1->TabIndex = 5;
			this->button1->Text = L"compute";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MillerRabin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(365, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 6;
			this->button2->Text = L"back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MillerRabin::button2_Click);
			// 
			// output2
			// 
			this->output2->AutoSize = true;
			this->output2->Location = System::Drawing::Point(221, 290);
			this->output2->Name = L"output2";
			this->output2->Size = System::Drawing::Size(0, 20);
			this->output2->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 290);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Lower Confidence Bound:";
			// 
			// MillerRabin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(511, 364);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->output2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->output);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MillerRabin";
			this->Text = L"MillerRabin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show(); this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string xStr = marshal_as<string, String^>(textBox1->Text);
		if (xStr.empty()) {
			output->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return;
		}
		if (!System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[-]?[0-9]+")) {
			output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
		}
		ll x = stoi(xStr);
		string xStra = marshal_as<string, String^>(textBox2->Text);
		if (xStra.empty()) {
			output->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return;
		}
			if (!System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[-]?[0-9]+")) {
				output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
			}
			ll k = stoi(xStra);
			NumberTheory NT;
			bool ans = NT.isPrime(x, k);
			string anss = (ans) ? "PRIME" : "NOT PRIME";

			output->Text = marshal_as<String^, string>(anss);
			double proba = 1;

			loop(i, k) {
				proba *= 0.25;
			}
			proba = 1 - proba;
			if (ans==0) {
				proba = 1;
			}
			string conf = to_string(proba);
			output2->Text = marshal_as<String^, string>(conf);
		}
	};
	}
