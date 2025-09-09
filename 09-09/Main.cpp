#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
	Fraction a, b;
	a.Init(1, 2);
	b.Init(3, 4);

	a.Print(); b.Print();

	Fraction result;
	result = a.Add(b);
	result.Print();

	result = a.Sub(b);
	result.Print();

	result = a.Mul(b);
	result.Print();

	result = a.Div(b);
	result.Print();
	

	return 0;
}