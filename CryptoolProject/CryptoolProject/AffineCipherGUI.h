#pragma once
#include "AffineCipher.h"
#include <string>
#include <msclr/marshal_cppstd.h>

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
		bool isUpper(char& c) { return c >= 'A' && c <= 'Z'; }
		bool isLower(char& c) { return c >= 'a' && c <= 'z'; }

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
	private: System::Windows::Forms::Label^ PCLabel;
	protected:

	protected:
	private: System::Windows::Forms::Label^ AffineCipherLabel;
	private: System::Windows::Forms::TextBox^ PCTB;

	private: System::Windows::Forms::ComboBox^ ACB;

	private: System::Windows::Forms::Label^ ALabel;
	private: System::Windows::Forms::ComboBox^ BCB;

	private: System::Windows::Forms::Label^ BLabel;
	private: System::Windows::Forms::TextBox^ CPTB;

	private: System::Windows::Forms::Label^ CPLabel;



	private: System::Windows::Forms::Button^ EncryptButton;
	private: System::Windows::Forms::Label^ Description1Label;


	private: System::Windows::Forms::Button^ DecryptButton;
	private: System::Windows::Forms::Label^ Description2Label;

	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Button^ Decrypt2Button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ PTB;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ TCB;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ ECB;
	private: System::Windows::Forms::TextBox^ CTB;


	private: System::Windows::Forms::Label^ label6;

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
			this->PCLabel = (gcnew System::Windows::Forms::Label());
			this->AffineCipherLabel = (gcnew System::Windows::Forms::Label());
			this->PCTB = (gcnew System::Windows::Forms::TextBox());
			this->ACB = (gcnew System::Windows::Forms::ComboBox());
			this->ALabel = (gcnew System::Windows::Forms::Label());
			this->BCB = (gcnew System::Windows::Forms::ComboBox());
			this->BLabel = (gcnew System::Windows::Forms::Label());
			this->CPTB = (gcnew System::Windows::Forms::TextBox());
			this->CPLabel = (gcnew System::Windows::Forms::Label());
			this->EncryptButton = (gcnew System::Windows::Forms::Button());
			this->Description1Label = (gcnew System::Windows::Forms::Label());
			this->DecryptButton = (gcnew System::Windows::Forms::Button());
			this->Description2Label = (gcnew System::Windows::Forms::Label());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->Decrypt2Button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TCB = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ECB = (gcnew System::Windows::Forms::ComboBox());
			this->CTB = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// PCLabel
			// 
			this->PCLabel->AutoSize = true;
			this->PCLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->PCLabel->Location = System::Drawing::Point(23, 127);
			this->PCLabel->Name = L"PCLabel";
			this->PCLabel->Size = System::Drawing::Size(154, 20);
			this->PCLabel->TabIndex = 0;
			this->PCLabel->Text = L"Plaintext/Ciphertext";
			// 
			// AffineCipherLabel
			// 
			this->AffineCipherLabel->AutoSize = true;
			this->AffineCipherLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->AffineCipherLabel->Location = System::Drawing::Point(207, 9);
			this->AffineCipherLabel->Name = L"AffineCipherLabel";
			this->AffineCipherLabel->Size = System::Drawing::Size(314, 58);
			this->AffineCipherLabel->TabIndex = 1;
			this->AffineCipherLabel->Text = L"Affine Cipher";
			// 
			// PCTB
			// 
			this->PCTB->Location = System::Drawing::Point(233, 127);
			this->PCTB->Name = L"PCTB";
			this->PCTB->Size = System::Drawing::Size(408, 22);
			this->PCTB->TabIndex = 2;
			// 
			// ACB
			// 
			this->ACB->FormattingEnabled = true;
			this->ACB->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
			});
			this->ACB->Location = System::Drawing::Point(253, 170);
			this->ACB->Name = L"ACB";
			this->ACB->Size = System::Drawing::Size(88, 24);
			this->ACB->TabIndex = 3;
			// 
			// ALabel
			// 
			this->ALabel->AutoSize = true;
			this->ALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ALabel->Location = System::Drawing::Point(229, 174);
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
			this->BCB->Location = System::Drawing::Point(445, 170);
			this->BCB->Name = L"BCB";
			this->BCB->Size = System::Drawing::Size(88, 24);
			this->BCB->TabIndex = 5;
			// 
			// BLabel
			// 
			this->BLabel->AutoSize = true;
			this->BLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BLabel->Location = System::Drawing::Point(418, 174);
			this->BLabel->Name = L"BLabel";
			this->BLabel->Size = System::Drawing::Size(21, 20);
			this->BLabel->TabIndex = 6;
			this->BLabel->Text = L"B";
			// 
			// CPTB
			// 
			this->CPTB->Location = System::Drawing::Point(233, 233);
			this->CPTB->Name = L"CPTB";
			this->CPTB->ReadOnly = true;
			this->CPTB->Size = System::Drawing::Size(408, 22);
			this->CPTB->TabIndex = 7;
			// 
			// CPLabel
			// 
			this->CPLabel->AutoSize = true;
			this->CPLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->CPLabel->Location = System::Drawing::Point(23, 235);
			this->CPLabel->Name = L"CPLabel";
			this->CPLabel->Size = System::Drawing::Size(154, 20);
			this->CPLabel->TabIndex = 8;
			this->CPLabel->Text = L"Ciphertext/Plaintext";
			// 
			// EncryptButton
			// 
			this->EncryptButton->Location = System::Drawing::Point(233, 276);
			this->EncryptButton->Name = L"EncryptButton";
			this->EncryptButton->Size = System::Drawing::Size(132, 33);
			this->EncryptButton->TabIndex = 9;
			this->EncryptButton->Text = L"Encrypt";
			this->EncryptButton->UseVisualStyleBackColor = true;
			this->EncryptButton->Click += gcnew System::EventHandler(this, &AffineCipherGUI::EncryptButton_Click);
			// 
			// Description1Label
			// 
			this->Description1Label->AutoSize = true;
			this->Description1Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Description1Label->Location = System::Drawing::Point(176, 86);
			this->Description1Label->Name = L"Description1Label";
			this->Description1Label->Size = System::Drawing::Size(375, 25);
			this->Description1Label->TabIndex = 11;
			this->Description1Label->Text = L"Encrypts/Decrypts according to Y = AX+B";
			// 
			// DecryptButton
			// 
			this->DecryptButton->Location = System::Drawing::Point(511, 276);
			this->DecryptButton->Name = L"DecryptButton";
			this->DecryptButton->Size = System::Drawing::Size(130, 33);
			this->DecryptButton->TabIndex = 12;
			this->DecryptButton->Text = L"Decrypt";
			this->DecryptButton->UseVisualStyleBackColor = true;
			this->DecryptButton->Click += gcnew System::EventHandler(this, &AffineCipherGUI::DecryptButton_Click);
			// 
			// Description2Label
			// 
			this->Description2Label->AutoSize = true;
			this->Description2Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Description2Label->Location = System::Drawing::Point(74, 372);
			this->Description2Label->Name = L"Description2Label";
			this->Description2Label->Size = System::Drawing::Size(579, 25);
			this->Description2Label->TabIndex = 13;
			this->Description2Label->Text = L"Decrypts given most two frequent letters in the encrypted alphabet";
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(511, 569);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(130, 33);
			this->BackButton->TabIndex = 23;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &AffineCipherGUI::BackButton_Click);
			// 
			// Decrypt2Button
			// 
			this->Decrypt2Button->Location = System::Drawing::Point(233, 569);
			this->Decrypt2Button->Name = L"Decrypt2Button";
			this->Decrypt2Button->Size = System::Drawing::Size(132, 33);
			this->Decrypt2Button->TabIndex = 22;
			this->Decrypt2Button->Text = L"Decrypt";
			this->Decrypt2Button->UseVisualStyleBackColor = true;
			this->Decrypt2Button->Click += gcnew System::EventHandler(this, &AffineCipherGUI::Decrypt2Button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(23, 528);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 20);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Plaintext";
			// 
			// PTB
			// 
			this->PTB->Location = System::Drawing::Point(233, 526);
			this->PTB->Name = L"PTB";
			this->PTB->ReadOnly = true;
			this->PTB->Size = System::Drawing::Size(408, 22);
			this->PTB->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->Location = System::Drawing::Point(418, 467);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 20);
			this->label4->TabIndex = 19;
			this->label4->Text = L"T";
			// 
			// TCB
			// 
			this->TCB->FormattingEnabled = true;
			this->TCB->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I",
					L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"
			});
			this->TCB->Location = System::Drawing::Point(445, 463);
			this->TCB->Name = L"TCB";
			this->TCB->Size = System::Drawing::Size(88, 24);
			this->TCB->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label5->Location = System::Drawing::Point(229, 467);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 20);
			this->label5->TabIndex = 17;
			this->label5->Text = L"E";
			// 
			// ECB
			// 
			this->ECB->FormattingEnabled = true;
			this->ECB->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I",
					L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"
			});
			this->ECB->Location = System::Drawing::Point(253, 463);
			this->ECB->Name = L"ECB";
			this->ECB->Size = System::Drawing::Size(88, 24);
			this->ECB->TabIndex = 16;
			// 
			// CTB
			// 
			this->CTB->Location = System::Drawing::Point(233, 420);
			this->CTB->Name = L"CTB";
			this->CTB->Size = System::Drawing::Size(408, 22);
			this->CTB->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(23, 420);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Ciphertext";
			// 
			// AffineCipherGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 640);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->Decrypt2Button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PTB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TCB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->ECB);
			this->Controls->Add(this->CTB);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Description2Label);
			this->Controls->Add(this->DecryptButton);
			this->Controls->Add(this->Description1Label);
			this->Controls->Add(this->EncryptButton);
			this->Controls->Add(this->CPLabel);
			this->Controls->Add(this->CPTB);
			this->Controls->Add(this->BLabel);
			this->Controls->Add(this->BCB);
			this->Controls->Add(this->ALabel);
			this->Controls->Add(this->ACB);
			this->Controls->Add(this->PCTB);
			this->Controls->Add(this->AffineCipherLabel);
			this->Controls->Add(this->PCLabel);
			this->Name = L"AffineCipherGUI";
			this->Text = L"AffineCipherGUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void EncryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
			string text = marshal_as<string, String^>(PCTB->Text);
			string a = marshal_as<string, String^>(ACB->Text);
			string b = marshal_as<string, String^>(BCB->Text);
			if (a.empty() || b.empty()) { CPTB->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
			int A = stoi(a), B = stoi(b);

			AffineCipher ac(A, B); string res = ac.encrypt(text);
			CPTB->Text = marshal_as<String^, string>(res);
		}
	private: 
		System::Void DecryptButton_Click(System::Object^ sender, System::EventArgs^ e) {
			string text = marshal_as<string, String^>(PCTB->Text);
			string a = marshal_as<string, String^>(ACB->Text);
			string b = marshal_as<string, String^>(BCB->Text);
			if(a.empty() || b.empty()){ CPTB->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
			int A = stoi(a), B = stoi(b);

			AffineCipher ac(A, B);
			if (!ac.canDecrypt()) { CPTB->Text = marshal_as<String^, string>("ERROR: Irreversible Cipher!"); return; }
			string res = ac.decrypt(text);
			CPTB->Text = marshal_as<String^, string>(res);
		}
	private: 
		System::Void Decrypt2Button_Click(System::Object^ sender, System::EventArgs^ e) {
			string text = marshal_as<string, String^>(CTB->Text);
			string a = marshal_as<string, String^>(ECB->Text);
			string b = marshal_as<string, String^>(TCB->Text);
			if (a.empty() || b.empty()) { PTB->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
			char E = a[0], T = b[0];
			if (E == T) { PTB->Text = marshal_as<String^, string>("ERROR: Characters must be distinct!"); return; }

			AffineCipher ac(E, T); 
			if (!ac.canDecrypt()) { PTB->Text = marshal_as<String^, string>("ERROR: Irreversible Cipher!"); return; }
			string res = ac.decrypt(text);
			PTB->Text = marshal_as<String^, string>(res);
		}
	private: 
		System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
			parent->Show(); this->Close();
		}
	};
}
