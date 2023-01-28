#include "OknoGlowne.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array< String^ >^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	zadanie6::OknoGlowne forma;
	Application::Run(% forma);

	return 0;
}
