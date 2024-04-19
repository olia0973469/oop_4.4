// Ellipse.cpp

#include "Ellipse.h"

double Ellipse::count(double x) const
{
	double y = b * sqrt((x * x) / (a * a));
	return y;
}

Ellipse::Ellipse(double a, double b) : Function(a, b) {}
