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
	/// Summary for Totient
	/// </summary>
	public ref class Totient : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		Totient(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Totient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ output;
	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->output = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"compute";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Totient::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(297, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Totient::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(140, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 135);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 5;
			// 
			// output
			// 
			this->output->AutoSize = true;
			this->output->Location = System::Drawing::Point(293, 141);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(0, 20);
			this->output->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(158, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Totient";
			// 
			// Totient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 348);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->output);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Totient";
			this->Text = L"Totient";
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
	NumberTheory NT;
	ll ans = NT.eulerTotient(x);
	string ansy = to_string(ans);
	output->Text = marshal_as<String^, string>(ansy);
}
};
}
