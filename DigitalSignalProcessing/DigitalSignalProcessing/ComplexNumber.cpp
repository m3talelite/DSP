#include "ComplexNumber.h"
#include <string>
#include <iostream>
#include <math.h>

ComplexNumber::ComplexNumber(){
	this->a = this->c = 0;
	this->b = this->d = 0;
}
ComplexNumber::ComplexNumber(int a, int b){
	this->a = this->c = a;
	this->b = this->d = b;
}
int ComplexNumber::getA(){
	return a;
}

int ComplexNumber::getB(){
	return b;
}

int ComplexNumber::getC(){
	return c;
}
int ComplexNumber::getD(){
	return d;
}

std::string ComplexNumber::toString(){
	return std::string(a + " + " + b);
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& compNum){
	return ComplexNumber(a+compNum.c, b+compNum.d);
}
ComplexNumber ComplexNumber::operator-(const ComplexNumber& compNum){
	return ComplexNumber(a - compNum.c, b - compNum.d);
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber& compNum){
	return ComplexNumber(a*compNum.c - b*compNum.d, a*compNum.d + b*compNum.c);
}
ComplexNumber ComplexNumber::operator/(const ComplexNumber& compNum){
	return ComplexNumber((a*compNum.c + b*compNum.d) / (pow(compNum.c, 2) + pow(compNum.d, 2)), (b*compNum.c - a*compNum.d) / (pow(compNum.c, 2) + pow(compNum.d, 2)));
}
double ComplexNumber::abs(){
	return sqrt(pow(a, 2) + pow(b, 2));
}
int ComplexNumber::Re(){
	return a;
}
int ComplexNumber::Im(){
	return b;
}

std::ostream& operator<<(std::ostream& stream, const ComplexNumber& compNum){
	stream << "(" << compNum.a << " + " << compNum.b << "i)";
	return stream;
}

//ComplexNumber& ComplexNumber::operator+=(const ComplexNumber& compNum){
//
//}