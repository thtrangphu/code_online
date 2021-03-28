
#include <iostream>
using namespace std;
void NhapMang(int a[], int& n)
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
void XuatMang(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << "	  ";
	}
}
int daoSo(int x)
{
	int n = 0;
	while (x != 0)
	{
		n = n * 10 + x % 10;
		x /= 10;
	}
	return n;
}
bool kiemTraSoDoiXung(int x)
{
	if (x == daoSo(x)) return true;
	return false;
}
void Xoa(int a[], int &n, int vt)
{
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i+1];
	}
	n--;
}
void XoaSoDoiXung(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (kiemTraSoDoiXung(a[i]) == true)
		{
			Xoa(a, n, i);
			i=0;
		}
	}
}
int main()
{
	int n;
	int a[20];
	NhapMang(a, n);
	XuatMang(a, n);
	cout << endl;
	XoaSoDoiXung(a, n);
	cout << endl;
	cout << "Mang sau khi xoa la :" << endl;
	XuatMang(a, n);
}

