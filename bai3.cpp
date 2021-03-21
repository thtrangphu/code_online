
#include <iostream>
#include <cmath>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 4, b = 5;
	cout << a << " " << b<<endl;
	swap(a, b);
	cout << a << " " << b;

}