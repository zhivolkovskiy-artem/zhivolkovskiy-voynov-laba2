#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

float realPi = 3.14159265358979323846264338327950288419716939937510;

float pi(float epsilon)
{
	const float PI = 3.14159265358979323846;
	float pi = 0;
	for (int k = 0; ; k++)
	{
		if (k%2 == 0) 
			pi += 4/(2*(float)k+1);
		else
			pi -= 4/(2*(float)k+1);
		if (abs(PI - pi) <= epsilon) break;
	}
	return pi;
}

void assert (float tochnost)
{
	if (abs(realPi - pi(tochnost))<=tochnost)
		cout << "OK" << endl;
	else 
		cout << "FAIL" << endl;
}

int main()
{
	assert(0.1);
	assert(0.01);
	assert(0.001);
	assert(0.0001);
	assert(0.0000002);
	assert(0.0000000000029);
	return 0;
}


