
#include <iostream>
#include <cmath>
using namespace std;

int largestCommonDivisor(int a, int b)
{
	for (int i = (a + b); i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0) return i;
	}
}
int largestCommonMultiple(int a, int b)
{
	return (a * b) / largestCommonDivisor(a, b);
}
int main()
{
	int a = 12, b = 4;
	cout << "UCLN: " << largestCommonDivisor(a, b) << endl;
	cout << "BCNN: " << largestCommonMultiple(a, b);
}