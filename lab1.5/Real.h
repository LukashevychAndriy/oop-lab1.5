#pragma once
#include <string>
#include "Number.h"

class Real
{
private:
	Number number;
public:
	Number getNumber() const { return this->number; };
	void setNumber(Number);

	Real powReal(Real, Real) const;
	Real logReal(Real) const;

	void Init(Number);
	void Read();
	void Display() const;
	std::string toString() const;
};
