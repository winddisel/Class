#pragma once
using namespace std;
class Fraction
{
public:
	Fraction();
	Fraction CalcPlus(Fraction object1, Fraction object2)
	{
		Fraction object3;
		object3.numerator = object1.numerator + object2.numerator;
		object3.denominator = object1.denominator + object2.denominator;
		return object3;
	}

	Fraction CalcMinus(Fraction object1, Fraction object2)
	{
		Fraction object3;
		object3.numerator = object1.numerator - object2.numerator;
		object3.denominator = object1.denominator - object2.denominator;
		return object3;
	}

	Fraction CalcMultiply(Fraction object1, Fraction object2)
	{
		Fraction object3;
		object3.numerator = object1.numerator * object2.numerator;
		object3.denominator = object1.denominator * object2.denominator;
		return object3;
	}

	Fraction CalcDivision(Fraction object1, Fraction object2)
	{
		Fraction object3;
		object3.numerator = object1.numerator * object2.denominator;
		object3.denominator = object1.denominator * object2.numerator;
		return object3;
	}

	void FrRandom()
	{
		numerator = rand()% 11;
		denominator = rand() % 11;

	}
	void Print2(Fraction object1, Fraction object2)
	{
		cout << endl << "  " << object1.numerator << "                " << object2.numerator;
		cout<< endl << "  ---" << "              ---" << endl;
		cout<<"  " << object1.denominator<<"                "<<object2.denominator << endl;
	}

	void Print()
	{
		cout <<endl<<"  "<<numerator << endl << " ---" << endl<< "  " <<denominator;
	}
	~Fraction();

private:
	int numerator;
	int denominator;
};

Fraction::Fraction()
{
	numerator = 0;
	denominator = 0;
}

Fraction::~Fraction()
{
	
}