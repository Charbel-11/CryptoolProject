#include "AdvancedEncryptionStandard.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CryptoolProject::AdvancedEncryptionStandard form;
    Application::Run(% form);
}

