#include <iostream>
#include<cmath>
using namespace std;
void NhapMang(int a[100], int& n)
{
	cout << "Nhap so luong phan tu muon thuc hien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " \t\t\t";
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
//
void XuatMang(int a[100], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << "	  ";
	}
}
//
bool KiemTraMangDuong(int a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) return false;
	}
	return true;
}
int main()
{
	int a[100], n;
	//Viết chương trình kiểm tra mảng có toàn dương hay không ? int n, a[100];
	NhapMang(a, n);
	XuatMang(a, n);
	if (KiemTraMangDuong(a, n) == true) cout << "\nLa mang toan duong.";
	else cout << "\nKhong la mang toan duong.";
}
