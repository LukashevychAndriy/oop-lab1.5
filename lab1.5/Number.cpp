#include "Number.h"
#include <iostream>

using namespace std;

void Number::setNumber(float number) {
	this->number = number;
}

Number Number::add(Number num1, Number num2) const {
	Number newNum;


	newNum.Init(num1.getNumber() + num2.getNumber());

	return newNum;
}

Number Number::multiply(Number num1, Number num2) const {
	Number newNum;

	newNum.Init(num1.getNumber() * num2.getNumber());

	return newNum;
}

void Number::Init(float number) {
	setNumber(number);
}

void Number::Read() {
	float number;
	cout << "¬вед≥ть значенн€ числа" << endl;
	cin >> number;

	Init(number);
}

void Number::Display() const {
	cout << toString() << endl;
}

string Number::toString() const {
	string str = to_string(getNumber());
	return str;
}