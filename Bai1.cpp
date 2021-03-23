#include <iostream>
using namespace std;
int daoSo(int x)
{
	int n = 0;
	while (x != 0)
	{
		n = n * 10 + x % 10;
		x /= 10;
	}
	return n;
}
int main()
{
	int x;
	do {
		cout << "Nhap x = ";
		cin >> x;
		if (x <= 0) cout << "Moi ban nhap lai...";
	} while (x <= 0);
	cout << "So dao cua " << x << " la: " << daoSo(x);
}
