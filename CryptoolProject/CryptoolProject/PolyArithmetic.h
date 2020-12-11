#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include "Polynomial ArithmeticHard.h"

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class PolyArithmetic : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		PolyArithmetic(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PolyArithmetic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ deg;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::ComboBox^ op;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ input1;
	private: System::Windows::Forms::TextBox^ input2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ output;
	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::Button^ backButton;
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
			this->deg = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->op = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->input1 = (gcnew System::Windows::Forms::TextBox());
			this->input2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(150, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(506, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Polynomial Arithmetic";
			// 
			// deg
			// 
			this->deg->FormattingEnabled = true;
			this->deg->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"163", L"233",
					L"239", L"283", L"409", L"571"
			});
			this->deg->Location = System::Drawing::Point(241, 134);
			this->deg->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->deg->Name = L"deg";
			this->deg->Size = System::Drawing::Size(75, 28);
			this->deg->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Choose a degree m";
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(388, 133);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(194, 25);
			this->label->TabIndex = 5;
			this->label->Text = L"Choose an operation";
			// 
			// op
			// 
			this->op->FormattingEnabled = true;
			this->op->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Modulo Reduction", L"Inverse", L"Addition", L"Subtraction",
					L"Multiplication", L"Division"
			});
			this->op->Location = System::Drawing::Point(601, 130);
			this->op->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->op->Name = L"op";
			this->op->Size = System::Drawing::Size(166, 28);
			this->op->TabIndex = 6;
			this->op->SelectedIndexChanged += gcnew System::EventHandler(this, &PolyArithmetic::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(76, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Input 1";
			// 
			// input1
			// 
			this->input1->Location = System::Drawing::Point(187, 211);
			this->input1->Name = L"input1";
			this->input1->Size = System::Drawing::Size(193, 26);
			this->input1->TabIndex = 8;
			// 
			// input2
			// 
			this->input2->Location = System::Drawing::Point(547, 211);
			this->input2->Name = L"input2";
			this->input2->Size = System::Drawing::Size(173, 26);
			this->input2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(436, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Input 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(72, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 25);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Output (Binary)";
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(278, 271);
			this->output->Multiline = true;
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(455, 108);
			this->output->TabIndex = 12;
			// 
			// submitButton
			// 
			this->submitButton->Location = System::Drawing::Point(135, 413);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(181, 45);
			this->submitButton->TabIndex = 13;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &PolyArithmetic::submitButton_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(485, 413);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(181, 45);
			this->backButton->TabIndex = 14;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &PolyArithmetic::backButton_Click);
			// 
			// PolyArithmetic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 488);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->output);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->input2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->input1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->op);
			this->Controls->Add(this->label);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->deg);
			this->Controls->Add(this->label1);
			this->Name = L"PolyArithmetic";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		string degreeText = marshal_as<string, String^>(deg->Text);
		string operation = marshal_as<string, String^>(op->Text);
		string op1Text = marshal_as<string, String^>(input1->Text);
		string op2Text = marshal_as<string, String^>(input2->Text); 
		if (op1Text.empty() || degreeText.empty() || operation.empty()) {
			output->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; 
		}
		if (!System::Text::RegularExpressions::Regex::IsMatch(input1->Text, "[-]?[0-9]+")) {
			output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
		}		
		if (!input2->Enabled) { op2Text = "0"; }
		else if (!System::Text::RegularExpressions::Regex::IsMatch(input2->Text, "[-]?[0-9]+")) {
			output->Text = marshal_as<String^, string>("ERROR: Invalid Input!"); return;
		}

		int degree = stoi(degreeText);
		//Handles up to 64 bits, for more need to implement string decimal -> binary conversion
		bitset<SZ> op1BS = bitset<SZ>(stoll(op1Text));
		bitset<SZ> op2BS = bitset<SZ>(stoll(op2Text));
		polyArithmeticLong polyA;
		polyA.setMod(degree);
		bitset<SZ> res1, res2; bool multiLine = false;
		if (operation == "Inverse") {
			res1 = polyA.findInverse(op1BS);
		}
		else if (operation == "Modulo Reduction") {
			res1 = polyA.moduloReduction(op1BS);
		}
		else if (operation == "Addition") {
			res1 = polyA.add(op1BS, op2BS);
		}
		else if (operation == "Subtraction") {
			res1 = polyA.subtract(op1BS, op2BS);
		}
		else if (operation == "Multiplication"){
			res1 = polyA.multiply(op1BS, op2BS);
		}
		else if (operation == "Division") {
			auto curRes = polyA.divide(op1BS, op2BS);
			res1 = curRes.first;
			res2 = curRes.second;
			multiLine = true;
		}

		string o = polyA.printAsBinary(res1, degree, 8);
		if (multiLine) {
			o = "Quotient: " + o;
			o += " \n\rRemainder: ";
			o += polyA.printAsBinary(res2, degree, 8);
		}
		output->Text = marshal_as<String^, string>(o);
	}
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		parent->Show(); this->Close();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		string operation = marshal_as<string, String^>(op->Text);
		if (operation == "Inverse" || operation == "Modulo Reduction") {
			input2->Enabled = false;
		}
		else {
			input2->Enabled = true;
		}
	}
};
}
