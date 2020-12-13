#pragma once
#include "AES.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include <vector>

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
			//delete result;
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

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ComboBox^ AESRound;
	private: System::Windows::Forms::Label^ AESRoundKey;
	private: System::Windows::Forms::Label^ AESRounRes;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->AESRound = (gcnew System::Windows::Forms::ComboBox());
			this->AESRoundKey = (gcnew System::Windows::Forms::Label());
			this->AESRounRes = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(194, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(852, 69);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Advanced Encryption Standard";
			// 
			// AESEncrypt
			// 
			this->AESEncrypt->Location = System::Drawing::Point(30, 571);
			this->AESEncrypt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AESEncrypt->Name = L"AESEncrypt";
			this->AESEncrypt->Size = System::Drawing::Size(112, 35);
			this->AESEncrypt->TabIndex = 4;
			this->AESEncrypt->Text = L"Encrypt";
			this->AESEncrypt->UseVisualStyleBackColor = true;
			this->AESEncrypt->Click += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESEncrypt_Click);
			// 
			// AESDecrypt
			// 
			this->AESDecrypt->Location = System::Drawing::Point(178, 571);
			this->AESDecrypt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AESDecrypt->Name = L"AESDecrypt";
			this->AESDecrypt->Size = System::Drawing::Size(112, 35);
			this->AESDecrypt->TabIndex = 5;
			this->AESDecrypt->Text = L"Decrypt";
			this->AESDecrypt->UseVisualStyleBackColor = true;
			this->AESDecrypt->Click += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESDecrypt_Click);
			// 
			// AESBack
			// 
			this->AESBack->Location = System::Drawing::Point(333, 571);
			this->AESBack->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AESBack->Name = L"AESBack";
			this->AESBack->Size = System::Drawing::Size(112, 35);
			this->AESBack->TabIndex = 6;
			this->AESBack->Text = L"Back";
			this->AESBack->UseVisualStyleBackColor = true;
			this->AESBack->Click += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESBack_Click);
			// 
			// AESKey
			// 
			this->AESKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->AESKey->Location = System::Drawing::Point(178, 365);
			this->AESKey->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AESKey->Name = L"AESKey";
			this->AESKey->Size = System::Drawing::Size(530, 35);
			this->AESKey->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(24, 374);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Key";
			// 
			// AESerror
			// 
			this->AESerror->AutoSize = true;
			this->AESerror->Location = System::Drawing::Point(136, 532);
			this->AESerror->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AESerror->Name = L"AESerror";
			this->AESerror->Size = System::Drawing::Size(0, 20);
			this->AESerror->TabIndex = 19;
			// 
			// AESCiphertext
			// 
			this->AESCiphertext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->AESCiphertext->Location = System::Drawing::Point(178, 465);
			this->AESCiphertext->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AESCiphertext->Name = L"AESCiphertext";
			this->AESCiphertext->Size = System::Drawing::Size(530, 35);
			this->AESCiphertext->TabIndex = 18;
			// 
			// AESPlaintext
			// 
			this->AESPlaintext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->AESPlaintext->Location = System::Drawing::Point(178, 275);
			this->AESPlaintext->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AESPlaintext->Name = L"AESPlaintext";
			this->AESPlaintext->Size = System::Drawing::Size(530, 35);
			this->AESPlaintext->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(24, 462);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Ciphertext:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(24, 285);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Plaintext:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 122);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(405, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"For 128-AES: key should containg 32 hexadecimal digits";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 160);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(405, 20);
			this->label6->TabIndex = 23;
			this->label6->Text = L"For 192-AES: key should containg 48 hexadecimal digits";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 195);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(405, 20);
			this->label7->TabIndex = 24;
			this->label7->Text = L"For 256-AES: key should containg 64 hexadecimal digits";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// AESRound
			// 
			this->AESRound->FormattingEnabled = true;
			this->AESRound->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15"
			});
			this->AESRound->Location = System::Drawing::Point(975, 109);
			this->AESRound->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->AESRound->Name = L"AESRound";
			this->AESRound->Size = System::Drawing::Size(180, 28);
			this->AESRound->TabIndex = 26;
			this->AESRound->Text = L"Choose Round";
			this->AESRound->SelectedIndexChanged += gcnew System::EventHandler(this, &AdvancedEncryptionStandard::AESRound_SelectedIndexChanged);
			// 
			// AESRoundKey
			// 
			this->AESRoundKey->AutoSize = true;
			this->AESRoundKey->Location = System::Drawing::Point(971, 195);
			this->AESRoundKey->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AESRoundKey->Name = L"AESRoundKey";
			this->AESRoundKey->Size = System::Drawing::Size(0, 20);
			this->AESRoundKey->TabIndex = 27;
			// 
			// AESRounRes
			// 
			this->AESRounRes->AutoSize = true;
			this->AESRounRes->Location = System::Drawing::Point(596, 122);
			this->AESRounRes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->AESRounRes->Name = L"AESRounRes";
			this->AESRounRes->Size = System::Drawing::Size(0, 20);
			this->AESRounRes->TabIndex = 28;
			this->AESRounRes->Visible = false;
			// 
			// AdvancedEncryptionStandard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1314, 652);
			this->Controls->Add(this->AESRounRes);
			this->Controls->Add(this->AESRoundKey);
			this->Controls->Add(this->AESRound);
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
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AdvancedEncryptionStandard";
			this->Text = L"AdvancedEncryptionStandard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
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
		if (plaintext.size() != 32) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Plaintext Size!"); return; }
		if (key.size() != 32 && key.size() != 48 && key.size() != 64) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Key Size!"); return; }
		if (ValidHexInput(plaintext) && ValidHexInput(key))
		{
			AES in(key);
			vector<string> result = in.encrpytAES(plaintext);
			AESRoundKey->Text = marshal_as<String^, string>(result[0]);
			int n = result.size();
			AESCiphertext->Text = marshal_as<String^, string>(result[n-1]);
			AESRounRes->Text = marshal_as<String^, string>("e");
		}
		
	}

	private: System::Void AESDecrypt_Click(System::Object^ sender, System::EventArgs^ e) {
		AESerror->Text = marshal_as<String^, string>("");
		string ciphertext = marshal_as<string, String^>(AESCiphertext->Text);
		string key = marshal_as<string, String^>(AESKey->Text);
		if (ciphertext.empty() || key.empty()) { AESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (ciphertext.size() != 32) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Ciphertext Size!"); return; }
		if (key.size() != 32 && key.size() != 48 && key.size() != 64) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Key Size!"); return; }
		if (ValidHexInput(ciphertext) && ValidHexInput(key))
		{
			AES in(key);
			vector<string> result = in.encrpytAES(ciphertext);
			AESRoundKey->Text = marshal_as<String^, string>(result[0]);
			int n = result.size();
			string s = result[n - 1];
			AESPlaintext->Text = marshal_as<String^, string>(result[n - 1]);
			//AESPlaintext->Text = marshal_as<String^, string>(res);
			AESRounRes->Text = marshal_as<String^, string>("d");
		}

	}

	private: System::Void AESBack_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show(); this->Close();
	}

