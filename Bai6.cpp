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
bool KiemTraSoNguyenTo(int n)
{

	if (n < 2)	return false;
	else if (n == 2) return true;
	else if (n > 2)
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)	return false;
		}
	}
	return true;
}

bool KiemTraSieuNguyenTo(int n)
{
	while (n != 0)
	{
		if (KiemTraSoNguyenTo(n % 10) == false) return false;
		else n /= 10;
	}
	return true;
}
void XuatSoSieuNguyenTo(int a[100], int n)
{
	cout << "\nCac so sieu nguyen to la: ";
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSieuNguyenTo(a[i]) == true)
		{
			cout << a[i] << " ";
			dem++;
		}
	}
	if (dem == 0) cout << "Khong co :((";
}
int main()
{
	int a[100], n;
	//Viết chương trình in ra các số siêu nguyên tố có trong mảng.
	NhapMang(a, n);
	XuatMang(a, n);
	XuatSoSieuNguyenTo(a, n);
}
