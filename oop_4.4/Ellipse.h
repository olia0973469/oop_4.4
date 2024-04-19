// Ellipse.h

#pragma once
#include "Function.h"

class Ellipse :
	public Function
{
public:
	Ellipse(double a, double b);
	double count(double x) const override;
};
