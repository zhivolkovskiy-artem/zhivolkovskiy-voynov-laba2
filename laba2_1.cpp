#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

long long fact(long long n)
{
	if (n == 0) return 1;
	return n*fact(n - 1);
}

double sinus(double x, double epsilon)
{
	double sinus = 0;
	for (int k = 0; ; k++)
	{
		sinus += pow(-1, k)*pow(x, 2 * k + 1) / fact(2 * k + 1);
		if (abs(sinus - sin(x)) <= epsilon) break;
	}
	return sinus;
}

void assert (double angle, double tochnost)
{
	if (abs(sin(angle) - sinus(angle, tochnost)) <= tochnost)
		cout << "good" << endl;
	else
		cout << "bad" << endl;
}


int main()
{
	const double Pi = 3.14159265358979323846;
	assert (Pi/12, 0.00001);
	assert (Pi/6, 0.0000001);
	assert (Pi/4, 0.0000001);
	assert (Pi/3, 0.00001);
	assert (Pi/2, 0.0000001);
	return 0;
}

