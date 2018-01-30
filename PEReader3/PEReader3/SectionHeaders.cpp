#include "SectionHeaders.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]//leave this as is
void Sections(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PEReader3::SectionHeaders s;
	Application::Run(%s);
}