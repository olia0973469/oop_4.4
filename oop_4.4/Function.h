// Function.h

#pragma once
#include <math.h>
#include <corecrt_math_defines.h>


class Function
{
protected:
	double a;
	double b;
public:

	Function(double a, double b) : a(a), b(b) {}
	virtual double count(double x) const = 0;
	virtual ~Function() {}
};
