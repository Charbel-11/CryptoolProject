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

	protected:


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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->AESEncrypt->Location = System::Drawing::Point(20, 371);
			this->AESEncrypt->Name = L"AESEncrypt";
			this->AESEncrypt->Size = System::Drawing::Size(75, 23);
			this->AESEncrypt->TabIndex = 4;
			this->AESEncrypt->Text = L"Encrypt";
			this->AESEncrypt->UseVisualStyleBackColor = true;
			this->AESEncrypt->Click += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESEncrypt_Click);
			// 
			// AESDecrypt
			// 
			this->AESDecrypt->Location = System::Drawing::Point(119, 371);
			this->AESDecrypt->Name = L"AESDecrypt";
			this->AESDecrypt->Size = System::Drawing::Size(75, 23);
			this->AESDecrypt->TabIndex = 5;
			this->AESDecrypt->Text = L"Decrypt";
			this->AESDecrypt->UseVisualStyleBackColor = true;
			this->AESDecrypt->Click += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESDecrypt_Click);
			// 
			// AESBack
			// 
			this->AESBack->Location = System::Drawing::Point(222, 371);
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
			this->AESKey->Location = System::Drawing::Point(119, 237);
			this->AESKey->Name = L"AESKey";
			this->AESKey->Size = System::Drawing::Size(355, 26);
			this->AESKey->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(16, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Key";
			// 
			// AESerror
			// 
			this->AESerror->AutoSize = true;
			this->AESerror->Location = System::Drawing::Point(91, 346);
			this->AESerror->Name = L"AESerror";
			this->AESerror->Size = System::Drawing::Size(0, 13);
			this->AESerror->TabIndex = 19;
			// 
			// AESCiphertext
			// 
			this->AESCiphertext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->AESCiphertext->Location = System::Drawing::Point(119, 302);
			this->AESCiphertext->Name = L"AESCiphertext";
			this->AESCiphertext->Size = System::Drawing::Size(355, 26);
			this->AESCiphertext->TabIndex = 18;
			// 
			// AESPlaintext
			// 
			this->AESPlaintext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->AESPlaintext->Location = System::Drawing::Point(119, 179);
			this->AESPlaintext->Name = L"AESPlaintext";
			this->AESPlaintext->Size = System::Drawing::Size(355, 26);
			this->AESPlaintext->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(16, 300);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Ciphertext:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(16, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Plaintext:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(283, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"For 128-AES: inputs should containg 32 hexadecimal digits";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 104);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(283, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"For 192-AES: inputs should containg 48 hexadecimal digits";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(283, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"For 256-AES: inputs should containg 64 hexadecimal digits";
			// 
			// AdvancedEncryptionStandard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 424);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
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
		if (key.size() != plaintext.size()) { AESerror->Text = marshal_as<String^, string>("ERROR: Key size different from plaintext size!"); return; }			
		if (plaintext.size() != 32 && plaintext.size() != 64 && plaintext.size() != 48) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Plaintext and Key Size!"); return; }
		if (ValidHexInput(plaintext) && ValidHexInput(key))
		{
			AES in(key);
			string res = in.encrpytAES(plaintext);
			AESCiphertext->Text = marshal_as<String^, string>(res);
		}
		
	}

	private: System::Void AESDecrypt_Click(System::Object^ sender, System::EventArgs^ e) {
		AESerror->Text = marshal_as<String^, string>("");
		string ciphertext = marshal_as<string, String^>(AESCiphertext->Text);
		string key = marshal_as<string, String^>(AESKey->Text);
		if (ciphertext.empty() || key.empty()) { AESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (key.size() != ciphertext.size()) { AESerror->Text = marshal_as<String^, string>("ERROR: Key size different from ciphertext size!"); return; }
		if (ciphertext.size() != 32 && ciphertext.size() != 48 && ciphertext.size() != 64) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid ciphertext and key ize!"); return; }
		if (ValidHexInput(ciphertext) && ValidHexInput(key))
		{
			AES in(key);
			string res = in.decryptAES(ciphertext);
			AESPlaintext->Text = marshal_as<String^, string>(res);
		}

	}

	private: System::Void AESBack_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show(); this->Close();
	}

};
}
