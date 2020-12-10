#pragma once
#include "MonoAlphabeticCipher.h"

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MonoAlphabeticCipherGUI
	/// </summary>
	public ref class MonoAlphabeticCipherGUI : public System::Windows::Forms::Form {
		Form^ parent;
		bool isLower(char& c) { return c >= 'a' && c <= 'z'; }
		bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }

		bool checkKey(string &key) {
			if (key.size() != 26) { return false; }
			for (char& c : key) {
				if (!isLower(c) && !isUpper(c)) { return false; }
				if (isUpper(c)) { c = c - 'A' + 'a'; }
			}
			if (set<char>(key.begin(), key.end()).size() != 26) { return false; }
			return true;
		}

	public:
		MonoAlphabeticCipherGUI(Form^ _parent)
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
		~MonoAlphabeticCipherGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ MACLabel;
	protected:
	private: System::Windows::Forms::Label^ DescriptionLabel;
	private: System::Windows::Forms::Label^ PCLabel;
	private: System::Windows::Forms::TextBox^ PCTB;
	private: System::Windows::Forms::TextBox^ CPTB;
	private: System::Windows::Forms::Label^ CPLabel;
	private: System::Windows::Forms::TextBox^ KeyTB;

	private: System::Windows::Forms::Label^ KeyLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ EncryptButton;
	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Button^ DecryptButton;


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
			this->MACLabel = (gcnew System::Windows::Forms::Label());
			this->DescriptionLabel = (gcnew System::Windows::Forms::Label());
			this->PCLabel = (gcnew System::Windows::Forms::Label());
			this->PCTB = (gcnew System::Windows::Forms::TextBox());
			this->CPTB = (gcnew System::Windows::Forms::TextBox());
			this->CPLabel = (gcnew System::Windows::Forms::Label());
			this->KeyTB = (gcnew System::Windows::Forms::TextBox());
			this->KeyLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EncryptButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->DecryptButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MACLabel
			// 
			this->MACLabel->AutoSize = true;
			this->MACLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MACLabel->Location = System::Drawing::Point(38, 9);
			this->MACLabel->Name = L"MACLabel";
			this->MACLabel->Size = System::Drawing::Size(563, 58);
			this->MACLabel->TabIndex = 0;
			this->MACLabel->Text = L"Mono-Alphabetic Cipher";
			// 
			// DescriptionLabel
			// 
			this->DescriptionLabel->AutoSize = true;
			this->DescriptionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->DescriptionLabel->Location = System::Drawing::Point(82, 67);
			this->DescriptionLabel->Name = L"DescriptionLabel";
			this->DescriptionLabel->Size = System::Drawing::Size(468, 25);
			this->DescriptionLabel->TabIndex = 1;
			this->DescriptionLabel->Text = L"Encrypts/Decrypts given permutation of the alphabet.";
			// 
			// PCLabel
			// 
			this->PCLabel->AutoSize = true;
			this->PCLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PCLabel->Location = System::Drawing::Point(12, 158);
			this->PCLabel->Name = L"PCLabel";
			this->PCLabel->Size = System::Drawing::Size(154, 20);
			this->PCLabel->TabIndex = 2;
			this->PCLabel->Text = L"Plaintext/Ciphertext";
			// 
			// PCTB
			// 
			this->PCTB->Location = System::Drawing::Point(215, 158);
			this->PCTB->Name = L"PCTB";
			this->PCTB->Size = System::Drawing::Size(386, 22);
			this->PCTB->TabIndex = 3;
			// 
			// CPTB
			// 
			this->CPTB->Location = System::Drawing::Point(215, 314);
			this->CPTB->Name = L"CPTB";
			this->CPTB->ReadOnly = true;
			this->CPTB->Size = System::Drawing::Size(386, 22);
			this->CPTB->TabIndex = 4;
			// 
			// CPLabel
			// 
			this->CPLabel->AutoSize = true;
			this->CPLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CPLabel->Location = System::Drawing::Point(12, 314);
			this->CPLabel->Name = L"CPLabel";
			this->CPLabel->Size = System::Drawing::Size(154, 20);
			this->CPLabel->TabIndex = 5;
			this->CPLabel->Text = L"Ciphertext/Plaintext";
			// 
			// KeyTB
			// 
			this->KeyTB->Location = System::Drawing::Point(215, 236);
			this->KeyTB->Name = L"KeyTB";
			this->KeyTB->Size = System::Drawing::Size(386, 22);
			this->KeyTB->TabIndex = 6;
			// 
			// KeyLabel
			// 
			this->KeyLabel->AutoSize = true;
			this->KeyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->KeyLabel->Location = System::Drawing::Point(12, 238);
			this->KeyLabel->Name = L"KeyLabel";
			this->KeyLabel->Size = System::Drawing::Size(37, 20);
			this->KeyLabel->TabIndex = 7;
			this->KeyLabel->Text = L"Key";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(212, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Must be a permutation of the alphabet.";
			// 
			// EncryptButton
			// 
			this->EncryptButton->Location = System::Drawing::Point(215, 371);
			this->EncryptButton->Name = L"EncryptButton";
			this->EncryptButton->Size = System::Drawing::Size(110, 29);
			this->EncryptButton->TabIndex = 9;
			this->EncryptButton->Text = L"Encrpyt";
			this->EncryptButton->UseVisualStyleBackColor = true;
			this->EncryptButton->Click += gcnew System::EventHandler(this, &MonoAlphabeticCipherGUI::EncryptButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(491, 371);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(110, 29);
			this->BackButton->TabIndex = 10;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &MonoAlphabeticCipherGUI::BackButton_Click);
			// 
			// DecryptButton
			// 
			this->DecryptButton->Location = System::Drawing::Point(354, 371);
			this->DecryptButton->Name = L"DecryptButton";
			this->DecryptButton->Size = System::Drawing::Size(110, 29);
			this->DecryptButton->TabIndex = 11;
			this->DecryptButton->Text = L"Decrypt";
			this->DecryptButton->UseVisualStyleBackColor = true;
			this->DecryptButton->Click += gcnew System::EventHandler(this, &MonoAlphabeticCipherGUI::DecryptButton_Click);
			// 
			// MonoAlphabeticCipherGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 450);
			this->Controls->Add(this->DecryptButton);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->EncryptButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->KeyLabel);
			this->Controls->Add(this->KeyTB);
			this->Controls->Add(this->CPLabel);
			this->Controls->Add(this->CPTB);
			this->Controls->Add(this->PCTB);
			this->Controls->Add(this->PCLabel);
			this->Controls->Add(this->DescriptionLabel);
			this->Controls->Add(this->MACLabel);
			this->Name = L"MonoAlphabeticCipherGUI";
			this->Text = L"MonoAlphabeticCipherGUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
			parent->Show(); this->Close();
		}
	private: 
		System::Void EncryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
			string text = marshal_as<string, String^>(PCTB->Text);
			string key = marshal_as<string, String^>(KeyTB->Text);
			if (!checkKey(key)) { CPTB->Text = marshal_as<String^, string>("ERROR: Invalid Key!"); return; }

			MonoAlphabeticCipher mac(key); string res = mac.encrypt(text);
			CPTB->Text = marshal_as<String^, string>(res);
		}
	private: 
		System::Void DecryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
			string text = marshal_as<string, String^>(PCTB->Text);
			string key = marshal_as<string, String^>(KeyTB->Text);
			if (!checkKey(key)) { CPTB->Text = marshal_as<String^, string>("ERROR: Invalid Key!"); return; }

			MonoAlphabeticCipher mac(key); string res = mac.decrypt(text);
			CPTB->Text = marshal_as<String^, string>(res);
		}
	};
}
