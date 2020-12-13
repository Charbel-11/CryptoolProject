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
	/// Summary for ChineseRemainder
	/// </summary>
	public ref class ChineseRemainder : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		ChineseRemainder(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ChineseRemainder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ output;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;

	protected:

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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->output = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 26);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"input";
			// 
			// output
			// 
			this->output->AutoSize = true;
			this->output->Location = System::Drawing::Point(161, 205);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(51, 20);
			this->output->TabIndex = 2;
			this->output->Text = L"label2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(333, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChineseRemainder::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(102, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Chinese Remainder Theorem";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(58, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 34);
			this->button2->TabIndex = 6;
			this->button2->Text = L"compute";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ChineseRemainder::button2_Click);
			// 
			// ChineseRemainder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 374);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->output);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"ChineseRemainder";
			this->Text = L"ChineseRemainder";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show(); this->Close();
	}

		   vector<string> split(const string& str, const string& delim)
		   {
			   vector<string> tokens;
			   size_t prev = 0, pos = 0;
			   do
			   {
				   pos = str.find(delim, prev);
				   if (pos == string::npos) pos = str.length();
				   string token = str.substr(prev, pos - prev);
				   if (!token.empty()) tokens.push_back(token);
				   prev = pos + delim.length();
			   } while (pos < str.length() && prev < str.length());
			   return tokens;
		   }

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	string s = marshal_as<string, String^>(textBox1->Text);
	if (!System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "([0-9]+,[0-9]+;)+")) {
		output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
	}
	auto p = split(s, ";");
	vector<ll> v1;
	vector<ll> v2;
	for (int i = 0; i < p.size(); i++) {
		auto x = split(p[i], ",");
		int n1 = stoi(x[0]);
		int n2 = stoi(x[1]);
		v1.push_back(n1);
		v2.push_back(n2);
	}
	NumberTheory NT;
	ll ans = NT.CRT(v1, v2);
	string ansy = to_string(ans);
	output->Text = marshal_as<String^, string>(ansy);


}
};
}