private: System::Void AESRound_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	string round = marshal_as<string, String^>(AESRound->Text);
	string op = marshal_as<string, String^>(AESRounRes->Text);
	if (op == "e")
	{
		AESerror->Text = marshal_as<String^, string>("");
		string plaintext = marshal_as<string, String^>(AESPlaintext->Text);
		string key = marshal_as<string, String^>(AESKey->Text);
		if (plaintext.empty() || key.empty()) { AESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (plaintext.size() != 32) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Plaintext Size!"); return; }
		if (key.size() != 32 && key.size() != 48 && key.size() != 64) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Key Size!"); return; }
		if (ValidHexInput(plaintext) && ValidHexInput(key))
		{
			int r = stoi(round)-1;
			AES in(key);
			vector<string> result = in.encrpytAES(plaintext);
			if (r > result.size() - 1) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Round Number!"); return; }
			AESRoundKey->Text = marshal_as<String^, string>(result[r]);
			AESRounRes->Text = marshal_as<String^, string>("e");
		}
	}
	else
	{
		AESerror->Text = marshal_as<String^, string>("");
		string ciphertext = marshal_as<string, String^>(AESCiphertext->Text);
		string key = marshal_as<string, String^>(AESKey->Text);
		if (ciphertext.empty() || key.empty()) { AESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (ciphertext.size() != 32) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Ciphertext Size!"); return; }
		if (key.size() != 32 && key.size() != 48 && key.size() != 64) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Key Size!"); return; }
		if (ValidHexInput(ciphertext) && ValidHexInput(key))
		{
			int r = stoi(round)-1;
			AES in(key);
			vector<string> result = in.encrpytAES(ciphertext);
			if (r > result.size()-1) { AESerror->Text = marshal_as<String^, string>("ERROR: Invalid Round Number!"); return; }
			AESRoundKey->Text = marshal_as<String^, string>(result[r]);
			AESRounRes->Text = marshal_as<String^, string>("d");
		}
	}

}
};
}
