#include <iostream>
#include<cmath>
using namespace std;
int tachSo(int x)
{
	int n = 0;
	int temp = x;
	while (temp != 0)
	{
		n = n + pow(temp % 10, int(log10(x)) + 1);
		temp /= 10;
	}
	return n;
}
bool kiemTraSoAmstrong(int x)
{
	if(x==tachSo(x)) return true;
	return false;
}
int main()
{
	int x;
	do {
		cout << "Nhap x = ";
		cin >> x;
		if (x <= 0) cout << "Moi ban nhap lai...";
	} while (x <= 0);
	if (kiemTraSoAmstrong(x) == true) cout << x << " la so Amstrong.";
	else cout << x << " khong la so Amstrong.";
}
