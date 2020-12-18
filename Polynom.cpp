#include "Polynom.h"
#include <math.h>
#include <limits>
#include <iostream>
#include <string>



Polynom::Polynom() {
    this->size = 0;
}

Polynom::Polynom(vector<int> &coeffs) {
    this->coeffs = coeffs;
    this->size = coeffs.size();
}

double Polynom::getMax(double x1, double x2) {
    double max = DBL_MIN;
    double nMax;

    for (double i = x1; i <= x2+0.01; i+=0.01)
    {
        nMax = this->calc(i);
        if (nMax > max) max = nMax;
    }

    return max;
}

double Polynom::getMin(double x1, double x2) {
    double min = DBL_MAX;
    double nMin;

    for (double i = x1; i <= x2 + 0.01; i += 0.01)
    {
        nMin = this->calc(i);
        if (nMin < min) min = nMin;
    }

    return min;
}

double Polynom::calc(double x) {
    double sum = 0;
    for (size_t i = 0; i < this->size; i++)
    {
        sum += pow(x, this->size - i - 1) * this->coeffs[i];

    }
    return sum;
}

string Polynom::returnType() {
    return "Polynomial";
}