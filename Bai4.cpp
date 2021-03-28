
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

int DemVeTruoc(int a[], int n, int vt)
{
	int dem = 0;
	for (int i = vt; i >= 0; i--)
	{
		if (a[i] == a[vt]) dem++;
	}
	return dem;
}
void KiemTraSoLan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (DemVeTruoc(a,n,i) == 1)
		{
			//Xuat so lan
			for (int j = i; j < n; j++)
			{
				if (a[i]==a[j]) dem++;
			}
			cout << a[i] << " lap " << dem << " lan." << endl;
			dem = 0;
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
	//Dem so lan xuat hien cua tung phan tu trong mang
	KiemTraSoLan(a, n);
}

