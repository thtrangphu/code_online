
#include <iostream>
using namespace std;
void NhapMang(int a[], int& n)
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
void XuatMang(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << "	  ";
	}
}
void Them(int c[], int& n, int vt, int x)
{
	for (int i = n; i > vt; i--)
	{
		c[i] = c[i - 1];
	}
	c[vt] = x;
	n++;
	XuatMang(c, n);
}
void GopMang(int a[], int b[], int c[], int n1, int n2, int& n)
{
	//Gán các phần tử của a cho c
	int i = 0;
	for (; i < n1; i++)
	{
		c[i] = a[i];
	}
	//Chèn các phần tử của b vào c
	i = 0;
	int j = 0;
	while (i < n2 - 1)
	{
		while (j < n1 + n2 - 1)
			if (b[i] <= c[j])
			{
				Them(c, n, i, b[i]);
				j++;
				i++;
			}
			else
			{
				j++;
			}
	}
	n = n1 + n2;
}
int main() {
	int a[20], b[20], c[40];
	int n1, n2, n;
	cout << "Nhap mang 1: " << endl;
	NhapMang(a, n1);
	cout << "Nhap mang 2: " << endl;
	NhapMang(b, n2);
	cout << "\nXUAT MANG 1: \n";
	XuatMang(a, n1);
	cout << "\nXUAT MANG 2: \n";
	XuatMang(b, n2);
	GopMang(a, b, c, n1, n2, n);
	//cout << "\nMang sau khi gop la: " << endl;
	//XuatMang(c, n);
	return 0;
	/*có 2 mảng a, b đã được sắp xếp TĂNG DẦN.Trộn	 mảng a, b vào c sao cho mảng c tăng dần.
		VD: a: 1 2 7
		b : 0 2 6 9
		= > c: 0 1 2 2 6 7 9*/
}
