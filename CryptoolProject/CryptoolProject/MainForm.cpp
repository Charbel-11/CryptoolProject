#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections;

[STAThread]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CryptoolProject::MainForm form;
	Application::Run(% form);
}