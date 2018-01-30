#include "Contact.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]//leave this as is
void Contact(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PEReader3::Contact s;
	Application::Run(%s);
}