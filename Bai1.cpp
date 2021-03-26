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
int LeCuoiCung(int a[100], int n)
{
	int check = true;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] % 2 != 0) return a[i];
		check = false;
	}
	if (check == false) cout << "Khong ton tai :((";
}
int main()
{
	int n, a[100];
	NhapMang(a, n);
	XuatMang(a, n);
	cout<<"\nSo le cuoi cung la: "<<LeCuoiCung(a, n);
	
}
