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
void inSoCungChan(int a[], int n)
{
	int dem = 0;
	cout << "\n CAC CAP SO CHAN LIEN KE LA: \n";
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] % 2 == 0 && a[i + 1] % 2 == 0)
		{
			dem++;
			cout << dem << ". (" << a[i] << "," << a[i + 1] << ")" << endl;
		}
	}
}
void main()
{
	//Cho mảng 1 chiều các số nguyên. Viết chương trình in ra các phần tử kề nhau mà cả hai đều chẵn.
	int a[20],b[20], n,m;
	nhapMang(a, n);
	xuatMang(a, n);
	inSoCungChan(a, n);
}
