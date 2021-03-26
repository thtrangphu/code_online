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
int Min(int a[100], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min) min = a[i];
	}
	return min;
}
int Max(int a[100], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	return max;
}
int main()
{
	//Cho dãy số nguyên.Viết chương trình tìm đoạn[a, b] sao cho đoạn này chứa mọi giá trị trong mảng.
	int n, a[100];
	NhapMang(a, n);
	XuatMang(a, n);
	cout << "\nDoan can tim la: [" << Min(a, n) << "," << Max(a, n) << "]";
}
