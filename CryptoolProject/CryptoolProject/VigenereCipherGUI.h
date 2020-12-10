#pragma once
#include "VigenereCipher.h"

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VigenereCipherGUI
	/// </summary>
	public ref class VigenereCipherGUI : public System::Windows::Forms::Form {
		Form^ parent;
		bool isLower(char& c) { return c >= 'a' && c <= 'z'; }
		bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }

		bool checkKey(string& key) {
			for(char &c : key) if (!isLower(c) && !isUpper(c)) { return false; }
			return true;
		}

	public:
		VigenereCipherGUI(Form^ _parent)
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
		~VigenereCipherGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ DecryptButton;
	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Button^ EncryptButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ KeyLabel;
	private: System::Windows::Forms::TextBox^ KeyTB;
	private: System::Windows::Forms::Label^ CPLabel;
	private: System::Windows::Forms::TextBox^ CPTB;
	private: System::Windows::Forms::TextBox^ PCTB;
	private: System::Windows::Forms::Label^ PCLabel;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DecryptButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->EncryptButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->KeyLabel = (gcnew System::Windows::Forms::Label());
			this->KeyTB = (gcnew System::Windows::Forms::TextBox());
			this->CPLabel = (gcnew System::Windows::Forms::Label());
			this->CPTB = (gcnew System::Windows::Forms::TextBox());
			this->PCTB = (gcnew System::Windows::Forms::TextBox());
			this->PCLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(126, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vigenère Cipher";
			// 
			// DecryptButton
			// 
			this->DecryptButton->Location = System::Drawing::Point(354, 348);
			this->DecryptButton->Name = L"DecryptButton";
			this->DecryptButton->Size = System::Drawing::Size(110, 29);
			this->DecryptButton->TabIndex = 21;
			this->DecryptButton->Text = L"Decrypt";
			this->DecryptButton->UseVisualStyleBackColor = true;
			this->DecryptButton->Click += gcnew System::EventHandler(this, &VigenereCipherGUI::DecryptButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(491, 348);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(110, 29);
			this->BackButton->TabIndex = 20;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &VigenereCipherGUI::BackButton_Click);
			// 
			// EncryptButton
			// 
			this->EncryptButton->Location = System::Drawing::Point(215, 348);
			this->EncryptButton->Name = L"EncryptButton";
			this->EncryptButton->Size = System::Drawing::Size(110, 29);
			this->EncryptButton->TabIndex = 19;
			this->EncryptButton->Text = L"Encrpyt";
			this->EncryptButton->UseVisualStyleBackColor = true;
			this->EncryptButton->Click += gcnew System::EventHandler(this, &VigenereCipherGUI::EncryptButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(212, 238);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(382, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Must be a single word consisting of english characters only.";
			// 
			// KeyLabel
			// 
			this->KeyLabel->AutoSize = true;
			this->KeyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->KeyLabel->Location = System::Drawing::Point(12, 215);
			this->KeyLabel->Name = L"KeyLabel";
			this->KeyLabel->Size = System::Drawing::Size(37, 20);
			this->KeyLabel->TabIndex = 17;
			this->KeyLabel->Text = L"Key";
			// 
			// KeyTB
			// 
			this->KeyTB->Location = System::Drawing::Point(215, 213);
			this->KeyTB->Name = L"KeyTB";
			this->KeyTB->Size = System::Drawing::Size(386, 22);
			this->KeyTB->TabIndex = 16;
			// 
			// CPLabel
			// 
			this->CPLabel->AutoSize = true;
			this->CPLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CPLabel->Location = System::Drawing::Point(12, 291);
			this->CPLabel->Name = L"CPLabel";
			this->CPLabel->Size = System::Drawing::Size(154, 20);
			this->CPLabel->TabIndex = 15;
			this->CPLabel->Text = L"Ciphertext/Plaintext";
			// 
			// CPTB
			// 
			this->CPTB->Location = System::Drawing::Point(215, 291);
			this->CPTB->Name = L"CPTB";
			this->CPTB->ReadOnly = true;
			this->CPTB->Size = System::Drawing::Size(386, 22);
			this->CPTB->TabIndex = 14;
			// 
			// PCTB
			// 
			this->PCTB->Location = System::Drawing::Point(215, 135);
			this->PCTB->Name = L"PCTB";
			this->PCTB->Size = System::Drawing::Size(386, 22);
			this->PCTB->TabIndex = 13;
			// 
			// PCLabel
			// 
			this->PCLabel->AutoSize = true;
			this->PCLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PCLabel->Location = System::Drawing::Point(12, 135);
			this->PCLabel->Name = L"PCLabel";
			this->PCLabel->Size = System::Drawing::Size(154, 20);
			this->PCLabel->TabIndex = 12;
			this->PCLabel->Text = L"Plaintext/Ciphertext";
			// 
			// VigenereCipherGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 428);
			this->Controls->Add(this->DecryptButton);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->EncryptButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->KeyLabel);
			this->Controls->Add(this->KeyTB);
			this->Controls->Add(this->CPLabel);
			this->Controls->Add(this->CPTB);
			this->Controls->Add(this->PCTB);
			this->Controls->Add(this->PCLabel);
			this->Controls->Add(this->label1);
			this->Name = L"VigenereCipherGUI";
			this->Text = L"VigenereCipherGUI";
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

			VigenereCipher vc(key); string res = vc.encrypt(text);
			CPTB->Text = marshal_as<String^, string>(res);
		}
	private: 
		System::Void DecryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
			string text = marshal_as<string, String^>(PCTB->Text);
			string key = marshal_as<string, String^>(KeyTB->Text);
			if (!checkKey(key)) { CPTB->Text = marshal_as<String^, string>("ERROR: Invalid Key!"); return; }

			VigenereCipher vc(key); string res = vc.decrypt(text);
			CPTB->Text = marshal_as<String^, string>(res);
		}
	};
}
