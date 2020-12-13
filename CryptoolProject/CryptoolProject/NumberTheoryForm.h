#pragma once
#include "MillerRabin.h"
#include "Totient.h"
#include "fastexp.h"
#include "MillerRabin.h"
#include "ChineseRemainder.h"
#include "PrimeFactorization.h"

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NumberTheoryForm
	/// </summary>
	public ref class NumberTheoryForm : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		NumberTheoryForm(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NumberTheoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ FEButton;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ CRTButton;
	private: System::Windows::Forms::Button^ PFButton;


	private: System::Windows::Forms::Button^ TFButton;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;


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
			this->FEButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CRTButton = (gcnew System::Windows::Forms::Button());
			this->PFButton = (gcnew System::Windows::Forms::Button());
			this->TFButton = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// FEButton
			// 
			this->FEButton->Location = System::Drawing::Point(47, 135);
			this->FEButton->Name = L"FEButton";
			this->FEButton->Size = System::Drawing::Size(265, 55);
			this->FEButton->TabIndex = 0;
			this->FEButton->Text = L"Fast Exponentiation";
			this->FEButton->UseVisualStyleBackColor = true;
			this->FEButton->Click += gcnew System::EventHandler(this, &NumberTheoryForm::FEButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(206, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Number Theory";
			// 
			// CRTButton
			// 
			this->CRTButton->Location = System::Drawing::Point(390, 135);
			this->CRTButton->Name = L"CRTButton";
			this->CRTButton->Size = System::Drawing::Size(265, 55);
			this->CRTButton->TabIndex = 2;
			this->CRTButton->Text = L"Chinese Remainder Theorem";
			this->CRTButton->UseVisualStyleBackColor = true;
			this->CRTButton->Click += gcnew System::EventHandler(this, &NumberTheoryForm::CRTButton_Click);
			// 
			// PFButton
			// 
			this->PFButton->Location = System::Drawing::Point(47, 292);
			this->PFButton->Name = L"PFButton";
			this->PFButton->Size = System::Drawing::Size(265, 55);
			this->PFButton->TabIndex = 3;
			this->PFButton->Text = L"Prime Factorization";
			this->PFButton->UseVisualStyleBackColor = true;
			this->PFButton->Click += gcnew System::EventHandler(this, &NumberTheoryForm::PFButton_Click);
			// 
			// TFButton
			// 
			this->TFButton->Location = System::Drawing::Point(390, 292);
			this->TFButton->Name = L"TFButton";
			this->TFButton->Size = System::Drawing::Size(265, 55);
			this->TFButton->TabIndex = 4;
			this->TFButton->Text = L"Totient Function";
			this->TFButton->UseVisualStyleBackColor = true;
			this->TFButton->Click += gcnew System::EventHandler(this, &NumberTheoryForm::TFButton_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(214, 397);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(265, 55);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &NumberTheoryForm::button5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(224, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(265, 55);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Miller Rabin";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NumberTheoryForm::button1_Click);
			// 
			// NumberTheoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 484);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->TFButton);
			this->Controls->Add(this->PFButton);
			this->Controls->Add(this->CRTButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FEButton);
			this->Name = L"NumberTheoryForm";
			this->Text = L"NumberTheoryForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FEButton_Click(System::Object^ sender, System::EventArgs^ e) {
		fastexp^ nF = gcnew fastexp(this);
		nF->Show(); this->Hide();
	}
	private: System::Void CRTButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ChineseRemainder^ nF = gcnew ChineseRemainder(this);
		nF->Show(); this->Hide();
	}
	private: System::Void TFButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Totient^ nF = gcnew Totient(this);
		nF->Show(); this->Hide();
	}
	private: System::Void PFButton_Click(System::Object^ sender, System::EventArgs^ e) {
		PrimeFactorization^ nF = gcnew PrimeFactorization(this);
		nF->Show(); this->Hide();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show(); this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MillerRabin^ nF = gcnew MillerRabin(this);
		nF->Show(); this->Hide();
	}
};
}
