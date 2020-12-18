#include "Exponenta.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <limits>
#include <iostream>
#include <string>


Exponenta::Exponenta() {
	this->k = 0;
	this->c = 0;
}
Exponenta::Exponenta(double k) {
	this->k = k;
}
Exponenta::Exponenta(double k, double c) {
	this->k = k;
	this->c = c;
}

double Exponenta::getMax(double x1, double x2) {
	if (k>0)
	{
		return this->calc(x2);
	}
	else {
		return this->calc(x1);
	}
}

double Exponenta::getMin(double x1, double x2) {
	if (k > 0)
	{
		return this->calc(x1);
	}
	else {
		return this->calc(x2);
	}
}

double Exponenta::calc(double x) {
	return pow(M_E, x) * k + c;
}

string Exponenta::returnType() {
	return "Exponenta";
}