#pragma once
#include<string>
#include <msclr/marshal_cppstd.h>
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
	public:
		fastexp(void)
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
	private: System::Windows::Forms::Label^ label1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(240, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(467, 78);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(254, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &fastexp::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(259, 289);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// fastexp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 382);
			this->Controls->Add(this->label1);
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
		ll modularPower(ll x, ll n, const ll mod) {
			ll res = 1;
			for (; n; n >>= 1, x = (x * x) % mod)
				if (n & 1) res = (res * x) % mod;
			return res;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ll x =stoi( marshal_as<string, String^>(textBox1->Text));
		ll n = stoi(marshal_as<string, String^>(textBox2->Text));
		ll mody = stoi(marshal_as<string, String^>(textBox3->Text));
		ll ans = modularPower(x, n, mody);
		string ansy = to_string(ans);
		label1->Text = marshal_as<String^,string>(ansy);
	}
	};
}
