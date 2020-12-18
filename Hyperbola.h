#pragma once

#ifndef HYPERBOLA_H
#define HYPERBOLA_H

#include "Function.h"
#include <vector>

using namespace std;

class HyperbolaException {};

class Hyperbola : public Function
{
private:
    double k=0;
    double c=0;
public:
    Hyperbola();
    Hyperbola(double k);
    Hyperbola(double k, double c);

    double getMax(double x1, double x2);
    double getMin(double x1, double x2);
    double calc(double x);
    string returnType();
};

#endif