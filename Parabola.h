#pragma once

#ifndef PARABOLA_H
#define PARABOLA_H

#include "Function.h"
#include <vector>

using namespace std;

class ParabolaException {};

class Parabola : public Function
{
private:
    vector<int> coeffs;
    int size;
public:
    Parabola();

    Parabola(vector<int>& coeffs);

    double getMax(double x1, double x2);
    double getMin(double x1, double x2);
    double calc(double x);
    string returnType();
};

#endif