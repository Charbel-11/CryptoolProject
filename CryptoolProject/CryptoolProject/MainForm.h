#pragma once
#include "AdvancedEncryptionStandard.h";
#include "ClassicalEncryptionTechniques.h";
#include "DataEncryptionStandard.h";
#include "NumberTheory.h";
#include "PolynomialArithmetic.h";

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CryptoolLabel;
	protected:
	private: System::Windows::Forms::Button^ CETButton;
	private: System::Windows::Forms::Button^ AESButton;
	private: System::Windows::Forms::Button^ PAButton;

	private: System::Windows::Forms::Button^ DESButton;
	private: System::Windows::Forms::Button^ NTButton;

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
			this->CryptoolLabel = (gcnew System::Windows::Forms::Label());
			this->CETButton = (gcnew System::Windows::Forms::Button());
			this->AESButton = (gcnew System::Windows::Forms::Button());
			this->PAButton = (gcnew System::Windows::Forms::Button());
			this->DESButton = (gcnew System::Windows::Forms::Button());
			this->NTButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CryptoolLabel
			// 
			this->CryptoolLabel->AutoSize = true;
			this->CryptoolLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->CryptoolLabel->Location = System::Drawing::Point(240, 9);
			this->CryptoolLabel->Name = L"CryptoolLabel";
			this->CryptoolLabel->Size = System::Drawing::Size(212, 58);
			this->CryptoolLabel->TabIndex = 0;
			this->CryptoolLabel->Text = L"Cryptool";
			// 
			// CETButton
			// 
			this->CETButton->Location = System::Drawing::Point(12, 107);
			this->CETButton->Name = L"CETButton";
			this->CETButton->Size = System::Drawing::Size(287, 36);
			this->CETButton->TabIndex = 1;
			this->CETButton->Text = L"Classical Encryption Techniques";
			this->CETButton->UseVisualStyleBackColor = true;
			this->CETButton->Click += gcnew System::EventHandler(this, &MainForm::CETButton_Click);
			// 
			// AESButton
			// 
			this->AESButton->Location = System::Drawing::Point(381, 178);
			this->AESButton->Name = L"AESButton";
			this->AESButton->Size = System::Drawing::Size(287, 36);
			this->AESButton->TabIndex = 2;
			this->AESButton->Text = L"Advanced Encryption Standard (AES)";
			this->AESButton->UseVisualStyleBackColor = true;
			// 
			// PAButton
			// 
			this->PAButton->Location = System::Drawing::Point(12, 178);
			this->PAButton->Name = L"PAButton";
			this->PAButton->Size = System::Drawing::Size(287, 36);
			this->PAButton->TabIndex = 3;
			this->PAButton->Text = L"Polynomial Arithmetic";
			this->PAButton->UseVisualStyleBackColor = true;
			// 
			// DESButton
			// 
			this->DESButton->Location = System::Drawing::Point(381, 107);
			this->DESButton->Name = L"DESButton";
			this->DESButton->Size = System::Drawing::Size(287, 36);
			this->DESButton->TabIndex = 4;
			this->DESButton->Text = L"Data Encryption Standard (DES)";
			this->DESButton->UseVisualStyleBackColor = true;
			// 
			// NTButton
			// 
			this->NTButton->Location = System::Drawing::Point(202, 248);
			this->NTButton->Name = L"NTButton";
			this->NTButton->Size = System::Drawing::Size(287, 36);
			this->NTButton->TabIndex = 5;
			this->NTButton->Text = L"Number Theory";
			this->NTButton->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 371);
			this->Controls->Add(this->NTButton);
			this->Controls->Add(this->DESButton);
			this->Controls->Add(this->PAButton);
			this->Controls->Add(this->AESButton);
			this->Controls->Add(this->CETButton);
			this->Controls->Add(this->CryptoolLabel);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CETButton_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
