#include "MyForm1.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

void main() {
	srand(time(NULL));
	Application::Run(gcnew Ejercicio2RGBWindows::MyForm1);
}


