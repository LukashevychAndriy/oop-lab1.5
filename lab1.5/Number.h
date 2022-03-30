#pragma once
#include <string>
class Number
{
private:
	float number;
public:
	float getNumber() const { return this->number; };
	void setNumber(float);

	Number add(Number, Number) const;
	Number multiply(Number, Number) const;

	void Init(float);
	void Read();
	void Display() const;
	std::string toString() const;
};
