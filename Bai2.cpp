
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
bool KiemTraSoHoanThien(int x)
{
	int s = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0) s += i;
	}
	if (s == x) return true;
	return false;
}
void Them(int a[], int& n, int vt, int x)
{
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = x;
	n++;
}
void ThemTruocHoanThien(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoHoanThien(a[i]) == true)
		{
			Them(a, n, i, 0);
			i++;
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
	cout << "Mang sau khi them la: "<<endl;
	//Viết chương trình thêm phần tử 0 vào trước các số hoàn thiện
	ThemTruocHoanThien(a, n);
	XuatMang(a, n);
}

