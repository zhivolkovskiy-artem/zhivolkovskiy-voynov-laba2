#include <iostream>
#include "stdafx.h"

using namespace std;

void assert(int number, int test)
{
	int result = имяфункции(number);
	if (test == result)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "FAIL: " << number << endl;
	}
}

int numberOfZeros(int x)
{
	int ans=0;
	while (x)
	{
		ans+=(x/5);
		x/=5;
	}
	return ans;
}

int main()
{
	assert(0, 0);
	assert(1, 0);
	assert(12, 2);
	assert(25, 6);
	assert(9, 1);
	assert(16, 3);
	assert(30, 7);
	assert(255, 63);
	assert(666, 165);
	assert(54404, 13598);
	return 0;

}