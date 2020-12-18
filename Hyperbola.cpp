#include "Hyperbola.h"
#include <math.h>
#include <limits>
#include <iostream>
#include <string>

Hyperbola::Hyperbola() {
	this->k = 0;
	this->c = 0;
}
Hyperbola::Hyperbola(double k) {
	this->k = k;
	this->c = 0;
}
Hyperbola::Hyperbola(double k, double c) {
	this->k = k;
	this->c = c;
}

double Hyperbola::getMax(double x1, double x2) {
	if (this->k>0)
	{
		if (x1 == 0)
		{
			return INFINITY;
		}

		if (x1 > 0) {
			return this->calc(x1);
		}
		else {
			if (x2 > 0)
			{
				return this->calc(x2);
			}
			else
			{
				return this->calc(x1);
			}
		}
	}
	else {
		if (x2 == 0)
		{
			return INFINITY;
		}
		if (x1 > 0) {
			return this->calc(x2);
		}
		else {
			if (x2 > 0)
			{
				return this->calc(x1);
			}
			else
			{
				return this->calc(x2);
			}
		}
	}
}
double Hyperbola::getMin(double x1, double x2) {
	if (this->k > 0)
	{
		if (x1 >= 0) {
			return this->calc(x2);
		}
		else {
			if (x2 > 0)
			{
				return this->calc(x1);
			}
			else
			{
				return this->calc(x2);
			}
		}
	}
	else {
		if (x1 == 0)
		{
			return -INFINITY;
		}
		if (x1 > 0) {
			return this->calc(x1);
		}
		else {
			if (x2 > 0)
			{
				return this->calc(x2);
			}
			else
			{
				if (x1 == 0)
				{
					return INFINITY;
				}
				return this->calc(x1);
			}
		}
	}
}

double Hyperbola::calc(double x) {
	return this->k/x + this->c;
}

string Hyperbola::returnType() {
	return "Hyperbola";
}