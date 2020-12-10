#pragma once
#include "PlayfairCipher.h"

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlayfairCipherGUI
	/// </summary>
	public ref class PlayfairCipherGUI : public System::Windows::Forms::Form {
		Form^ parent;
		bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }
		bool isLower(char& c) { return c >= 'a' && c <= 'z'; }

		bool checkKey(string& key) {
			for (char& c : key) if (!isLower(c) && !isUpper(c)) { return false; }
			return true;
		}
	public:
		PlayfairCipherGUI(Form^ _parent)
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
		~PlayfairCipherGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ DecryptButton;
	protected:
	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Button^ EncryptButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ KeyLabel;
	private: System::Windows::Forms::TextBox^ KeyTB;
	private: System::Windows::Forms::Label^ CPLabel;
	private: System::Windows::Forms::TextBox^ CPTB;
	private: System::Windows::Forms::TextBox^ PCTB;
	private: System::Windows::Forms::Label^ PCLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ PMTB;
	private: System::Windows::Forms::Label^ label3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PMTB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// DecryptButton
			// 
			this->DecryptButton->Location = System::Drawing::Point(377, 468);
			this->DecryptButton->Name = L"DecryptButton";
			this->DecryptButton->Size = System::Drawing::Size(110, 29);
			this->DecryptButton->TabIndex = 32;
			this->DecryptButton->Text = L"Decrypt";
			this->DecryptButton->UseVisualStyleBackColor = true;
			this->DecryptButton->Click += gcnew System::EventHandler(this, &PlayfairCipherGUI::DecryptButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(514, 468);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(110, 29);
			this->BackButton->TabIndex = 31;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &PlayfairCipherGUI::BackButton_Click);
			// 
			// EncryptButton
			// 
			this->EncryptButton->Location = System::Drawing::Point(238, 468);
			this->EncryptButton->Name = L"EncryptButton";
			this->EncryptButton->Size = System::Drawing::Size(110, 29);
			this->EncryptButton->TabIndex = 30;
			this->EncryptButton->Text = L"Encrpyt";
			this->EncryptButton->UseVisualStyleBackColor = true;
			this->EncryptButton->Click += gcnew System::EventHandler(this, &PlayfairCipherGUI::EncryptButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(235, 238);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(382, 17);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Must be a single word consisting of english characters only.";
			// 
			// KeyLabel
			// 
			this->KeyLabel->AutoSize = true;
			this->KeyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->KeyLabel->Location = System::Drawing::Point(35, 215);
			this->KeyLabel->Name = L"KeyLabel";
			this->KeyLabel->Size = System::Drawing::Size(37, 20);
			this->KeyLabel->TabIndex = 28;
			this->KeyLabel->Text = L"Key";
			// 
			// KeyTB
			// 
			this->KeyTB->Location = System::Drawing::Point(238, 213);
			this->KeyTB->Name = L"KeyTB";
			this->KeyTB->Size = System::Drawing::Size(386, 22);
			this->KeyTB->TabIndex = 27;
			// 
			// CPLabel
			// 
			this->CPLabel->AutoSize = true;
			this->CPLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CPLabel->Location = System::Drawing::Point(35, 291);
			this->CPLabel->Name = L"CPLabel";
			this->CPLabel->Size = System::Drawing::Size(154, 20);
			this->CPLabel->TabIndex = 26;
			this->CPLabel->Text = L"Ciphertext/Plaintext";
			// 
			// CPTB
			// 
			this->CPTB->Location = System::Drawing::Point(238, 291);
			this->CPTB->Name = L"CPTB";
			this->CPTB->ReadOnly = true;
			this->CPTB->Size = System::Drawing::Size(386, 22);
			this->CPTB->TabIndex = 25;
			// 
			// PCTB
			// 
			this->PCTB->Location = System::Drawing::Point(238, 135);
			this->PCTB->Name = L"PCTB";
			this->PCTB->Size = System::Drawing::Size(386, 22);
			this->PCTB->TabIndex = 24;
			// 
			// PCLabel
			// 
			this->PCLabel->AutoSize = true;
			this->PCLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PCLabel->Location = System::Drawing::Point(35, 135);
			this->PCLabel->Name = L"PCLabel";
			this->PCLabel->Size = System::Drawing::Size(154, 20);
			this->PCLabel->TabIndex = 23;
			this->PCLabel->Text = L"Plaintext/Ciphertext";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(149, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(387, 58);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Vigenère Cipher";
			// 
			// PMTB
			// 
			this->PMTB->Location = System::Drawing::Point(238, 354);
			this->PMTB->Multiline = true;
			this->PMTB->Name = L"PMTB";
			this->PMTB->ReadOnly = true;
			this->PMTB->Size = System::Drawing::Size(386, 108);
			this->PMTB->TabIndex = 33;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(35, 354);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 20);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Playfair Matrix";
			// 
			// PlayfairCipherGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 525);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PMTB);
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
			this->Name = L"PlayfairCipherGUI";
			this->Text = L"PlayfairCipherGUI";
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

			PlayfairCipher pc(key); string res = pc.encrypt(text);
			PMTB->Text = marshal_as<String^, string>(pc.getKey());
			CPTB->Text = marshal_as<String^, string>(res);
		}
	private: 
		System::Void DecryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
			string text = marshal_as<string, String^>(PCTB->Text);
			string key = marshal_as<string, String^>(KeyTB->Text);
			if (!checkKey(key)) { CPTB->Text = marshal_as<String^, string>("ERROR: Invalid Key!"); return; }

			PlayfairCipher pc(key); string res = pc.decrypt(text);
			PMTB->Text = marshal_as<String^, string>(pc.getKey());
			CPTB->Text = marshal_as<String^, string>(res);
		}
	};
}
