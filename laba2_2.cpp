#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

double pi(double epsilon)
{
	const double PI = 3.14159265358979323846;
	double pi = 0;
	for (int k = 0; ; k++)
	{
		pi += 4*pow(-1, k)/(2*k+1);
		if (abs(PI - pi) <= epsilon) break;
	}
	return pi;
}

int main()
{
	
	return 0;
}

