#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab3JoséDeLeón1170419::MyForm form;
	//Lab3JoséDeLeón1170419::MyForm form;
	Application::Run(% form);
	return 0;
}
