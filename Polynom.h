#pragma once

#ifndef POLYNOM_H
#define POLYNOM_H

#include "Function.h"
#include <vector>

using namespace std;


class Polynom : public Function
{
private:
    vector<int> coeffs;
    int size;
public:
    Polynom();

    Polynom(vector<int> &coeffs);

    double getMax(double x1,double x2);
    double getMin(double x1,double x2);
    double calc(double x);
    string returnType();
};

#endif