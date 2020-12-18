#pragma once

#ifndef EXPONENTA_H
#define EXPONENTA_H

#include "Function.h"
#include <vector>

using namespace std;

class ExponentaException {};

class Exponenta : public Function
{
private:
    double k = 0;
    double c = 0;
public:
    Exponenta();
    Exponenta(double k);
    Exponenta(double k, double c);

    double getMax(double x1, double x2);
    double getMin(double x1, double x2);
    double calc(double x);
    string returnType();
};

#endif