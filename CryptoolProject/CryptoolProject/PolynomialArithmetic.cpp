#include "PolynomialArithmetic.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CryptoolProject::PolynomialArithmetic form;
    Application::Run(% form);
}

