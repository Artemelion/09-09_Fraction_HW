#include "Fraction.h"
#include <iostream>
using namespace std;

void Fraction::Init()
{
	cout << "Enter numerator: ";
	cin >> numerator;
	cout << "Enter denominator: ";
	cin >> denominator;
}

void Fraction::Init(int _numerator, int _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
}

void Fraction::Print()
{
	cout << numerator << "/" << denominator << endl;
}

Fraction Fraction::Add(Fraction& b)
{
	Fraction result;
	result.numerator = this->numerator * b.denominator + b.numerator * this->denominator;
	result.denominator = this->denominator * b.denominator;
	return result;
}

Fraction Fraction::Sub(Fraction& b)
{
	Fraction result;
	result.numerator = this->numerator * b.denominator - b.numerator * this->denominator;
	result.denominator = this->denominator * b.denominator;
	return result;
}

Fraction Fraction::Mul(Fraction& b)
{
	Fraction result;
	result.numerator = this->numerator * b.numerator;
	result.denominator = this->denominator * b.denominator;
	return result;
}

Fraction Fraction::Div(Fraction& b)
{
	Fraction result;
	result.numerator = this->numerator * b.denominator;
	if (this->denominator == 0 || b.denominator == 0) 
	{
		cout << "Error: No need zero in denominator plz" << endl;
	}
	else {
		result.denominator = this->denominator * b.numerator;
	}

return result;

}



