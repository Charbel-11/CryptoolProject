#pragma once
#include "AES.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace CryptoolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdvancedEncryptionStandard
	/// </summary>
	public ref class AdvancedEncryptionStandard : public System::Windows::Forms::Form
	{
		Form^ parent;
	public:
		AdvancedEncryptionStandard(Form^ _parent)
		{
			parent = _parent;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdvancedEncryptionStandard()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// AdvancedEncryptionStandard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 395);
			this->Name = L"AdvancedEncryptionStandard";
			this->Text = L"AdvancedEncryptionStandard";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
