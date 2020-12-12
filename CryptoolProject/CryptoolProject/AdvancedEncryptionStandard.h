#pragma once
#include "AES.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdvancedEncryptionStandard
	/// </summary>
	public ref class AdvancedEncryptionStandard : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		AdvancedEncryptionStandard(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdvancedEncryptionStandard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ aes128;
	protected:
	private: System::Windows::Forms::RadioButton^ aes192;
	private: System::Windows::Forms::RadioButton^ aes256;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ AESEncrypt;
	private: System::Windows::Forms::Button^ AESDecrypt;
	private: System::Windows::Forms::Button^ AESBack;
	private: System::Windows::Forms::TextBox^ AESKey;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ AESerror;
	private: System::Windows::Forms::TextBox^ AESCiphertext;
	private: System::Windows::Forms::TextBox^ AESPlaintext;
	private: System::Windows::Forms::Label^ label3;
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
			this->aes128 = (gcnew System::Windows::Forms::RadioButton());
			this->aes192 = (gcnew System::Windows::Forms::RadioButton());
			this->aes256 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AESEncrypt = (gcnew System::Windows::Forms::Button());
			this->AESDecrypt = (gcnew System::Windows::Forms::Button());
			this->AESBack = (gcnew System::Windows::Forms::Button());
			this->AESKey = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AESerror = (gcnew System::Windows::Forms::Label());
			this->AESCiphertext = (gcnew System::Windows::Forms::TextBox());
			this->AESPlaintext = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// aes128
			// 
			this->aes128->AutoSize = true;
			this->aes128->Checked = true;
			this->aes128->Location = System::Drawing::Point(694, 67);
			this->aes128->Name = L"aes128";
			this->aes128->Size = System::Drawing::Size(67, 17);
			this->aes128->TabIndex = 0;
			this->aes128->TabStop = true;
			this->aes128->Text = L"AES-128";
			this->aes128->UseVisualStyleBackColor = true;
			// 
			// aes192
			// 
			this->aes192->AutoSize = true;
			this->aes192->Location = System::Drawing::Point(694, 112);
			this->aes192->Name = L"aes192";
			this->aes192->Size = System::Drawing::Size(67, 17);
			this->aes192->TabIndex = 1;
			this->aes192->Text = L"AES-192";
			this->aes192->UseVisualStyleBackColor = true;
			// 
			// aes256
			// 
			this->aes256->AutoSize = true;
			this->aes256->Location = System::Drawing::Point(694, 157);
			this->aes256->Name = L"aes256";
			this->aes256->Size = System::Drawing::Size(67, 17);
			this->aes256->TabIndex = 2;
			this->aes256->Text = L"AES-256";
			this->aes256->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(129, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(570, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Advanced Encryption Standard";
			// 
			// AESEncrypt
			// 
			this->AESEncrypt->Location = System::Drawing::Point(23, 281);
			this->AESEncrypt->Name = L"AESEncrypt";
			this->AESEncrypt->Size = System::Drawing::Size(75, 23);
			this->AESEncrypt->TabIndex = 4;
			this->AESEncrypt->Text = L"Encrypt";
			this->AESEncrypt->UseVisualStyleBackColor = true;
			this->AESEncrypt->Click += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESEncrypt_Click);
			// 
			// AESDecrypt
			// 
			this->AESDecrypt->Location = System::Drawing::Point(122, 281);
			this->AESDecrypt->Name = L"AESDecrypt";
			this->AESDecrypt->Size = System::Drawing::Size(75, 23);
			this->AESDecrypt->TabIndex = 5;
			this->AESDecrypt->Text = L"Decrypt";
			this->AESDecrypt->UseVisualStyleBackColor = true;
			this->AESDecrypt->Click += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESDecrypt_Click);
			// 
			// AESBack
			// 
			this->AESBack->Location = System::Drawing::Point(225, 281);
			this->AESBack->Name = L"AESBack";
			this->AESBack->Size = System::Drawing::Size(75, 23);
			this->AESBack->TabIndex = 6;
			this->AESBack->Text = L"Back";
			this->AESBack->UseVisualStyleBackColor = true;
			this->AESBack->Click += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESBack_Click);
			// 
			// AESKey
			// 
			this->AESKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->AESKey->Location = System::Drawing::Point(122, 147);
			this->AESKey->Name = L"AESKey";
			this->AESKey->Size = System::Drawing::Size(355, 26);
			this->AESKey->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(19, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Key";
			// 
			// AESerror
			// 
			this->AESerror->AutoSize = true;
			this->AESerror->Location = System::Drawing::Point(94, 256);
			this->AESerror->Name = L"AESerror";
			this->AESerror->Size = System::Drawing::Size(0, 13);
			this->AESerror->TabIndex = 19;
			// 
			// AESCiphertext
			// 
			this->AESCiphertext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->AESCiphertext->Location = System::Drawing::Point(122, 212);
			this->AESCiphertext->Name = L"AESCiphertext";
			this->AESCiphertext->Size = System::Drawing::Size(355, 26);
			this->AESCiphertext->TabIndex = 18;
			// 
			// AESPlaintext
			// 
			this->AESPlaintext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->AESPlaintext->Location = System::Drawing::Point(122, 89);
			this->AESPlaintext->Name = L"AESPlaintext";
			this->AESPlaintext->Size = System::Drawing::Size(355, 26);
			this->AESPlaintext->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(19, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Ciphertext:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(19, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Plaintext:";
			// 
			// AdvancedEncryptionStandard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 395);
			this->Controls->Add(this->AESKey);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->AESerror);
			this->Controls->Add(this->AESCiphertext);
			this->Controls->Add(this->AESPlaintext);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->AESBack);
			this->Controls->Add(this->AESDecrypt);
			this->Controls->Add(this->AESEncrypt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->aes256);
			this->Controls->Add(this->aes192);
			this->Controls->Add(this->aes128);
			this->Name = L"AdvancedEncryptionStandard";
			this->Text = L"AdvancedEncryptionStandard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: bool ValidHexInput(string text)
	{
		string Hex = "0123456789ABCDEF";
		for (int i = 0; i < text.size(); i++)
		{
			if (Hex.find(text[i]) == std::string::npos)
			{
				AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Hex Input!"); return false;
			}
		}
		return true;
	}
	private: System::Void AESEncrypt_Click(System::Object^ sender, System::EventArgs^ e) {
		AESerror->Text = marshal_as<String^, string>("");
		string plaintext = marshal_as<string, String^>(AESPlaintext->Text);
		string key = marshal_as<string, String^>(AESKey->Text);
		if (plaintext.empty() || key.empty()) { AESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (aes128->Checked)
		{
			if (key.size() != 32) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Key Size!"); return; }
			if (plaintext.size() != 32) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Plaintext Size!"); return; }
			if (ValidHexInput(plaintext) && ValidHexInput(key))
			{
				AES in(key);
				string res = in.encrpytAES(plaintext);
				AESCiphertext->Text = marshal_as<String^, string>(res);
			}
		}
	}

	private: System::Void AESDecrypt_Click(System::Object^ sender, System::EventArgs^ e) {
		AESerror->Text = marshal_as<String^, string>("");
		string ciphertext = marshal_as<string, String^>(AESCiphertext->Text);
		string key = marshal_as<string, String^>(AESKey->Text);
		if (ciphertext.empty() || key.empty()) { AESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (aes128->Checked)
		{
			if (key.size() != 32) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Key Size!"); return; }
			if (ciphertext.size() != 32) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Ciphertext Size!"); return; }
			if (ValidHexInput(ciphertext) && ValidHexInput(key))
			{
				AES in(key);
				string res = in.decryptAES(ciphertext);
				AESPlaintext->Text = marshal_as<String^, string>(res);
			}
		}

	}

	private: System::Void AESBack_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show(); this->Close();
	}

};
}
