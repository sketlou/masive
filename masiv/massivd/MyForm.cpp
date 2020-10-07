#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm::MyForm form;
	Application::Run(% form);
}
int a;
int* random = new int[a];
System::Void MyForm::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	a = Convert::ToInt32(numericUpDown1->Value);
	const int n = a;
	srand(time(NULL));
	for (int e = 0; e < a; e++)
	{
		random[e] = rand();	
		textBox1->Text +=  System::Convert::ToString(random[e] +"\r\n");
	}
	
}
System::Void MyForm::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	memset(&random[0], 0, sizeof(random));
	textBox1->Text = "";
}



