#pragma once
#include<string>
#include<vector>
//#include <msclr/marshal_cppstd.h>
//typedef long long ll;
//using namespace std;
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
	public:
		PrimeFactorization(void)
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
		~PrimeFactorization()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PrimeFactorization::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 97);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// PrimeFactorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 244);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"PrimeFactorization";
			this->Text = L"PrimeFactorization";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*vector<pair<ll, int>> primeFact(ll x) {
			vector<pair<ll, int>> res;
			for (ll i = 2; i * i <= x; i++) {
				if (x % i) { continue; }
				ll p = i; int e = 0;
				while (x % p == 0) { x /= p; e++; }
				res.push_back({ p, e });
			}
			if (x != 1) { res.push_back({ x, 1 }); }
			return move(res);
		}*/

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*string s = marshal_as <string, String^>(textBox1->Text);
		int x = stoi(marshal_as<string, String^>(textBox1->Text));
		auto v = primeFact(x);
		string ans = "1";
		for (int i = 0; i < v.size(); i++) {
			for (int j = 0; j < v[i].second; j++) {
				ans = ans + "x " + to_string(v[i].first);
			}

		}
		textBox1->Text = marshal_as < String^, string >(ans);*/
	}
	};
}
