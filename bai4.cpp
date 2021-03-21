
#include <iostream>
#include <cmath>
using namespace std;

int birthYear(int nowyear, int age)
{
	cout << "Nhap nam hien tai: ";
	cin >> nowyear;
	cout << "Nhap tuoi: ";
	cin >> age;
	return nowyear - age;
}
int main()
{
	int a = 4, b = 5;
	cout << "Ban sinh nam: " << birthYear(a, b);

}