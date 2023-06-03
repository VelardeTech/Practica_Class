#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
class Suma{
private:
	int n1, n2;
public:
	void sumar();
	Suma(int, int);
};

Suma::Suma(int _n1, int _n2) {
	n1 = _n1;
	n2 = _n2;
}

void Suma::sumar() {
	cout << "La suma es: " << n1 + n2 << endl;
}