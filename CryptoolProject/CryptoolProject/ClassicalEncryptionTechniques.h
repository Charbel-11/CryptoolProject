#pragma once
#include "AffineCipherGUI.h"
#include "MonoAlphabeticCipherGUI.h"
#include "ExtendedGCDGUI.h"
#include "PlayfairCipherGUI.h"
#include "VigenereCipherGUI.h"
#include "HillCipherGUI.h"

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClassicalEncryptionTechniques
	/// </summary>
	public ref class ClassicalEncryptionTechniques : public System::Windows::Forms::Form {
		Form^ parent;
	public:
		ClassicalEncryptionTechniques(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClassicalEncryptionTechniques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ACButton;
	private: System::Windows::Forms::Button^ PCButton;
	private: System::Windows::Forms::Button^ HCButton;
	private: System::Windows::Forms::Button^ EEAButton;




	private: System::Windows::Forms::Button^ MACButton;
	private: System::Windows::Forms::Button^ VCButton;
	private: System::Windows::Forms::Button^ BackButton;


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
			this->ACButton = (gcnew System::Windows::Forms::Button());
			this->PCButton = (gcnew System::Windows::Forms::Button());
			this->HCButton = (gcnew System::Windows::Forms::Button());
			this->EEAButton = (gcnew System::Windows::Forms::Button());
			this->MACButton = (gcnew System::Windows::Forms::Button());
			this->VCButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(70, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(748, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Classical Encryption Techniques";
			// 
			// ACButton
			// 
			this->ACButton->Location = System::Drawing::Point(80, 121);
			this->ACButton->Name = L"ACButton";
			this->ACButton->Size = System::Drawing::Size(290, 33);
			this->ACButton->TabIndex = 1;
			this->ACButton->Text = L"Affine Cipher";
			this->ACButton->UseVisualStyleBackColor = true;
			this->ACButton->Click += gcnew System::EventHandler(this, &ClassicalEncryptionTechniques::ACButton_Click);
			// 
			// PCButton
			// 
			this->PCButton->Location = System::Drawing::Point(510, 192);
			this->PCButton->Name = L"PCButton";
			this->PCButton->Size = System::Drawing::Size(290, 33);
			this->PCButton->TabIndex = 4;
			this->PCButton->Text = L"Playfair Cipher";
			this->PCButton->UseVisualStyleBackColor = true;
			this->PCButton->Click += gcnew System::EventHandler(this, &ClassicalEncryptionTechniques::PCButton_Click);
			// 
			// HCButton
			// 
			this->HCButton->Location = System::Drawing::Point(80, 262);
			this->HCButton->Name = L"HCButton";
			this->HCButton->Size = System::Drawing::Size(290, 33);
			this->HCButton->TabIndex = 5;
			this->HCButton->Text = L"Hill Cipher";
			this->HCButton->UseVisualStyleBackColor = true;
			this->HCButton->Click += gcnew System::EventHandler(this, &ClassicalEncryptionTechniques::HCButton_Click);
			// 
			// EEAButton
			// 
			this->EEAButton->Location = System::Drawing::Point(510, 262);
			this->EEAButton->Name = L"EEAButton";
			this->EEAButton->Size = System::Drawing::Size(290, 33);
			this->EEAButton->TabIndex = 6;
			this->EEAButton->Text = L"Extended Euclidean Algorithm";
			this->EEAButton->UseVisualStyleBackColor = true;
			this->EEAButton->Click += gcnew System::EventHandler(this, &ClassicalEncryptionTechniques::EEAButton_Click);
			// 
			// MACButton
			// 
			this->MACButton->Location = System::Drawing::Point(510, 121);
			this->MACButton->Name = L"MACButton";
			this->MACButton->Size = System::Drawing::Size(290, 33);
			this->MACButton->TabIndex = 2;
			this->MACButton->Text = L"Mono-Alphabetic Cipher";
			this->MACButton->UseVisualStyleBackColor = true;
			this->MACButton->Click += gcnew System::EventHandler(this, &ClassicalEncryptionTechniques::MACButton_Click);
			// 
			// VCButton
			// 
			this->VCButton->Location = System::Drawing::Point(80, 192);
			this->VCButton->Name = L"VCButton";
			this->VCButton->Size = System::Drawing::Size(290, 33);
			this->VCButton->TabIndex = 3;
			this->VCButton->Text = L"Vigenere Cipher";
			this->VCButton->UseVisualStyleBackColor = true;
			this->VCButton->Click += gcnew System::EventHandler(this, &ClassicalEncryptionTechniques::VCButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(304, 333);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(290, 33);
			this->BackButton->TabIndex = 7;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &ClassicalEncryptionTechniques::BackButton_Click);
			// 
			// ClassicalEncryptionTechniques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 426);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->VCButton);
			this->Controls->Add(this->MACButton);
			this->Controls->Add(this->EEAButton);
			this->Controls->Add(this->HCButton);
			this->Controls->Add(this->PCButton);
			this->Controls->Add(this->ACButton);
			this->Controls->Add(this->label1);
			this->Name = L"ClassicalEncryptionTechniques";
			this->Text = L"ClassicalEncryptionTechniques";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void ACButton_Click(System::Object^ sender, System::EventArgs^ e) {
			AffineCipherGUI^ ACForm = gcnew AffineCipherGUI(this);
			ACForm->Show(); this->Hide();
		}
	private: 
		System::Void MACButton_Click(System::Object^ sender, System::EventArgs^ e) {
			MonoAlphabeticCipherGUI^ MACForm = gcnew MonoAlphabeticCipherGUI(this);
			MACForm->Show(); this->Hide();
		}
	private: 
		System::Void VCButton_Click(System::Object^ sender, System::EventArgs^ e) {
			VigenereCipherGUI^ VCForm = gcnew VigenereCipherGUI(this);
			VCForm->Show(); this->Hide();
		}
	private: 
		System::Void PCButton_Click(System::Object^ sender, System::EventArgs^ e) {
			PlayfairCipherGUI^ PCForm = gcnew PlayfairCipherGUI(this);
			PCForm->Show(); this->Hide();
		}
	private: 
		System::Void EEAButton_Click(System::Object^ sender, System::EventArgs^ e) {
			ExtendedGCDGUI^ EGForm = gcnew ExtendedGCDGUI(this);
			EGForm->Show(); this->Hide();
		}
	private: 
		System::Void HCButton_Click(System::Object^ sender, System::EventArgs^ e) {
			HillCipherGUI^ HCForm = gcnew HillCipherGUI(this);
			HCForm->Show(); this->Hide();
		}
	private:
		System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
			parent->Show(); this->Close();
		}
	};
}
