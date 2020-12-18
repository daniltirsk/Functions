#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <fstream>
#include <vector>

#include "Polynom.h"
#include "Parabola.h"
#include "Hyperbola.h"
#include "Exponenta.h"


using namespace std;

int main() {
	vector<int> polcoeffs = { 2, 2, 2, 10};
	Polynom* pl = new Polynom(polcoeffs);

	vector<int> prcoeffs = { -1, 1, 1};
	Parabola* pr = new Parabola(prcoeffs);
	Hyperbola* h = new Hyperbola(5);
	Exponenta* e = new Exponenta(5, 5);

	vector<Function*> funcs = { pl,pr,h,e };

	for (size_t i = 0; i < funcs.size(); i++)
	{
		cout << endl;
		cout << funcs[i]->returnType() << endl;
		cout << funcs[i]->calc(1) << endl;
		cout << funcs[i]->getMax(0, 2) << endl;
		cout << funcs[i]->getMin(0, 2) << endl;
	}

	return 0;
}