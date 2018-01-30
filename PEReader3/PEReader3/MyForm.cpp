#include "MyForm.h"

//#include <windows.h>
////#include "resource.h"
//#include <Commdlg.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]//leave this as is
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PEReader3::MyForm s;
	Application::Run(%s);
}