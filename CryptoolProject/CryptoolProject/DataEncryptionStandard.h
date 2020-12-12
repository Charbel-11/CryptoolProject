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
	private: System::Windows::Forms::Label^ DESRight;


















































	private: System::Windows::Forms::Label^ DESLeft;

































private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ DESPermutation;
private: System::Windows::Forms::Label^ DESSubstitution;
private: System::Windows::Forms::Label^ DESKeyMixing;
private: System::Windows::Forms::Label^ DESExpansion;
private: System::Windows::Forms::Label^ RoundKey;

























































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
			this->DESRight = (gcnew System::Windows::Forms::Label());
			this->DESLeft = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->DESPermutation = (gcnew System::Windows::Forms::Label());
			this->DESSubstitution = (gcnew System::Windows::Forms::Label());
			this->DESKeyMixing = (gcnew System::Windows::Forms::Label());
			this->DESExpansion = (gcnew System::Windows::Forms::Label());
			this->RoundKey = (gcnew System::Windows::Forms::Label());
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
			// DESRight
			// 
			this->DESRight->AutoSize = true;
			this->DESRight->Location = System::Drawing::Point(448, 349);
			this->DESRight->Name = L"DESRight";
			this->DESRight->Size = System::Drawing::Size(35, 13);
			this->DESRight->TabIndex = 48;
			this->DESRight->Text = L"Right:";
			// 
			// DESLeft
			// 
			this->DESLeft->AutoSize = true;
			this->DESLeft->Location = System::Drawing::Point(448, 240);
			this->DESLeft->Name = L"DESLeft";
			this->DESLeft->Size = System::Drawing::Size(28, 13);
			this->DESLeft->TabIndex = 47;
			this->DESLeft->Text = L"Left:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1002, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 71;
			// 
			// DESPermutation
			// 
			this->DESPermutation->AutoSize = true;
			this->DESPermutation->Location = System::Drawing::Point(916, 421);
			this->DESPermutation->Name = L"DESPermutation";
			this->DESPermutation->Size = System::Drawing::Size(66, 13);
			this->DESPermutation->TabIndex = 75;
			this->DESPermutation->Text = L"Permutation:";
			// 
			// DESSubstitution
			// 
			this->DESSubstitution->AutoSize = true;
			this->DESSubstitution->Location = System::Drawing::Point(916, 329);
			this->DESSubstitution->Name = L"DESSubstitution";
			this->DESSubstitution->Size = System::Drawing::Size(65, 13);
			this->DESSubstitution->TabIndex = 72;
			this->DESSubstitution->Text = L"Substitution:";
			// 
			// DESKeyMixing
			// 
			this->DESKeyMixing->AutoSize = true;
			this->DESKeyMixing->Location = System::Drawing::Point(916, 240);
			this->DESKeyMixing->Name = L"DESKeyMixing";
			this->DESKeyMixing->Size = System::Drawing::Size(61, 13);
			this->DESKeyMixing->TabIndex = 73;
			this->DESKeyMixing->Text = L"Key Mixing:";
			// 
			// DESExpansion
			// 
			this->DESExpansion->AutoSize = true;
			this->DESExpansion->Location = System::Drawing::Point(916, 136);
			this->DESExpansion->Name = L"DESExpansion";
			this->DESExpansion->Size = System::Drawing::Size(59, 13);
			this->DESExpansion->TabIndex = 74;
			this->DESExpansion->Text = L"Expansion:";
			// 
			// RoundKey
			// 
			this->RoundKey->AutoSize = true;
			this->RoundKey->Location = System::Drawing::Point(448, 136);
			this->RoundKey->Name = L"RoundKey";
			this->RoundKey->Size = System::Drawing::Size(62, 13);
			this->RoundKey->TabIndex = 76;
			this->RoundKey->Text = L"Round key:";
			// 
			// DataEncryptionStandard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 556);
			this->Controls->Add(this->RoundKey);
			this->Controls->Add(this->DESPermutation);
			this->Controls->Add(this->DESExpansion);
			this->Controls->Add(this->DESKeyMixing);
			this->Controls->Add(this->DESSubstitution);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->DESRight);
			this->Controls->Add(this->DESLeft);
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
	private: bool ValidHexInput(string text)
	{
		string Hex = "0123456789ABCDEF";
		for (int i = 0; i < text.size(); i++)
		{
			if (Hex.find(text[i]) == std::string::npos)
			{
				DESerror->Text = marshal_as<String^, string>("ERROR: Invalid Hex Input!"); return false;
			}
		}
		return true;
	}

	private: System::Void DESBackButt_Click(System::Object^ sender, System::EventArgs^ e) {

		parent->Show(); this->Close();
	}
	
	private: System::Void DESEncryptButt_Click(System::Object^ sender, System::EventArgs^ e) {

		DESerror->Text = marshal_as<String^, string>("");
		string plaintext = marshal_as<string, String^>(DESPlaintext->Text);
		string key = marshal_as<string, String^>(DESKey->Text);
		if (plaintext.empty() || key.empty()) { DESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (key.size()!=16) { DESerror->Text = marshal_as<String^, string>("ERROR: Key not 64 bits!"); return; }
		if (plaintext.size()!=16) { DESerror->Text = marshal_as<String^, string>("ERROR: plaintext not 64bits!"); return; }
		
		if (ValidHexInput(plaintext)&& ValidHexInput(key))
		{
			DES in(key);
			DESRes result = in.encryptDES(in.fromHexDES(plaintext));
			string res = in.toHexDES(result.finalRes);
			DESCiphertext->Text = marshal_as<String^, string>(res);

			int n1 = result.keys.size();
			int n2 = result.L.size();
			int n3 = result.R.size();
			int n4 = result.expansion.size();
			int n5 = result.keyMixing.size();
			int n6 = result.substitution.size();
			int n7 = result.permutation.size();

			string k = "Round Keys: ";
			for (int i = 0; i < n1; i++)
			{
				k += in.toHexDES(result.keys[i]);
				k += " ";
				if (i % 4 == 0)
				{
					k += "\n";
				}
			}
			RoundKey->Text = marshal_as<String^, string>(k);

			string l = "Left: ";
			for (int i = 0; i < n2; i++)
			{
				l += in.toHexDES(result.L[i]);
				l += " ";
				if (i % 4 == 0)
				{
					l += "\n";
				}
			}
			DESLeft->Text = marshal_as<String^, string>(l);

			string r = "Right: ";
			for (int i = 0; i < n3; i++)
			{
				r += in.toHexDES(result.R[i]);
				r += " ";
				if (i % 4 == 0)
				{
					r += "\n";
				}
			}
			DESRight->Text = marshal_as<String^, string>(r);

			string exp = "Expansion: ";
			for (int i = 0; i < n4; i++)
			{
				exp += in.toHexDES(result.expansion[i]);
				exp += " ";
				if (i % 4 == 0)
				{
					exp += "\n";
				}
			}
			DESExpansion->Text = marshal_as<String^, string>(exp);

			string km = "Key Mixing: ";
			for (int i = 0; i < n5; i++)
			{
				km += in.toHexDES(result.keyMixing[i]);
				km += " ";
				if (i % 4 == 0)
				{
					km += "\n";
				}
			}
			DESKeyMixing->Text = marshal_as<String^, string>(km);

			string s = "Substitution: ";
			for (int i = 0; i < n6; i++)
			{
				s += in.toHexDES(result.substitution[i]);
				s += " ";
				if (i % 4 == 0)
				{
					s += "\n";
				}
			}
			DESSubstitution->Text = marshal_as<String^, string>(s);

			string p = "Permutation: ";
			for (int i = 0; i < n7; i++)
			{
				p += in.toHexDES(result.permutation[i]);
				p += " ";
				if (i % 4 == 0)
				{
					p += "\n";
				}
			}
			DESPermutation->Text = marshal_as<String^, string>(p);
		}
	}

	private: System::Void DESDecryptButt_Click(System::Object^ sender, System::EventArgs^ e) {
		DESerror->Text = marshal_as<String^, string>("");
		string ciphertext = marshal_as<string, String^>(DESCiphertext->Text);
		string key = marshal_as<string, String^>(DESKey->Text);
		if (ciphertext.empty() || key.empty()) { DESerror->Text = marshal_as<String^, string>("ERROR: Missing Fields!"); return; }
		if (key.size() != 16) { DESerror->Text = marshal_as<String^, string>("ERROR: Key not 64 bits!"); return; }
		if (ciphertext.size() != 16) { DESerror->Text = marshal_as<String^, string>("ERROR: ciphertext not 64bits!"); return; }
		
		if (ValidHexInput(ciphertext)&& ValidHexInput(key))
		{
			DES in(key);
			DESRes result = in.decryptDES(in.fromHexDES(ciphertext));
			string res = in.toHexDES(result.finalRes);
			DESPlaintext->Text = marshal_as<String^, string>(res);
			int n1 = result.keys.size();
			int n2 = result.L.size();
			int n3 = result.R.size();
			int n4 = result.expansion.size();
			int n5 = result.keyMixing.size();
			int n6 = result.substitution.size();
			int n7 = result.permutation.size();

			string k = "Round Keys: ";
			for (int i = 0; i < n1; i++)
			{
				k += in.toHexDES(result.keys[i]);
				k += " ";
				if (i % 4 == 0)
				{
					k += "\n";
				}
			}
			RoundKey->Text = marshal_as<String^, string>(k);

			string l = "Left: ";
			for (int i = 0; i < n2; i++)
			{
				l += in.toHexDES(result.L[i]);
				l += " ";
				if (i % 4 == 0)
				{
					l += "\n";
				}
			}
			DESLeft->Text = marshal_as<String^, string>(l);

			string r = "Right: ";
			for (int i = 0; i < n3; i++)
			{
				r += in.toHexDES(result.R[i]);
				r += " ";
				if (i % 4 == 0)
				{
					r += "\n";
				}
			}
			DESRight->Text += marshal_as<String^, string>(r);

			string exp = "Expansion: ";
			for (int i = 0; i < n4; i++)
			{
				exp += in.toHexDES(result.expansion[i]);
				exp += " ";
				if (i % 4 == 0)
				{
					exp += "\n";
				}
			}
			DESExpansion->Text = marshal_as<String^, string>(exp);

			string km = "Key Mixing: ";
			for (int i = 0; i < n5; i++)
			{
				km += in.toHexDES(result.keyMixing[i]);
				km += " ";
				if (i % 4 == 0)
				{
					km += "\n";
				}
			}
			DESKeyMixing->Text = marshal_as<String^, string>(km);

			string s = "Substitution: ";
			for (int i = 0; i < n6; i++)
			{
				s += in.toHexDES(result.substitution[i]);
				s += " ";
				if (i % 4 == 0)
				{
					s += "\n";
				}
			}
			DESSubstitution->Text = marshal_as<String^, string>(s);

			string p = "Permutation: ";
			for (int i = 0; i < n7; i++)
			{
				p += in.toHexDES(result.permutation[i]);
				p += " ";
				if (i % 4 == 0)
				{
					p += "\n";
				}
			}
			DESPermutation->Text = marshal_as<String^, string>(p);
		}
	}
};
}
