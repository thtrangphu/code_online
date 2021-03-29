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
void xoa(int a[], int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void tachSoAm(int a[], int b[], int &n, int &m)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[m] = a[i];
			m++;
			xoa(a, n, i);
		}
	}
}
void main()
{
	//Cho 1 mảng các số nguyên a.Viết chương trình tách các số âm ra mảng b và xóa khỏi a
	int a[20],b[20], n,m;
	nhapMang(a, n);
	xuatMang(a, n);
	tachSoAm(a, b, n, m);
	cout << "\nMANG DUONG SAU KHI TACH LA: " << endl;
	xuatMang(a, n);
	cout << "\nMANG AM SAU KHI TACH LA: " << endl;
	xuatMang(b, m);
}
