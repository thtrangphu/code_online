#include <iostream>
#include<cmath>
using namespace std;
bool kiemTraSoNguyenTo(int n)
{
	if(n<2) return false;
	else if (n > 2)
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0) return false;
		}
	}
	return true;
}
int main()
{
	int n;
	do {
		cout << "Nhap n = ";
		cin >> n;
		if (n <= 0) cout << "Moi ban nhap lai...";
	} while (n <= 0);
	if (kiemTraSoNguyenTo(n) == true) cout << n << " la so nguyen to.";
	else cout << n << " khong la so nguyen to.";
}
