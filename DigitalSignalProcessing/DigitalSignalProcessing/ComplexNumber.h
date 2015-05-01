#ifndef ComplexNumber_H
#define ComplexNumber_H

#include <string>
#include <iostream>

class ComplexNumber{
public:
	int a, b, c, d;

	ComplexNumber();
	ComplexNumber(int a, int b);
	int getA();
	int getB();
	int getC();
	int getD();

	std::string toString();

	ComplexNumber operator+(const ComplexNumber& compNum);
	ComplexNumber operator-(const ComplexNumber& compNum);
	ComplexNumber operator*(const ComplexNumber& compNum);
	ComplexNumber operator/(const ComplexNumber& compNum);

	double abs();
	int Re();
	int Im();

	friend std::ostream& operator<<(std::ostream& stream, const ComplexNumber& compNum);

//	ComplexNumber& operator+=(const ComplexNumber& compNum);
};

#endif