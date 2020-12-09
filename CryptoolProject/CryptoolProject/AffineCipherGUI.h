#pragma once
#include "AffineCipher.h"
#include <string>
#include <msclr/marshal.h>

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for AffineCipherGUI
	/// </summary>
	public ref class AffineCipherGUI : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		AffineCipherGUI(Form^ _parent)
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
		~AffineCipherGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ PlaintextLabel;
	protected:
	private: System::Windows::Forms::Label^ AffineCipherLabel;
	private: System::Windows::Forms::TextBox^ PlainTextTB;
	private: System::Windows::Forms::ComboBox^ ACB;

	private: System::Windows::Forms::Label^ ALabel;
	private: System::Windows::Forms::ComboBox^ BCB;

	private: System::Windows::Forms::Label^ BLabel;
	private: System::Windows::Forms::TextBox^ CiphertextTB;

	private: System::Windows::Forms::Label^ CyphertextLabel;

	private: System::Windows::Forms::Button^ EncryptButton;
	private: System::Windows::Forms::Button^ BackButton;

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
			this->PlaintextLabel = (gcnew System::Windows::Forms::Label());
			this->AffineCipherLabel = (gcnew System::Windows::Forms::Label());
			this->PlainTextTB = (gcnew System::Windows::Forms::TextBox());
			this->ACB = (gcnew System::Windows::Forms::ComboBox());
			this->ALabel = (gcnew System::Windows::Forms::Label());
			this->BCB = (gcnew System::Windows::Forms::ComboBox());
			this->BLabel = (gcnew System::Windows::Forms::Label());
			this->CiphertextTB = (gcnew System::Windows::Forms::TextBox());
			this->CyphertextLabel = (gcnew System::Windows::Forms::Label());
			this->EncryptButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// PlaintextLabel
			// 
			this->PlaintextLabel->AutoSize = true;
			this->PlaintextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PlaintextLabel->Location = System::Drawing::Point(58, 127);
			this->PlaintextLabel->Name = L"PlaintextLabel";
			this->PlaintextLabel->Size = System::Drawing::Size(73, 20);
			this->PlaintextLabel->TabIndex = 0;
			this->PlaintextLabel->Text = L"Plaintext";
			// 
			// AffineCipherLabel
			// 
			this->AffineCipherLabel->AutoSize = true;
			this->AffineCipherLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->AffineCipherLabel->Location = System::Drawing::Point(169, 9);
			this->AffineCipherLabel->Name = L"AffineCipherLabel";
			this->AffineCipherLabel->Size = System::Drawing::Size(314, 58);
			this->AffineCipherLabel->TabIndex = 1;
			this->AffineCipherLabel->Text = L"Affine Cipher";
			// 
			// PlainTextTB
			// 
			this->PlainTextTB->Location = System::Drawing::Point(137, 127);
			this->PlainTextTB->Name = L"PlainTextTB";
			this->PlainTextTB->Size = System::Drawing::Size(450, 22);
			this->PlainTextTB->TabIndex = 2;
			// 
			// ACB
			// 
			this->ACB->FormattingEnabled = true;
			this->ACB->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
			});
			this->ACB->Location = System::Drawing::Point(137, 174);
			this->ACB->Name = L"ACB";
			this->ACB->Size = System::Drawing::Size(88, 24);
			this->ACB->TabIndex = 3;
			// 
			// ALabel
			// 
			this->ALabel->AutoSize = true;
			this->ALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ALabel->Location = System::Drawing::Point(113, 178);
			this->ALabel->Name = L"ALabel";
			this->ALabel->Size = System::Drawing::Size(20, 20);
			this->ALabel->TabIndex = 4;
			this->ALabel->Text = L"A";
			// 
			// BCB
			// 
			this->BCB->FormattingEnabled = true;
			this->BCB->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
			});
			this->BCB->Location = System::Drawing::Point(329, 174);
			this->BCB->Name = L"BCB";
			this->BCB->Size = System::Drawing::Size(88, 24);
			this->BCB->TabIndex = 5;
			// 
			// BLabel
			// 
			this->BLabel->AutoSize = true;
			this->BLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BLabel->Location = System::Drawing::Point(302, 178);
			this->BLabel->Name = L"BLabel";
			this->BLabel->Size = System::Drawing::Size(21, 20);
			this->BLabel->TabIndex = 6;
			this->BLabel->Text = L"B";
			// 
			// CiphertextTB
			// 
			this->CiphertextTB->Location = System::Drawing::Point(137, 233);
			this->CiphertextTB->Name = L"CiphertextTB";
			this->CiphertextTB->ReadOnly = true;
			this->CiphertextTB->Size = System::Drawing::Size(450, 22);
			this->CiphertextTB->TabIndex = 7;
			// 
			// CyphertextLabel
			// 
			this->CyphertextLabel->AutoSize = true;
			this->CyphertextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CyphertextLabel->Location = System::Drawing::Point(46, 235);
			this->CyphertextLabel->Name = L"CyphertextLabel";
			this->CyphertextLabel->Size = System::Drawing::Size(85, 20);
			this->CyphertextLabel->TabIndex = 8;
			this->CyphertextLabel->Text = L"Ciphertext";
			// 
			// EncryptButton
			// 
			this->EncryptButton->Location = System::Drawing::Point(137, 276);
			this->EncryptButton->Name = L"EncryptButton";
			this->EncryptButton->Size = System::Drawing::Size(132, 33);
			this->EncryptButton->TabIndex = 9;
			this->EncryptButton->Text = L"Encrypt";
			this->EncryptButton->UseVisualStyleBackColor = true;
			this->EncryptButton->Click += gcnew System::EventHandler(this, &AffineCipherGUI::EncryptButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(421, 276);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(132, 33);
			this->BackButton->TabIndex = 10;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			// 
			// AffineCipherGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 411);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->EncryptButton);
			this->Controls->Add(this->CyphertextLabel);
			this->Controls->Add(this->CiphertextTB);
			this->Controls->Add(this->BLabel);
			this->Controls->Add(this->BCB);
			this->Controls->Add(this->ALabel);
			this->Controls->Add(this->ACB);
			this->Controls->Add(this->PlainTextTB);
			this->Controls->Add(this->AffineCipherLabel);
			this->Controls->Add(this->PlaintextLabel);
			this->Name = L"AffineCipherGUI";
			this->Text = L"AffineCipherGUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void EncryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
			/*string text = marshal_as<string, String^>(PlainTextTB->Text);
			string a = marshal_as<string, String^>(ACB->Text);
			string b = marshal_as<string, String^>(BCB->Text);
			int A = stoi(a), B = stoi(b);

			AffineCipher ac(A, B); string res = ac.encrypt(text);
			CiphertextTB->Text = marshal_as<String^, string>(res);*/
		}
	};
}
