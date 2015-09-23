#include <iostream>

using namespace std;

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

	return 0;

}