#include "OptionalHeader.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]//leave this as is
void Optional(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PEReader3::OptionalHeader s;
	Application::Run(%s);
}