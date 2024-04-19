// Hyperbola.cpp

#include "Hyperbola.h"

double Hyperbola::count(double x) const
{
	double y = -b * sqrt((x * x) / (a * a));
	return y;
}

Hyperbola::Hyperbola(double a, double b) : Function(a, b) {}
