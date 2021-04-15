//2. Viết chương trình dùng con trỏ quản lí mảng n phần tử.
//Xuất các phần tử là số nguyên tố
#include <iostream>
using namespace std;
void nhap(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> *(p + i);
	}
}
bool kiemTraNguyenTo(int x)
{
	if (x < 2) return false;
	if (x > 2)
	{
		for (int i = 2; i <= sqrt(x); i++)
		{
			if (x % i == 0) return false;
		}
	}
	return true;
}
void xuatNguyenTo(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemTraNguyenTo(*(p + i)) == true) cout << *(p + i) << " ";
	}
}
int main()
{
	int n;
	int* p = NULL;
	cout << "Nhap slpt: ";
	do {
		cin >> n;
		if (n < 0) cout << "Nhap sai!!Moi ban nhap lai..";
	} while (n < 0);
	p = new int[n];
	nhap(p, n);
	cout << "\nCac so nguyen to trong mang la: ";
	xuatNguyenTo(p, n);
}
