#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab3Jos�DeLe�n1170419::MyForm form;
	//Lab3Jos�DeLe�n1170419::MyForm form;
	Application::Run(% form);
	return 0;
}
