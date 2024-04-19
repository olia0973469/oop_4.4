// Hyperbola.h

#pragma once
#include "Function.h"

class Hyperbola :
	public Function
{
public:
	Hyperbola(double a, double b);
	double count(double x) const override;
};
