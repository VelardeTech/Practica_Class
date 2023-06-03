#include "Suma.h"
#include "resta.h"
int main() {
	Console::Title = "                                    CLASES";
	system("color 70");
	Console::SetWindowSize(55, 25);
	Suma num1(12, 4);
	resta num2(14, 2);
	num1.sumar();
	num2.restar();

	_getch(); return 0;
}