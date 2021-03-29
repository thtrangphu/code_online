#include <iostream>
using namespace std;
void nhapMang(int a[], int& n)
{
	do {
		cout << "Nhap so luong phan tu muon thuc hien: ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << " \t\t\t";
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
//
void xuatMang(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << "	  ";
	}
}
void mangNguoc(int a[], int n)
{
	int temp[20];
	int dem = 0;
	for (int i = n-1; i >=0; i--)
	{
		temp[dem] = a[i];
		dem++;
	}
	dem = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = temp[dem];
		dem++;
	}
}
void main()
{
	//Cho mảng 1 chiều các số nguyên.Viết chương trình đảo ngược mảng.VD:  1 5 6 2 = > 2 6 5
	int a[20],b[20], n,m;
	nhapMang(a, n);
	mangNguoc(a, n);
	xuatMang(a, n);
}
