#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SimpleCalculator01::MyForm calcForm01;
	Application::Run(% calcForm01);

	return 0;
}