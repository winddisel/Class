#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;
int main()
{

	Fraction fr1;
	fr1.Print();
	fr1.FrRandom();
	fr1.Print();

	Fraction fr2;

	fr2.FrRandom();
	fr2.Print();
	
	Fraction fr3;
	fr3 = fr3.CalcPlus(fr1, fr2);
	fr3.Print();

	fr1 = fr1.CalcMinus(fr3, fr2);
	fr1.Print();

	fr1 = fr1.CalcDivision(fr3, fr2);
	fr1.Print();

	/*Википедиа: числитель первой дроби умножить на числитель второй дроби 
	и их произведение записать в числитель НОВОЙ дроби;*/

system("pause>>NULL");
return 0;
}