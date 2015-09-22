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

int main()
{

	return 0;
}


