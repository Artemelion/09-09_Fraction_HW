#pragma once
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	void Init(); // from keyboard
	void Init(int _numerator, int _denominator);
	void Print();

	Fraction Add(Fraction& b); 
	Fraction Sub(Fraction& b); 
	Fraction Mul(Fraction& b);
	Fraction Div(Fraction& b); 

};

