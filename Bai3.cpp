#include <iostream>
#include<cmath>
using namespace std;
bool kiemTraSoChinhPhuong(int x)
{
	if(sqrt(x)==sqrt(float(x))) return true;
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
	if (kiemTraSoChinhPhuong(x) == true) cout << x << " la so chinh phuong.";
	else cout << x << " khong la so chinh phuong.";
}
