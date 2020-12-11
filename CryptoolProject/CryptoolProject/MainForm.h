#pragma once
#include "ClassicalEncryptionTechniques.h"
#include "PolyArithmetic.h"

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
			this->CryptoolLabel->Location = System::Drawing::Point(270, 11);
			this->CryptoolLabel->Name = L"CryptoolLabel";
			this->CryptoolLabel->Size = System::Drawing::Size(253, 69);
			this->CryptoolLabel->TabIndex = 0;
			this->CryptoolLabel->Text = L"Cryptool";
			// 
			// CETButton
			// 
			this->CETButton->Location = System::Drawing::Point(14, 134);
			this->CETButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->CETButton->Name = L"CETButton";
			this->CETButton->Size = System::Drawing::Size(323, 45);
			this->CETButton->TabIndex = 1;
			this->CETButton->Text = L"Classical Encryption Techniques";
			this->CETButton->UseVisualStyleBackColor = true;
			this->CETButton->Click += gcnew System::EventHandler(this, &MainForm::CETButton_Click);
			// 
			// AESButton
			// 
			this->AESButton->Location = System::Drawing::Point(429, 222);
			this->AESButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->AESButton->Name = L"AESButton";
			this->AESButton->Size = System::Drawing::Size(323, 45);
			this->AESButton->TabIndex = 4;
			this->AESButton->Text = L"Advanced Encryption Standard (AES)";
			this->AESButton->UseVisualStyleBackColor = true;
			// 
			// PAButton
			// 
			this->PAButton->Location = System::Drawing::Point(14, 222);
			this->PAButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->PAButton->Name = L"PAButton";
			this->PAButton->Size = System::Drawing::Size(323, 45);
			this->PAButton->TabIndex = 3;
			this->PAButton->Text = L"Polynomial Arithmetic";
			this->PAButton->UseVisualStyleBackColor = true;
			this->PAButton->Click += gcnew System::EventHandler(this, &MainForm::PAButton_Click);
			// 
			// DESButton
			// 
			this->DESButton->Location = System::Drawing::Point(429, 134);
			this->DESButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->DESButton->Name = L"DESButton";
			this->DESButton->Size = System::Drawing::Size(323, 45);
			this->DESButton->TabIndex = 2;
			this->DESButton->Text = L"Data Encryption Standard (DES)";
			this->DESButton->UseVisualStyleBackColor = true;
			// 
			// NTButton
			// 
			this->NTButton->Location = System::Drawing::Point(227, 310);
			this->NTButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NTButton->Name = L"NTButton";
			this->NTButton->Size = System::Drawing::Size(323, 45);
			this->NTButton->TabIndex = 5;
			this->NTButton->Text = L"Number Theory";
			this->NTButton->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 464);
			this->Controls->Add(this->NTButton);
			this->Controls->Add(this->DESButton);
			this->Controls->Add(this->PAButton);
			this->Controls->Add(this->AESButton);
			this->Controls->Add(this->CETButton);
			this->Controls->Add(this->CryptoolLabel);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CETButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClassicalEncryptionTechniques ^CETForm = gcnew ClassicalEncryptionTechniques(this);
		CETForm->Show(); this->Hide();
	}
	private: System::Void PAButton_Click(System::Object^ sender, System::EventArgs^ e) {
		PolyArithmetic ^PolyForm = gcnew PolyArithmetic(this);
		PolyForm->Show(); this->Hide();
	}
};
}
