#pragma once

#ifndef FUNCTION_H
#define FUNCTION_H


#include <string>
using namespace std;

class Function {

public:
    virtual double getMax(double x1,double x2) = 0;
    virtual double getMin(double x1,double x2) = 0;
    virtual double calc(double x) = 0;
    virtual string returnType() = 0;
};

#endif