#include "Real.h"
#include <iostream>
#include <cmath>

using namespace std;

void Real::setNumber(Number number) {
	this->number = number;
}

Real Real::powReal(Real real1, Real real2) const {
	Real newReal;

	float num1 = real1.getNumber().getNumber();
	float num2 = real2.getNumber().getNumber();

	Number numForInit;
	numForInit.Init(pow(num1, num2));

	newReal.Init(numForInit);

	return newReal;
}

Real Real::logReal(Real real) const {
	Real newReal;

	float num = real.getNumber().getNumber();

	Number numForInit;
	numForInit.Init(log(num));

	newReal.Init(numForInit);

	return newReal;
}

void Real::Init(Number number) {
	setNumber(number);
}

void Real::Read() {
	Number number;
	number.Read();
	Init(number);
}

void Real::Display() const {
	cout << toString() << endl;
}

string Real::toString() const {
	string str = getNumber().toString();
	return str;
}