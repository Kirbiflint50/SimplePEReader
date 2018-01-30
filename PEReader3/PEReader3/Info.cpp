#include "Info.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]//leave this as is
void Info(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PEReader3::Info s;
	Application::Run(%s);
}