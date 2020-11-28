#include "MyForm.h"
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LAB32::MyForm form;
	Application::Run(% form);
}
