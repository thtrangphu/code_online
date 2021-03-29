
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
void GopMang(int a[], int b[], int n1, int &n2)
{
	int c[40];
	for (int i = 0; i < n2; i++)
	{
		c[i] = b[i];
	}
	int dem = n2;
	for (int i = 0; i <  n1; i++)
	{
		c[dem] = a[i];
		dem++;
	}
	n2 = n1 + n2;
	dem = 0;
	for (int i = 0; i <  n2; i++)
	{
		b[i] = c[dem];
		dem++;
	}
}
int main() {
	int a[20], b[20];
	int n1, n2;
	cout << "Nhap mang 1: " << endl;
	NhapMang(a, n1);
	cout << "Nhap mang 2: " << endl;
	NhapMang(b, n2);
	cout << "\nXUAT MANG 1: \n";
	XuatMang(a, n1);
	cout << "\nXUAT MANG 2: \n";
	XuatMang(b, n2);
	GopMang(a, b, n1, n2);
	cout << "\nMang sau khi gop la: " << endl;
	XuatMang(b, n2);
	return 0;
}
