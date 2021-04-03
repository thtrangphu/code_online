#include <iostream>
#define MAX 100
using namespace std;
void nhap(int a[], int n)
{
	cout << "============NHAP MANG=============="<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a["<<i << "] = ";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	cout << "=============XUAT MANG==========" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

void them(int a[], int& n, int vt, int x)
{
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = x;
	n++;
}
void xoa(int a[], int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void gopdau(int a[], int na, int b[], int& nb)
{
	for (int i = na - 1; i >= 0; i--)
	{
		them(b, nb, 0, a[i]);
	}
}
void gopcuoi(int a[], int na, int b[], int& nb)
{
	for (int i = 0; i < na; i++)
	{
		b[nb] = a[i];
		nb++;
	}
}
void sapXepTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}
void sapXepGiam(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int tam = a[i];
			a[i] = a[j];
			a[j] = tam;
		}
	}
}
void tachMang(int a[], int& na, int b[], int& nb)
{
	for (int i = 0; i < na; i++)
	{
		if (a[i] < 0)
		{
			b[nb] = a[i];
			nb++;
			xoa(a, na, i);
			i--;
		}
	}
}
void kiemTra(int a[], int n)
{
	int j = 0, k = 1;
	while (j < n)
	{
		while (k <= n)
		{
			for (int i = j; i < k; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			k++;
		}
		j++;
		cout << endl;
		k = j+1;
	}
}
int main()
{
	int a[] = { 3,1,2,4 };	
	int n = 4;
	kiemTra(a, n);
}
