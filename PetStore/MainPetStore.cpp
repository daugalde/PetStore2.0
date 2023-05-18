#include "MainPetStore.h"

using namespace System;
using namespace System::Windows::Forms;
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PetStore::MainPetStore form;
	Application::Run(% form);
}