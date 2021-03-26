#include <iostream>
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
bool KiemTraMangTangDan(int a[100], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for(int j=i+1;j<n;j++)
		if (a[i] > a[j]) return false;
	}
	return true;
}
int main()
{
	int a[100], n;
	//Viết chương trình kiểm tra mảng có tăng dần hay không ?
	NhapMang(a, n);
	XuatMang(a, n);
	if (KiemTraMangTangDan(a, n) == true) cout << "\nMang tang dan.";
	else cout << "\nKhong la mang tang dan.";
}
