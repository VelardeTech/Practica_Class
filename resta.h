#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
class resta {
private:
	int n1, n2;
public:
	void restar();
	resta(int, int);
};

resta::resta(int _n1, int _n2) {
	n1 = _n1;
	n2 = _n2;
}

void resta::restar() {
	cout << "La resta es: " << n1 - n2 << endl;
}