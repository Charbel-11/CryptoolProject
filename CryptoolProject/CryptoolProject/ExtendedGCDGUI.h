#pragma once
#include "ExtendedGCD.h"
#include <string>

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExtendedGCDGUI
	/// </summary>
	public ref class ExtendedGCDGUI : public System::Windows::Forms::Form {
		Form^ parent;
	public:
		ExtendedGCDGUI(Form^ _parent)
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
		~ExtendedGCDGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ EEALabel;
	private: System::Windows::Forms::Label^ DescriptionLabel;
	private: System::Windows::Forms::TextBox^ ATB;
	private: System::Windows::Forms::Label^ ALabel;
	private: System::Windows::Forms::Label^ BLabel;
	private: System::Windows::Forms::TextBox^ BTB;
	private: System::Windows::Forms::Button^ ComputeButton;
	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Label^ YLabel;
	private: System::Windows::Forms::TextBox^ YTB;


	private: System::Windows::Forms::Label^ XLabel;
	private: System::Windows::Forms::TextBox^ XTB;
	private: System::Windows::Forms::Label^ ErrorLabel;
	private: System::Windows::Forms::Label^ GCDLabel;

	private: System::Windows::Forms::TextBox^ GCDTB;
	protected:

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
			this->EEALabel = (gcnew System::Windows::Forms::Label());
			this->DescriptionLabel = (gcnew System::Windows::Forms::Label());
			this->ATB = (gcnew System::Windows::Forms::TextBox());
			this->ALabel = (gcnew System::Windows::Forms::Label());
			this->BLabel = (gcnew System::Windows::Forms::Label());
			this->BTB = (gcnew System::Windows::Forms::TextBox());
			this->ComputeButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->YLabel = (gcnew System::Windows::Forms::Label());
			this->YTB = (gcnew System::Windows::Forms::TextBox());
			this->XLabel = (gcnew System::Windows::Forms::Label());
			this->XTB = (gcnew System::Windows::Forms::TextBox());
			this->ErrorLabel = (gcnew System::Windows::Forms::Label());
			this->GCDLabel = (gcnew System::Windows::Forms::Label());
			this->GCDTB = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// EEALabel
			// 
			this->EEALabel->AutoSize = true;
			this->EEALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->EEALabel->Location = System::Drawing::Point(12, 18);
			this->EEALabel->Name = L"EEALabel";
			this->EEALabel->Size = System::Drawing::Size(695, 58);
			this->EEALabel->TabIndex = 0;
			this->EEALabel->Text = L"Extended Euclidean Algorithm";
			// 
			// DescriptionLabel
			// 
			this->DescriptionLabel->AutoSize = true;
			this->DescriptionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->DescriptionLabel->Location = System::Drawing::Point(155, 76);
			this->DescriptionLabel->Name = L"DescriptionLabel";
			this->DescriptionLabel->Size = System::Drawing::Size(405, 25);
			this->DescriptionLabel->TabIndex = 1;
			this->DescriptionLabel->Text = L"Finds X and Y such that gcd(A, B) = XA + YB";
			// 
			// ATB
			// 
			this->ATB->Location = System::Drawing::Point(53, 132);
			this->ATB->Name = L"ATB";
			this->ATB->Size = System::Drawing::Size(102, 22);
			this->ATB->TabIndex = 2;
			// 
			// ALabel
			// 
			this->ALabel->AutoSize = true;
			this->ALabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ALabel->Location = System::Drawing::Point(18, 134);
			this->ALabel->Name = L"ALabel";
			this->ALabel->Size = System::Drawing::Size(20, 20);
			this->ALabel->TabIndex = 3;
			this->ALabel->Text = L"A";
			// 
			// BLabel
			// 
			this->BLabel->AutoSize = true;
			this->BLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->BLabel->Location = System::Drawing::Point(203, 134);
			this->BLabel->Name = L"BLabel";
			this->BLabel->Size = System::Drawing::Size(21, 20);
			this->BLabel->TabIndex = 5;
			this->BLabel->Text = L"B";
			// 
			// BTB
			// 
			this->BTB->Location = System::Drawing::Point(238, 132);
			this->BTB->Name = L"BTB";
			this->BTB->Size = System::Drawing::Size(102, 22);
			this->BTB->TabIndex = 4;
			// 
			// ComputeButton
			// 
			this->ComputeButton->Location = System::Drawing::Point(400, 131);
			this->ComputeButton->Name = L"ComputeButton";
			this->ComputeButton->Size = System::Drawing::Size(102, 23);
			this->ComputeButton->TabIndex = 6;
			this->ComputeButton->Text = L"Compute";
			this->ComputeButton->UseVisualStyleBackColor = true;
			this->ComputeButton->Click += gcnew System::EventHandler(this, &ExtendedGCDGUI::ComputeButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(553, 131);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(102, 23);
			this->BackButton->TabIndex = 7;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &ExtendedGCDGUI::BackButton_Click);
			// 
			// YLabel
			// 
			this->YLabel->AutoSize = true;
			this->YLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->YLabel->Location = System::Drawing::Point(458, 213);
			this->YLabel->Name = L"YLabel";
			this->YLabel->Size = System::Drawing::Size(19, 20);
			this->YLabel->TabIndex = 11;
			this->YLabel->Text = L"Y";
			// 
			// YTB
			// 
			this->YTB->Location = System::Drawing::Point(493, 211);
			this->YTB->Name = L"YTB";
			this->YTB->ReadOnly = true;
			this->YTB->Size = System::Drawing::Size(102, 22);
			this->YTB->TabIndex = 10;
			// 
			// XLabel
			// 
			this->XLabel->AutoSize = true;
			this->XLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->XLabel->Location = System::Drawing::Point(273, 213);
			this->XLabel->Name = L"XLabel";
			this->XLabel->Size = System::Drawing::Size(20, 20);
			this->XLabel->TabIndex = 9;
			this->XLabel->Text = L"X";
			// 
			// XTB
			// 
			this->XTB->Location = System::Drawing::Point(308, 211);
			this->XTB->Name = L"XTB";
			this->XTB->ReadOnly = true;
			this->XTB->Size = System::Drawing::Size(102, 22);
			this->XTB->TabIndex = 8;
			// 
			// ErrorLabel
			// 
			this->ErrorLabel->AutoSize = true;
			this->ErrorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->ErrorLabel->Location = System::Drawing::Point(397, 157);
			this->ErrorLabel->Name = L"ErrorLabel";
			this->ErrorLabel->Size = System::Drawing::Size(0, 18);
			this->ErrorLabel->TabIndex = 12;
			// 
			// GCDLabel
			// 
			this->GCDLabel->AutoSize = true;
			this->GCDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->GCDLabel->Location = System::Drawing::Point(70, 213);
			this->GCDLabel->Name = L"GCDLabel";
			this->GCDLabel->Size = System::Drawing::Size(47, 20);
			this->GCDLabel->TabIndex = 14;
			this->GCDLabel->Text = L"GCD";
			// 
			// GCDTB
			// 
			this->GCDTB->Location = System::Drawing::Point(123, 211);
			this->GCDTB->Name = L"GCDTB";
			this->GCDTB->ReadOnly = true;
			this->GCDTB->Size = System::Drawing::Size(102, 22);
			this->GCDTB->TabIndex = 13;
			// 
			// ExtendedGCDGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 334);
			this->Controls->Add(this->GCDLabel);
			this->Controls->Add(this->GCDTB);
			this->Controls->Add(this->ErrorLabel);
			this->Controls->Add(this->YLabel);
			this->Controls->Add(this->YTB);
			this->Controls->Add(this->XLabel);
			this->Controls->Add(this->XTB);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->ComputeButton);
			this->Controls->Add(this->BLabel);
			this->Controls->Add(this->BTB);
			this->Controls->Add(this->ALabel);
			this->Controls->Add(this->ATB);
			this->Controls->Add(this->DescriptionLabel);
			this->Controls->Add(this->EEALabel);
			this->Name = L"ExtendedGCDGUI";
			this->Text = L"ExtendedGCDGUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
			parent->Show(); this->Close();
		}
	private: 
		System::Void ComputeButton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->ErrorLabel->Text = L"";
			if (!System::Text::RegularExpressions::Regex::IsMatch(ATB->Text, "^[-0-9]*.[.0-9].[0-9]*$")) {
				ErrorLabel->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
			}
			if (!System::Text::RegularExpressions::Regex::IsMatch(BTB->Text, "^[-0-9]*.[.0-9].[0-9]*$")) {
				ErrorLabel->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
			}
			string a = marshal_as<string, String^>(ATB->Text);
			string b = marshal_as<string, String^>(BTB->Text);
			if(a.empty() || b.empty()){ ErrorLabel->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }

			int A = stoi(a), B = stoi(b);
			pair<int, pair<int, int>> res = ExtendedGCD::find(A, B);

			GCDTB->Text = marshal_as<String^, string>(to_string(res.first));
			XTB->Text = marshal_as<String^, string>(to_string(res.second.first));
			YTB->Text = marshal_as<String^, string>(to_string(res.second.second));
		}
	};
}
