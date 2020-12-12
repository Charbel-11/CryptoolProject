#pragma once
#include "DES.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	typedef long long ll;

	/// <summary>
	/// Summary for DataEncryptionStandard
	/// </summary>
	public ref class DataEncryptionStandard : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		DataEncryptionStandard(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DataEncryptionStandard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ DESBackButt;
	private: System::Windows::Forms::Button^ DESEncryptButt;
	private: System::Windows::Forms::Button^ DESDecryptButt;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::TextBox^ DESPlaintext;
	private: System::Windows::Forms::TextBox^ DESCiphertext;


	private: System::Windows::Forms::Label^ DESerror;
	private: System::Windows::Forms::TextBox^ DESKey;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ DESKey6;
	private: System::Windows::Forms::Label^ DESKey5;
	private: System::Windows::Forms::Label^ DESKey4;
	private: System::Windows::Forms::Label^ DESKey3;
	private: System::Windows::Forms::Label^ DESKey2;
	private: System::Windows::Forms::Label^ DESKey1;
	private: System::Windows::Forms::Label^ Left6;
	private: System::Windows::Forms::Label^ Left5;
	private: System::Windows::Forms::Label^ Left4;
	private: System::Windows::Forms::Label^ Left3;
	private: System::Windows::Forms::Label^ Left2;
	private: System::Windows::Forms::Label^ Left1;
	private: System::Windows::Forms::Label^ Right6;







	private: System::Windows::Forms::Label^ Right5;

	private: System::Windows::Forms::Label^ Right4;

	private: System::Windows::Forms::Label^ Right3;

	private: System::Windows::Forms::Label^ Right2;

	private: System::Windows::Forms::Label^ Right1;
	private: System::Windows::Forms::Label^ Result6;


	private: System::Windows::Forms::Label^ Result5;

	private: System::Windows::Forms::Label^ Result4;

	private: System::Windows::Forms::Label^ Result3;

	private: System::Windows::Forms::Label^ Result2;

	private: System::Windows::Forms::Label^ Resul1;

	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ DESKey12;

	private: System::Windows::Forms::Label^ DESKey11;

	private: System::Windows::Forms::Label^ DESKey10;

	private: System::Windows::Forms::Label^ DESKey9;

	private: System::Windows::Forms::Label^ DESKey8;

	private: System::Windows::Forms::Label^ DESKey7;

	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ DESKey16;

	private: System::Windows::Forms::Label^ DESKey15;

	private: System::Windows::Forms::Label^ DESKey14;

	private: System::Windows::Forms::Label^ DESKey13;

	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ Left12;
private: System::Windows::Forms::Label^ Left11;
private: System::Windows::Forms::Label^ Left10;
private: System::Windows::Forms::Label^ Left9;
private: System::Windows::Forms::Label^ Left8;
private: System::Windows::Forms::Label^ Left7;
private: System::Windows::Forms::Label^ Left16;
private: System::Windows::Forms::Label^ Left15;
private: System::Windows::Forms::Label^ Left14;
private: System::Windows::Forms::Label^ Left13;
private: System::Windows::Forms::Label^ Right12;

private: System::Windows::Forms::Label^ Right11;

private: System::Windows::Forms::Label^ Right10;

private: System::Windows::Forms::Label^ Right9;

private: System::Windows::Forms::Label^ Right8;

private: System::Windows::Forms::Label^ Right7;
private: System::Windows::Forms::Label^ Result12;


private: System::Windows::Forms::Label^ Result11;

private: System::Windows::Forms::Label^ Result10;

private: System::Windows::Forms::Label^ Result9;

private: System::Windows::Forms::Label^ Result8;

private: System::Windows::Forms::Label^ Result7;
private: System::Windows::Forms::Label^ Right16;

private: System::Windows::Forms::Label^ Right15;

private: System::Windows::Forms::Label^ Right14;

private: System::Windows::Forms::Label^ Right13;
private: System::Windows::Forms::Label^ Result16;


private: System::Windows::Forms::Label^ Result15;

private: System::Windows::Forms::Label^ Result14;

private: System::Windows::Forms::Label^ Result13;
























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
			this->DESBackButt = (gcnew System::Windows::Forms::Button());
			this->DESEncryptButt = (gcnew System::Windows::Forms::Button());
			this->DESDecryptButt = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DESPlaintext = (gcnew System::Windows::Forms::TextBox());
			this->DESCiphertext = (gcnew System::Windows::Forms::TextBox());
			this->DESerror = (gcnew System::Windows::Forms::Label());
			this->DESKey = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->DESKey6 = (gcnew System::Windows::Forms::Label());
			this->DESKey5 = (gcnew System::Windows::Forms::Label());
			this->DESKey4 = (gcnew System::Windows::Forms::Label());
			this->DESKey3 = (gcnew System::Windows::Forms::Label());
			this->DESKey2 = (gcnew System::Windows::Forms::Label());
			this->DESKey1 = (gcnew System::Windows::Forms::Label());
			this->Left6 = (gcnew System::Windows::Forms::Label());
			this->Left5 = (gcnew System::Windows::Forms::Label());
			this->Left4 = (gcnew System::Windows::Forms::Label());
			this->Left3 = (gcnew System::Windows::Forms::Label());
			this->Left2 = (gcnew System::Windows::Forms::Label());
			this->Left1 = (gcnew System::Windows::Forms::Label());
			this->Right6 = (gcnew System::Windows::Forms::Label());
			this->Right5 = (gcnew System::Windows::Forms::Label());
			this->Right4 = (gcnew System::Windows::Forms::Label());
			this->Right3 = (gcnew System::Windows::Forms::Label());
			this->Right2 = (gcnew System::Windows::Forms::Label());
			this->Right1 = (gcnew System::Windows::Forms::Label());
			this->Result6 = (gcnew System::Windows::Forms::Label());
			this->Result5 = (gcnew System::Windows::Forms::Label());
			this->Result4 = (gcnew System::Windows::Forms::Label());
			this->Result3 = (gcnew System::Windows::Forms::Label());
			this->Result2 = (gcnew System::Windows::Forms::Label());
			this->Resul1 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->DESKey12 = (gcnew System::Windows::Forms::Label());
			this->DESKey11 = (gcnew System::Windows::Forms::Label());
			this->DESKey10 = (gcnew System::Windows::Forms::Label());
			this->DESKey9 = (gcnew System::Windows::Forms::Label());
			this->DESKey8 = (gcnew System::Windows::Forms::Label());
			this->DESKey7 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->DESKey16 = (gcnew System::Windows::Forms::Label());
			this->DESKey15 = (gcnew System::Windows::Forms::Label());
			this->DESKey14 = (gcnew System::Windows::Forms::Label());
			this->DESKey13 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->Left12 = (gcnew System::Windows::Forms::Label());
			this->Left11 = (gcnew System::Windows::Forms::Label());
			this->Left10 = (gcnew System::Windows::Forms::Label());
			this->Left9 = (gcnew System::Windows::Forms::Label());
			this->Left8 = (gcnew System::Windows::Forms::Label());
			this->Left7 = (gcnew System::Windows::Forms::Label());
			this->Left16 = (gcnew System::Windows::Forms::Label());
			this->Left15 = (gcnew System::Windows::Forms::Label());
			this->Left14 = (gcnew System::Windows::Forms::Label());
			this->Left13 = (gcnew System::Windows::Forms::Label());
			this->Right12 = (gcnew System::Windows::Forms::Label());
			this->Right11 = (gcnew System::Windows::Forms::Label());
			this->Right10 = (gcnew System::Windows::Forms::Label());
			this->Right9 = (gcnew System::Windows::Forms::Label());
			this->Right8 = (gcnew System::Windows::Forms::Label());
			this->Right7 = (gcnew System::Windows::Forms::Label());
			this->Result12 = (gcnew System::Windows::Forms::Label());
			this->Result11 = (gcnew System::Windows::Forms::Label());
			this->Result10 = (gcnew System::Windows::Forms::Label());
			this->Result9 = (gcnew System::Windows::Forms::Label());
			this->Result8 = (gcnew System::Windows::Forms::Label());
			this->Result7 = (gcnew System::Windows::Forms::Label());
			this->Right16 = (gcnew System::Windows::Forms::Label());
			this->Right15 = (gcnew System::Windows::Forms::Label());
			this->Right14 = (gcnew System::Windows::Forms::Label());
			this->Right13 = (gcnew System::Windows::Forms::Label());
			this->Result16 = (gcnew System::Windows::Forms::Label());
			this->Result15 = (gcnew System::Windows::Forms::Label());
			this->Result14 = (gcnew System::Windows::Forms::Label());
			this->Result13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->Location = System::Drawing::Point(6, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(477, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Data Encryption Standard";
			// 
			// DESBackButt
			// 
			this->DESBackButt->Location = System::Drawing::Point(312, 377);
			this->DESBackButt->Name = L"DESBackButt";
			this->DESBackButt->Size = System::Drawing::Size(92, 38);
			this->DESBackButt->TabIndex = 1;
			this->DESBackButt->Text = L"Back";
			this->DESBackButt->UseVisualStyleBackColor = true;
			this->DESBackButt->Click += gcnew System::EventHandler(this, &DataEncryptionStandard::DESBackButt_Click);
			// 
			// DESEncryptButt
			// 
			this->DESEncryptButt->Location = System::Drawing::Point(28, 377);
			this->DESEncryptButt->Name = L"DESEncryptButt";
			this->DESEncryptButt->Size = System::Drawing::Size(91, 38);
			this->DESEncryptButt->TabIndex = 2;
			this->DESEncryptButt->Text = L"Encrypt";
			this->DESEncryptButt->UseVisualStyleBackColor = true;
			this->DESEncryptButt->Click += gcnew System::EventHandler(this, &DataEncryptionStandard::DESEncryptButt_Click);
			// 
			// DESDecryptButt
			// 
			this->DESDecryptButt->Location = System::Drawing::Point(171, 377);
			this->DESDecryptButt->Name = L"DESDecryptButt";
			this->DESDecryptButt->Size = System::Drawing::Size(95, 38);
			this->DESDecryptButt->TabIndex = 3;
			this->DESDecryptButt->Text = L"Decrypt";
			this->DESDecryptButt->UseVisualStyleBackColor = true;
			this->DESDecryptButt->Click += gcnew System::EventHandler(this, &DataEncryptionStandard::DESDecryptButt_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(10, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Plaintext:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(10, 303);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ciphertext:";
			// 
			// DESPlaintext
			// 
			this->DESPlaintext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->DESPlaintext->Location = System::Drawing::Point(113, 182);
			this->DESPlaintext->Name = L"DESPlaintext";
			this->DESPlaintext->Size = System::Drawing::Size(291, 26);
			this->DESPlaintext->TabIndex = 8;
			// 
			// DESCiphertext
			// 
			this->DESCiphertext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->DESCiphertext->Location = System::Drawing::Point(113, 305);
			this->DESCiphertext->Name = L"DESCiphertext";
			this->DESCiphertext->Size = System::Drawing::Size(291, 26);
			this->DESCiphertext->TabIndex = 9;
			// 
			// DESerror
			// 
			this->DESerror->AutoSize = true;
			this->DESerror->Location = System::Drawing::Point(85, 349);
			this->DESerror->Name = L"DESerror";
			this->DESerror->Size = System::Drawing::Size(0, 13);
			this->DESerror->TabIndex = 12;
			// 
			// DESKey
			// 
			this->DESKey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->DESKey->Location = System::Drawing::Point(113, 240);
			this->DESKey->Name = L"DESKey";
			this->DESKey->Size = System::Drawing::Size(291, 26);
			this->DESKey->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(10, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Key";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(569, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Round 1:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(569, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Round 2:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(569, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Round 4:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(569, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Round 3:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(569, 235);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Round 6:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(569, 208);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Round 5:";
			// 
			// DESKey6
			// 
			this->DESKey6->AutoSize = true;
			this->DESKey6->Location = System::Drawing::Point(640, 235);
			this->DESKey6->Name = L"DESKey6";
			this->DESKey6->Size = System::Drawing::Size(0, 13);
			this->DESKey6->TabIndex = 26;
			// 
			// DESKey5
			// 
			this->DESKey5->AutoSize = true;
			this->DESKey5->Location = System::Drawing::Point(640, 208);
			this->DESKey5->Name = L"DESKey5";
			this->DESKey5->Size = System::Drawing::Size(0, 13);
			this->DESKey5->TabIndex = 25;
			// 
			// DESKey4
			// 
			this->DESKey4->AutoSize = true;
			this->DESKey4->Location = System::Drawing::Point(640, 181);
			this->DESKey4->Name = L"DESKey4";
			this->DESKey4->Size = System::Drawing::Size(0, 13);
			this->DESKey4->TabIndex = 24;
			// 
			// DESKey3
			// 
			this->DESKey3->AutoSize = true;
			this->DESKey3->Location = System::Drawing::Point(640, 154);
			this->DESKey3->Name = L"DESKey3";
			this->DESKey3->Size = System::Drawing::Size(0, 13);
			this->DESKey3->TabIndex = 23;
			// 
			// DESKey2
			// 
			this->DESKey2->AutoSize = true;
			this->DESKey2->Location = System::Drawing::Point(640, 124);
			this->DESKey2->Name = L"DESKey2";
			this->DESKey2->Size = System::Drawing::Size(0, 13);
			this->DESKey2->TabIndex = 22;
			// 
			// DESKey1
			// 
			this->DESKey1->AutoSize = true;
			this->DESKey1->Location = System::Drawing::Point(640, 97);
			this->DESKey1->Name = L"DESKey1";
			this->DESKey1->Size = System::Drawing::Size(0, 13);
			this->DESKey1->TabIndex = 21;
			// 
			// Left6
			// 
			this->Left6->AutoSize = true;
			this->Left6->Location = System::Drawing::Point(775, 235);
			this->Left6->Name = L"Left6";
			this->Left6->Size = System::Drawing::Size(0, 13);
			this->Left6->TabIndex = 32;
			// 
			// Left5
			// 
			this->Left5->AutoSize = true;
			this->Left5->Location = System::Drawing::Point(775, 208);
			this->Left5->Name = L"Left5";
			this->Left5->Size = System::Drawing::Size(0, 13);
			this->Left5->TabIndex = 31;
			// 
			// Left4
			// 
			this->Left4->AutoSize = true;
			this->Left4->Location = System::Drawing::Point(775, 181);
			this->Left4->Name = L"Left4";
			this->Left4->Size = System::Drawing::Size(0, 13);
			this->Left4->TabIndex = 30;
			// 
			// Left3
			// 
			this->Left3->AutoSize = true;
			this->Left3->Location = System::Drawing::Point(775, 154);
			this->Left3->Name = L"Left3";
			this->Left3->Size = System::Drawing::Size(0, 13);
			this->Left3->TabIndex = 29;
			// 
			// Left2
			// 
			this->Left2->AutoSize = true;
			this->Left2->Location = System::Drawing::Point(775, 124);
			this->Left2->Name = L"Left2";
			this->Left2->Size = System::Drawing::Size(0, 13);
			this->Left2->TabIndex = 28;
			// 
			// Left1
			// 
			this->Left1->AutoSize = true;
			this->Left1->Location = System::Drawing::Point(775, 97);
			this->Left1->Name = L"Left1";
			this->Left1->Size = System::Drawing::Size(0, 13);
			this->Left1->TabIndex = 27;
			// 
			// Right6
			// 
			this->Right6->AutoSize = true;
			this->Right6->Location = System::Drawing::Point(901, 235);
			this->Right6->Name = L"Right6";
			this->Right6->Size = System::Drawing::Size(0, 13);
			this->Right6->TabIndex = 38;
			// 
			// Right5
			// 
			this->Right5->AutoSize = true;
			this->Right5->Location = System::Drawing::Point(901, 208);
			this->Right5->Name = L"Right5";
			this->Right5->Size = System::Drawing::Size(0, 13);
			this->Right5->TabIndex = 37;
			// 
			// Right4
			// 
			this->Right4->AutoSize = true;
			this->Right4->Location = System::Drawing::Point(901, 181);
			this->Right4->Name = L"Right4";
			this->Right4->Size = System::Drawing::Size(0, 13);
			this->Right4->TabIndex = 36;
			// 
			// Right3
			// 
			this->Right3->AutoSize = true;
			this->Right3->Location = System::Drawing::Point(901, 154);
			this->Right3->Name = L"Right3";
			this->Right3->Size = System::Drawing::Size(0, 13);
			this->Right3->TabIndex = 35;
			// 
			// Right2
			// 
			this->Right2->AutoSize = true;
			this->Right2->Location = System::Drawing::Point(901, 124);
			this->Right2->Name = L"Right2";
			this->Right2->Size = System::Drawing::Size(0, 13);
			this->Right2->TabIndex = 34;
			// 
			// Right1
			// 
			this->Right1->AutoSize = true;
			this->Right1->Location = System::Drawing::Point(901, 97);
			this->Right1->Name = L"Right1";
			this->Right1->Size = System::Drawing::Size(0, 13);
			this->Right1->TabIndex = 33;
			// 
			// Result6
			// 
			this->Result6->AutoSize = true;
			this->Result6->Location = System::Drawing::Point(1039, 235);
			this->Result6->Name = L"Result6";
			this->Result6->Size = System::Drawing::Size(0, 13);
			this->Result6->TabIndex = 44;
			// 
			// Result5
			// 
			this->Result5->AutoSize = true;
			this->Result5->Location = System::Drawing::Point(1039, 208);
			this->Result5->Name = L"Result5";
			this->Result5->Size = System::Drawing::Size(0, 13);
			this->Result5->TabIndex = 43;
			// 
			// Result4
			// 
			this->Result4->AutoSize = true;
			this->Result4->Location = System::Drawing::Point(1039, 181);
			this->Result4->Name = L"Result4";
			this->Result4->Size = System::Drawing::Size(0, 13);
			this->Result4->TabIndex = 42;
			// 
			// Result3
			// 
			this->Result3->AutoSize = true;
			this->Result3->Location = System::Drawing::Point(1039, 154);
			this->Result3->Name = L"Result3";
			this->Result3->Size = System::Drawing::Size(0, 13);
			this->Result3->TabIndex = 41;
			// 
			// Result2
			// 
			this->Result2->AutoSize = true;
			this->Result2->Location = System::Drawing::Point(1039, 124);
			this->Result2->Name = L"Result2";
			this->Result2->Size = System::Drawing::Size(0, 13);
			this->Result2->TabIndex = 40;
			// 
			// Resul1
			// 
			this->Resul1->AutoSize = true;
			this->Resul1->Location = System::Drawing::Point(1039, 97);
			this->Resul1->Name = L"Resul1";
			this->Resul1->Size = System::Drawing::Size(0, 13);
			this->Resul1->TabIndex = 39;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(1039, 68);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(72, 13);
			this->label35->TabIndex = 49;
			this->label35->Text = L"Round Result";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(901, 68);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(37, 13);
			this->label36->TabIndex = 48;
			this->label36->Text = L"Right i";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(775, 68);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(30, 13);
			this->label37->TabIndex = 47;
			this->label37->Text = L"Left i";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(640, 68);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(59, 13);
			this->label38->TabIndex = 46;
			this->label38->Text = L"Round key";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(569, 68);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(39, 13);
			this->label39->TabIndex = 45;
			this->label39->Text = L"Round";
			// 
			// DESKey12
			// 
			this->DESKey12->AutoSize = true;
			this->DESKey12->Location = System::Drawing::Point(640, 401);
			this->DESKey12->Name = L"DESKey12";
			this->DESKey12->Size = System::Drawing::Size(0, 13);
			this->DESKey12->TabIndex = 61;
			// 
			// DESKey11
			// 
			this->DESKey11->AutoSize = true;
			this->DESKey11->Location = System::Drawing::Point(640, 374);
			this->DESKey11->Name = L"DESKey11";
			this->DESKey11->Size = System::Drawing::Size(0, 13);
			this->DESKey11->TabIndex = 60;
			// 
			// DESKey10
			// 
			this->DESKey10->AutoSize = true;
			this->DESKey10->Location = System::Drawing::Point(640, 347);
			this->DESKey10->Name = L"DESKey10";
			this->DESKey10->Size = System::Drawing::Size(0, 13);
			this->DESKey10->TabIndex = 59;
			// 
			// DESKey9
			// 
			this->DESKey9->AutoSize = true;
			this->DESKey9->Location = System::Drawing::Point(640, 320);
			this->DESKey9->Name = L"DESKey9";
			this->DESKey9->Size = System::Drawing::Size(0, 13);
			this->DESKey9->TabIndex = 58;
			// 
			// DESKey8
			// 
			this->DESKey8->AutoSize = true;
			this->DESKey8->Location = System::Drawing::Point(640, 290);
			this->DESKey8->Name = L"DESKey8";
			this->DESKey8->Size = System::Drawing::Size(0, 13);
			this->DESKey8->TabIndex = 57;
			// 
			// DESKey7
			// 
			this->DESKey7->AutoSize = true;
			this->DESKey7->Location = System::Drawing::Point(640, 263);
			this->DESKey7->Name = L"DESKey7";
			this->DESKey7->Size = System::Drawing::Size(0, 13);
			this->DESKey7->TabIndex = 56;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(569, 401);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(57, 13);
			this->label40->TabIndex = 55;
			this->label40->Text = L"Round 12:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(569, 374);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(57, 13);
			this->label41->TabIndex = 54;
			this->label41->Text = L"Round 11:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(569, 347);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(57, 13);
			this->label42->TabIndex = 53;
			this->label42->Text = L"Round 10:";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(569, 320);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(51, 13);
			this->label43->TabIndex = 52;
			this->label43->Text = L"Round 9:";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(569, 290);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(51, 13);
			this->label44->TabIndex = 51;
			this->label44->Text = L"Round 8:";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(569, 263);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(51, 13);
			this->label45->TabIndex = 50;
			this->label45->Text = L"Round 7:";
			// 
			// DESKey16
			// 
			this->DESKey16->AutoSize = true;
			this->DESKey16->Location = System::Drawing::Point(640, 510);
			this->DESKey16->Name = L"DESKey16";
			this->DESKey16->Size = System::Drawing::Size(0, 13);
			this->DESKey16->TabIndex = 71;
			// 
			// DESKey15
			// 
			this->DESKey15->AutoSize = true;
			this->DESKey15->Location = System::Drawing::Point(640, 483);
			this->DESKey15->Name = L"DESKey15";
			this->DESKey15->Size = System::Drawing::Size(0, 13);
			this->DESKey15->TabIndex = 70;
			// 
			// DESKey14
			// 
			this->DESKey14->AutoSize = true;
			this->DESKey14->Location = System::Drawing::Point(640, 453);
			this->DESKey14->Name = L"DESKey14";
			this->DESKey14->Size = System::Drawing::Size(0, 13);
			this->DESKey14->TabIndex = 69;
			// 
			// DESKey13
			// 
			this->DESKey13->AutoSize = true;
			this->DESKey13->Location = System::Drawing::Point(640, 426);
			this->DESKey13->Name = L"DESKey13";
			this->DESKey13->Size = System::Drawing::Size(0, 13);
			this->DESKey13->TabIndex = 68;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(569, 510);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(57, 13);
			this->label54->TabIndex = 65;
			this->label54->Text = L"Round 16:";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(569, 483);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(57, 13);
			this->label55->TabIndex = 64;
			this->label55->Text = L"Round 15:";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(569, 453);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(57, 13);
			this->label56->TabIndex = 63;
			this->label56->Text = L"Round 14:";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(569, 426);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(57, 13);
			this->label57->TabIndex = 62;
			this->label57->Text = L"Round 13:";
			// 
			// Left12
			// 
			this->Left12->AutoSize = true;
			this->Left12->Location = System::Drawing::Point(775, 402);
			this->Left12->Name = L"Left12";
			this->Left12->Size = System::Drawing::Size(0, 13);
			this->Left12->TabIndex = 77;
			// 
			// Left11
			// 
			this->Left11->AutoSize = true;
			this->Left11->Location = System::Drawing::Point(775, 375);
			this->Left11->Name = L"Left11";
			this->Left11->Size = System::Drawing::Size(0, 13);
			this->Left11->TabIndex = 76;
			// 
			// Left10
			// 
			this->Left10->AutoSize = true;
			this->Left10->Location = System::Drawing::Point(775, 348);
			this->Left10->Name = L"Left10";
			this->Left10->Size = System::Drawing::Size(0, 13);
			this->Left10->TabIndex = 75;
			// 
			// Left9
			// 
			this->Left9->AutoSize = true;
			this->Left9->Location = System::Drawing::Point(775, 321);
			this->Left9->Name = L"Left9";
			this->Left9->Size = System::Drawing::Size(0, 13);
			this->Left9->TabIndex = 74;
			// 
			// Left8
			// 
			this->Left8->AutoSize = true;
			this->Left8->Location = System::Drawing::Point(775, 291);
			this->Left8->Name = L"Left8";
			this->Left8->Size = System::Drawing::Size(0, 13);
			this->Left8->TabIndex = 73;
			// 
			// Left7
			// 
			this->Left7->AutoSize = true;
			this->Left7->Location = System::Drawing::Point(775, 264);
			this->Left7->Name = L"Left7";
			this->Left7->Size = System::Drawing::Size(0, 13);
			this->Left7->TabIndex = 72;
			// 
			// Left16
			// 
			this->Left16->AutoSize = true;
			this->Left16->Location = System::Drawing::Point(775, 510);
			this->Left16->Name = L"Left16";
			this->Left16->Size = System::Drawing::Size(0, 13);
			this->Left16->TabIndex = 81;
			// 
			// Left15
			// 
			this->Left15->AutoSize = true;
			this->Left15->Location = System::Drawing::Point(775, 483);
			this->Left15->Name = L"Left15";
			this->Left15->Size = System::Drawing::Size(0, 13);
			this->Left15->TabIndex = 80;
			// 
			// Left14
			// 
			this->Left14->AutoSize = true;
			this->Left14->Location = System::Drawing::Point(775, 453);
			this->Left14->Name = L"Left14";
			this->Left14->Size = System::Drawing::Size(0, 13);
			this->Left14->TabIndex = 79;
			// 
			// Left13
			// 
			this->Left13->AutoSize = true;
			this->Left13->Location = System::Drawing::Point(775, 426);
			this->Left13->Name = L"Left13";
			this->Left13->Size = System::Drawing::Size(0, 13);
			this->Left13->TabIndex = 78;
			// 
			// Right12
			// 
			this->Right12->AutoSize = true;
			this->Right12->Location = System::Drawing::Point(901, 397);
			this->Right12->Name = L"Right12";
			this->Right12->Size = System::Drawing::Size(0, 13);
			this->Right12->TabIndex = 87;
			// 
			// Right11
			// 
			this->Right11->AutoSize = true;
			this->Right11->Location = System::Drawing::Point(901, 370);
			this->Right11->Name = L"Right11";
			this->Right11->Size = System::Drawing::Size(0, 13);
			this->Right11->TabIndex = 86;
			// 
			// Right10
			// 
			this->Right10->AutoSize = true;
			this->Right10->Location = System::Drawing::Point(901, 343);
			this->Right10->Name = L"Right10";
			this->Right10->Size = System::Drawing::Size(0, 13);
			this->Right10->TabIndex = 85;
			// 
			// Right9
			// 
			this->Right9->AutoSize = true;
			this->Right9->Location = System::Drawing::Point(901, 316);
			this->Right9->Name = L"Right9";
			this->Right9->Size = System::Drawing::Size(0, 13);
			this->Right9->TabIndex = 84;
			// 
			// Right8
			// 
			this->Right8->AutoSize = true;
			this->Right8->Location = System::Drawing::Point(901, 286);
			this->Right8->Name = L"Right8";
			this->Right8->Size = System::Drawing::Size(0, 13);
			this->Right8->TabIndex = 83;
			// 
			// Right7
			// 
			this->Right7->AutoSize = true;
			this->Right7->Location = System::Drawing::Point(901, 259);
			this->Right7->Name = L"Right7";
			this->Right7->Size = System::Drawing::Size(0, 13);
			this->Right7->TabIndex = 82;
			// 
			// Result12
			// 
			this->Result12->AutoSize = true;
			this->Result12->Location = System::Drawing::Point(1039, 397);
			this->Result12->Name = L"Result12";
			this->Result12->Size = System::Drawing::Size(0, 13);
			this->Result12->TabIndex = 93;
			// 
			// Result11
			// 
			this->Result11->AutoSize = true;
			this->Result11->Location = System::Drawing::Point(1039, 370);
			this->Result11->Name = L"Result11";
			this->Result11->Size = System::Drawing::Size(0, 13);
			this->Result11->TabIndex = 92;
			// 
			// Result10
			// 
			this->Result10->AutoSize = true;
			this->Result10->Location = System::Drawing::Point(1039, 343);
			this->Result10->Name = L"Result10";
			this->Result10->Size = System::Drawing::Size(0, 13);
			this->Result10->TabIndex = 91;
			// 
			// Result9
			// 
			this->Result9->AutoSize = true;
			this->Result9->Location = System::Drawing::Point(1039, 316);
			this->Result9->Name = L"Result9";
			this->Result9->Size = System::Drawing::Size(0, 13);
			this->Result9->TabIndex = 90;
			// 
			// Result8
			// 
			this->Result8->AutoSize = true;
			this->Result8->Location = System::Drawing::Point(1039, 286);
			this->Result8->Name = L"Result8";
			this->Result8->Size = System::Drawing::Size(0, 13);
			this->Result8->TabIndex = 89;
			// 
			// Result7
			// 
			this->Result7->AutoSize = true;
			this->Result7->Location = System::Drawing::Point(1039, 259);
			this->Result7->Name = L"Result7";
			this->Result7->Size = System::Drawing::Size(0, 13);
			this->Result7->TabIndex = 88;
			// 
			// Right16
			// 
			this->Right16->AutoSize = true;
			this->Right16->Location = System::Drawing::Point(901, 510);
			this->Right16->Name = L"Right16";
			this->Right16->Size = System::Drawing::Size(0, 13);
			this->Right16->TabIndex = 97;
			// 
			// Right15
			// 
			this->Right15->AutoSize = true;
			this->Right15->Location = System::Drawing::Point(901, 483);
			this->Right15->Name = L"Right15";
			this->Right15->Size = System::Drawing::Size(0, 13);
			this->Right15->TabIndex = 96;
			// 
			// Right14
			// 
			this->Right14->AutoSize = true;
			this->Right14->Location = System::Drawing::Point(901, 453);
			this->Right14->Name = L"Right14";
			this->Right14->Size = System::Drawing::Size(0, 13);
			this->Right14->TabIndex = 95;
			// 
			// Right13
			// 
			this->Right13->AutoSize = true;
			this->Right13->Location = System::Drawing::Point(901, 426);
			this->Right13->Name = L"Right13";
			this->Right13->Size = System::Drawing::Size(0, 13);
			this->Right13->TabIndex = 94;
			// 
			// Result16
			// 
			this->Result16->AutoSize = true;
			this->Result16->Location = System::Drawing::Point(1039, 523);
			this->Result16->Name = L"Result16";
			this->Result16->Size = System::Drawing::Size(0, 13);
			this->Result16->TabIndex = 101;
			// 
			// Result15
			// 
			this->Result15->AutoSize = true;
			this->Result15->Location = System::Drawing::Point(1039, 496);
			this->Result15->Name = L"Result15";
			this->Result15->Size = System::Drawing::Size(0, 13);
			this->Result15->TabIndex = 100;
			// 
			// Result14
			// 
			this->Result14->AutoSize = true;
			this->Result14->Location = System::Drawing::Point(1039, 466);
			this->Result14->Name = L"Result14";
			this->Result14->Size = System::Drawing::Size(0, 13);
			this->Result14->TabIndex = 99;
			// 
			// Result13
			// 
			this->Result13->AutoSize = true;
			this->Result13->Location = System::Drawing::Point(1039, 439);
			this->Result13->Name = L"Result13";
			this->Result13->Size = System::Drawing::Size(0, 13);
			this->Result13->TabIndex = 98;
			// 
			// DataEncryptionStandard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1120, 536);
			this->Controls->Add(this->Result16);
			this->Controls->Add(this->Result15);
			this->Controls->Add(this->Result14);
			this->Controls->Add(this->Result13);
			this->Controls->Add(this->Right16);
			this->Controls->Add(this->Right15);
			this->Controls->Add(this->Right14);
			this->Controls->Add(this->Right13);
			this->Controls->Add(this->Result12);
			this->Controls->Add(this->Result11);
			this->Controls->Add(this->Result10);
			this->Controls->Add(this->Result9);
			this->Controls->Add(this->Result8);
			this->Controls->Add(this->Result7);
			this->Controls->Add(this->Right12);
			this->Controls->Add(this->Right11);
			this->Controls->Add(this->Right10);
			this->Controls->Add(this->Right9);
			this->Controls->Add(this->Right8);
			this->Controls->Add(this->Right7);
			this->Controls->Add(this->Left16);
			this->Controls->Add(this->Left15);
			this->Controls->Add(this->Left14);
			this->Controls->Add(this->Left13);
			this->Controls->Add(this->Left12);
			this->Controls->Add(this->Left11);
			this->Controls->Add(this->Left10);
			this->Controls->Add(this->Left9);
			this->Controls->Add(this->Left8);
			this->Controls->Add(this->Left7);
			this->Controls->Add(this->DESKey16);
			this->Controls->Add(this->DESKey15);
			this->Controls->Add(this->DESKey14);
			this->Controls->Add(this->DESKey13);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->DESKey12);
			this->Controls->Add(this->DESKey11);
			this->Controls->Add(this->DESKey10);
			this->Controls->Add(this->DESKey9);
			this->Controls->Add(this->DESKey8);
			this->Controls->Add(this->DESKey7);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->Result6);
			this->Controls->Add(this->Result5);
			this->Controls->Add(this->Result4);
			this->Controls->Add(this->Result3);
			this->Controls->Add(this->Result2);
			this->Controls->Add(this->Resul1);
			this->Controls->Add(this->Right6);
			this->Controls->Add(this->Right5);
			this->Controls->Add(this->Right4);
			this->Controls->Add(this->Right3);
			this->Controls->Add(this->Right2);
			this->Controls->Add(this->Right1);
			this->Controls->Add(this->Left6);
			this->Controls->Add(this->Left5);
			this->Controls->Add(this->Left4);
			this->Controls->Add(this->Left3);
			this->Controls->Add(this->Left2);
			this->Controls->Add(this->Left1);
			this->Controls->Add(this->DESKey6);
			this->Controls->Add(this->DESKey5);
			this->Controls->Add(this->DESKey4);
			this->Controls->Add(this->DESKey3);
			this->Controls->Add(this->DESKey2);
			this->Controls->Add(this->DESKey1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->DESKey);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->DESerror);
			this->Controls->Add(this->DESCiphertext);
			this->Controls->Add(this->DESPlaintext);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DESDecryptButt);
			this->Controls->Add(this->DESEncryptButt);
			this->Controls->Add(this->DESBackButt);
			this->Controls->Add(this->label1);
			this->Name = L"DataEncryptionStandard";
			this->Text = L"DataEncryptionStandard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void DESBackButt_Click(System::Object^ sender, System::EventArgs^ e) {

		parent->Show(); this->Close();
	}
	
	private: System::Void DESEncryptButt_Click(System::Object^ sender, System::EventArgs^ e) {

		string plaintext = marshal_as<string, String^>(DESPlaintext->Text);
		string key = marshal_as<string, String^>(DESKey->Text);
		if (plaintext.empty() || key.empty()) { DESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (key.size()!=16) { DESerror->Text = marshal_as<String^, string>("ERROR: Key not 64 bits!"); return; }
		if (plaintext.size()!=16) { DESerror->Text = marshal_as<String^, string>("ERROR: plaintext not 64bits!"); return; }
		DES in(key);
		DESRes result = in.encryptDES(in.fromHexDES(plaintext));
		string res = in.toHexDES(result.finalRes);
		DESCiphertext->Text = marshal_as<String^, string>(res);

		//Key
		DESKey1->Text = marshal_as<String^, string>(in.toHexDES(result.keys[0]));
		DESKey2->Text = marshal_as<String^, string>(in.toHexDES(result.keys[1]));
		DESKey3->Text = marshal_as<String^, string>(in.toHexDES(result.keys[2]));
		DESKey4->Text = marshal_as<String^, string>(in.toHexDES(result.keys[3]));
		DESKey5->Text = marshal_as<String^, string>(in.toHexDES(result.keys[4]));
		DESKey6->Text = marshal_as<String^, string>(in.toHexDES(result.keys[5]));
		DESKey7->Text = marshal_as<String^, string>(in.toHexDES(result.keys[6]));
		DESKey8->Text = marshal_as<String^, string>(in.toHexDES(result.keys[7]));
		DESKey9->Text = marshal_as<String^, string>(in.toHexDES(result.keys[8]));
		DESKey10->Text = marshal_as<String^, string>(in.toHexDES(result.keys[9]));
		DESKey11->Text = marshal_as<String^, string>(in.toHexDES(result.keys[10]));
		DESKey12->Text = marshal_as<String^, string>(in.toHexDES(result.keys[11]));
		DESKey13->Text = marshal_as<String^, string>(in.toHexDES(result.keys[12]));
		DESKey14->Text = marshal_as<String^, string>(in.toHexDES(result.keys[13]));
		DESKey15->Text = marshal_as<String^, string>(in.toHexDES(result.keys[14]));
		DESKey16->Text = marshal_as<String^, string>(in.toHexDES(result.keys[15]));

		//Left
		Left1->Text = marshal_as<String^, string>(in.toHexDES(result.L[0]));
		Left2->Text = marshal_as<String^, string>(in.toHexDES(result.L[1]));
		Left3->Text = marshal_as<String^, string>(in.toHexDES(result.L[2]));
		Left4->Text = marshal_as<String^, string>(in.toHexDES(result.L[3]));
		Left5->Text = marshal_as<String^, string>(in.toHexDES(result.L[4]));
		Left6->Text = marshal_as<String^, string>(in.toHexDES(result.L[5]));
		Left7->Text = marshal_as<String^, string>(in.toHexDES(result.L[6]));
		Left8->Text = marshal_as<String^, string>(in.toHexDES(result.L[7]));
		Left9->Text = marshal_as<String^, string>(in.toHexDES(result.L[8]));
		Left10->Text = marshal_as<String^, string>(in.toHexDES(result.L[9]));
		Left11->Text = marshal_as<String^, string>(in.toHexDES(result.L[10]));
		Left12->Text = marshal_as<String^, string>(in.toHexDES(result.L[11]));
		Left13->Text = marshal_as<String^, string>(in.toHexDES(result.L[12]));
		Left14->Text = marshal_as<String^, string>(in.toHexDES(result.L[13]));
		Left15->Text = marshal_as<String^, string>(in.toHexDES(result.L[14]));
		Left16->Text = marshal_as<String^, string>(in.toHexDES(result.L[15]));

		//Right
		Right1->Text = marshal_as<String^, string>(in.toHexDES(result.R[0]));
		Right2->Text = marshal_as<String^, string>(in.toHexDES(result.R[1]));
		Right3->Text = marshal_as<String^, string>(in.toHexDES(result.R[2]));
		Right4->Text = marshal_as<String^, string>(in.toHexDES(result.R[3]));
		Right5->Text = marshal_as<String^, string>(in.toHexDES(result.R[4]));
		Right6->Text = marshal_as<String^, string>(in.toHexDES(result.R[5]));
		Right7->Text = marshal_as<String^, string>(in.toHexDES(result.R[6]));
		Right8->Text = marshal_as<String^, string>(in.toHexDES(result.R[7]));
		Right9->Text = marshal_as<String^, string>(in.toHexDES(result.R[8]));
		Right10->Text = marshal_as<String^, string>(in.toHexDES(result.R[9]));
		Right11->Text = marshal_as<String^, string>(in.toHexDES(result.R[10]));
		Right12->Text = marshal_as<String^, string>(in.toHexDES(result.R[11]));
		Right13->Text = marshal_as<String^, string>(in.toHexDES(result.R[12]));
		Right14->Text = marshal_as<String^, string>(in.toHexDES(result.R[13]));
		Right15->Text = marshal_as<String^, string>(in.toHexDES(result.R[14]));
		Right16->Text = marshal_as<String^, string>(in.toHexDES(result.R[15]));

		//Round Result
		/*DESKey1->Text = marshal_as<String^, string>(in.toHexDES(result.keys[0]));
		DESKey2->Text = marshal_as<String^, string>(in.toHexDES(result.keys[1]));
		DESKey3->Text = marshal_as<String^, string>(in.toHexDES(result.keys[2]));
		DESKey4->Text = marshal_as<String^, string>(in.toHexDES(result.keys[3]));
		DESKey5->Text = marshal_as<String^, string>(in.toHexDES(result.keys[4]));
		DESKey6->Text = marshal_as<String^, string>(in.toHexDES(result.keys[5]));
		DESKey7->Text = marshal_as<String^, string>(in.toHexDES(result.keys[6]));
		DESKey8->Text = marshal_as<String^, string>(in.toHexDES(result.keys[7]));
		DESKey9->Text = marshal_as<String^, string>(in.toHexDES(result.keys[8]));
		DESKey10->Text = marshal_as<String^, string>(in.toHexDES(result.keys[9]));
		DESKey11->Text = marshal_as<String^, string>(in.toHexDES(result.keys[10]));
		DESKey12->Text = marshal_as<String^, string>(in.toHexDES(result.keys[11]));
		DESKey13->Text = marshal_as<String^, string>(in.toHexDES(result.keys[12]));
		DESKey14->Text = marshal_as<String^, string>(in.toHexDES(result.keys[13]));
		DESKey15->Text = marshal_as<String^, string>(in.toHexDES(result.keys[14]));
		DESKey16->Text = marshal_as<String^, string>(in.toHexDES(result.keys[15]));*/
	}

	private: System::Void DESDecryptButt_Click(System::Object^ sender, System::EventArgs^ e) {

		string ciphertext = marshal_as<string, String^>(DESCiphertext->Text);
		string key = marshal_as<string, String^>(DESKey->Text);
		if (ciphertext.empty() || key.empty()) { DESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		DES in(key);
		DESRes result = in.decryptDES(in.fromHexDES(ciphertext));
		string res = in.toHexDES(result.finalRes);
		DESPlaintext->Text = marshal_as<String^, string>(res);

		//Key
		DESKey1->Text = marshal_as<String^, string>(in.toHexDES(result.keys[0]));
		DESKey2->Text = marshal_as<String^, string>(in.toHexDES(result.keys[1]));
		DESKey3->Text = marshal_as<String^, string>(in.toHexDES(result.keys[2]));
		DESKey4->Text = marshal_as<String^, string>(in.toHexDES(result.keys[3]));
		DESKey5->Text = marshal_as<String^, string>(in.toHexDES(result.keys[4]));
		DESKey6->Text = marshal_as<String^, string>(in.toHexDES(result.keys[5]));
		DESKey7->Text = marshal_as<String^, string>(in.toHexDES(result.keys[6]));
		DESKey8->Text = marshal_as<String^, string>(in.toHexDES(result.keys[7]));
		DESKey9->Text = marshal_as<String^, string>(in.toHexDES(result.keys[8]));
		DESKey10->Text = marshal_as<String^, string>(in.toHexDES(result.keys[9]));
		DESKey11->Text = marshal_as<String^, string>(in.toHexDES(result.keys[10]));
		DESKey12->Text = marshal_as<String^, string>(in.toHexDES(result.keys[11]));
		DESKey13->Text = marshal_as<String^, string>(in.toHexDES(result.keys[12]));
		DESKey14->Text = marshal_as<String^, string>(in.toHexDES(result.keys[13]));
		DESKey15->Text = marshal_as<String^, string>(in.toHexDES(result.keys[14]));
		DESKey16->Text = marshal_as<String^, string>(in.toHexDES(result.keys[15]));

		//Left
		Left1->Text = marshal_as<String^, string>(in.toHexDES(result.L[0]));
		Left2->Text = marshal_as<String^, string>(in.toHexDES(result.L[1]));
		Left3->Text = marshal_as<String^, string>(in.toHexDES(result.L[2]));
		Left4->Text = marshal_as<String^, string>(in.toHexDES(result.L[3]));
		Left5->Text = marshal_as<String^, string>(in.toHexDES(result.L[4]));
		Left6->Text = marshal_as<String^, string>(in.toHexDES(result.L[5]));
		Left7->Text = marshal_as<String^, string>(in.toHexDES(result.L[6]));
		Left8->Text = marshal_as<String^, string>(in.toHexDES(result.L[7]));
		Left9->Text = marshal_as<String^, string>(in.toHexDES(result.L[8]));
		Left10->Text = marshal_as<String^, string>(in.toHexDES(result.L[9]));
		Left11->Text = marshal_as<String^, string>(in.toHexDES(result.L[10]));
		Left12->Text = marshal_as<String^, string>(in.toHexDES(result.L[11]));
		Left13->Text = marshal_as<String^, string>(in.toHexDES(result.L[12]));
		Left14->Text = marshal_as<String^, string>(in.toHexDES(result.L[13]));
		Left15->Text = marshal_as<String^, string>(in.toHexDES(result.L[14]));
		Left16->Text = marshal_as<String^, string>(in.toHexDES(result.L[15]));

		//Right
		Right1->Text = marshal_as<String^, string>(in.toHexDES(result.R[0]));
		Right2->Text = marshal_as<String^, string>(in.toHexDES(result.R[1]));
		Right3->Text = marshal_as<String^, string>(in.toHexDES(result.R[2]));
		Right4->Text = marshal_as<String^, string>(in.toHexDES(result.R[3]));
		Right5->Text = marshal_as<String^, string>(in.toHexDES(result.R[4]));
		Right6->Text = marshal_as<String^, string>(in.toHexDES(result.R[5]));
		Right7->Text = marshal_as<String^, string>(in.toHexDES(result.R[6]));
		Right8->Text = marshal_as<String^, string>(in.toHexDES(result.R[7]));
		Right9->Text = marshal_as<String^, string>(in.toHexDES(result.R[8]));
		Right10->Text = marshal_as<String^, string>(in.toHexDES(result.R[9]));
		Right11->Text = marshal_as<String^, string>(in.toHexDES(result.R[10]));
		Right12->Text = marshal_as<String^, string>(in.toHexDES(result.R[11]));
		Right13->Text = marshal_as<String^, string>(in.toHexDES(result.R[12]));
		Right14->Text = marshal_as<String^, string>(in.toHexDES(result.R[13]));
		Right15->Text = marshal_as<String^, string>(in.toHexDES(result.R[14]));
		Right16->Text = marshal_as<String^, string>(in.toHexDES(result.R[15]));

		//Round Result

	}
};
}
