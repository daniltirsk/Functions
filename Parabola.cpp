#include "Parabola.h"
#include <math.h>
#include <limits>
#include <iostream>
#include <string>

Parabola::Parabola() {
	this->size = 0;
}

Parabola::Parabola(vector<int>& coeffs) {
	this->coeffs = coeffs;
	this->size = coeffs.size();
	if (this->size != 3)
	{
		throw ParabolaException();
	}
}

double Parabola::getMax(double x1, double x2) {
	double max;

	if (this->coeffs[0]>0)
	{
		max = this->calc(x1) > this->calc(x2) ? this->calc(x1) : this->calc(x2);
		return max;
	}
	else {
		double x = -this->coeffs[1] / (2 * this->coeffs[0]);
		if (x > x2 || x < x1) {
			max = DBL_MIN;
			double nMax;

			for (double i = x1; i <= x2 + 0.01; i += 0.01)
			{
				nMax = this->calc(i);
				if (nMax > max) max = nMax;
			}

			return max;
		}
		else {
			return this->calc(x);
		}
	}
}
double Parabola::getMin(double x1, double x2) {
	double min;

	if (this->coeffs[0] < 0)
	{
		min = this->calc(x1) < this->calc(x2) ? this->calc(x1) : this->calc(x2);
		return min;
	}
	else {
		double x = -this->coeffs[1] / (2 * this->coeffs[0]);
		if (x > x2 || x < x1) {
			min = DBL_MAX;
			double nMin;

			for (double i = x1; i <= x2 + 0.01; i += 0.01)
			{
				nMin = this->calc(i);
				if (nMin < min) min = nMin;
			}

			return min;
		}
		else {
			return this->calc(x);
		}
	}
}
double Parabola::calc(double x) {
	return this->coeffs[0] * x * x + this->coeffs[1] * x + this->coeffs[2];
}
string Parabola::returnType() {
	return "Parabola";
}