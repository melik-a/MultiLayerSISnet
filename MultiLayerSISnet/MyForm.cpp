#include "MyForm.h"
using namespace System;
using namespace::Windows::Forms;
[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MultiLayerSISnet::MyForm form;
	Application::Run(% form);
}
