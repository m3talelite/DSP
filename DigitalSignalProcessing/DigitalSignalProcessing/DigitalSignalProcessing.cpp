// DigitalSignalProcessing.cpp : Defines the entry point for the console application.
// V0.2 By Jelle Braat
//

#include "stdafx.h"
#include <iostream>
#include "ComplexNumber.h"


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ComplexNumber i(0, 1);

	int x;

	ComplexNumber z1(3, 4);
	ComplexNumber z2(2, 8);

	cout << z1 << " + " << z2 << endl;
	cout << z1 + z2 << endl;

	cout << z1 << " - " << z2 << endl;
	cout << z1 - z2 << endl;

	cout << z1 << " * " << z2 << endl;
	cout << z1 * z2 << endl;

	//Not Working yet, formula is wrong.
	cout << "Not working yet: ";
	cout << z1 << " / " << z2 << endl;
	cout << z1 / z2 << endl;

	cout << "abs = |" << z1 << "|" << endl;
	cout << z1.abs();

	cin >> x;
	return 0;
}

