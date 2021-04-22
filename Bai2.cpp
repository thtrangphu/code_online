
#include <iostream>
using namespace std;
#define MAX 100
//1. Tính tổng các phần tử lẻ nằm trên đường chéo chính và đường chéo phụ của mảng 2 chiều a[dong][cot].
void nhap(int a[][MAX], int n)
{
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] =";
			cin >> a[i][j];
		}
}
void xuat(int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int tongLeChinhPhu(int a[][MAX], int n)
{
	int s = 0;
	if(n%2==0)
	for (int i = 0; i < n; i++)
	{
		if (a[i][i] % 2 != 0) s += a[i][i];
		if (a[n - i + 1][i] % 2 != 0) s += a[n - i + 1][i];
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i][i] % 2 != 0) s += a[i][i];
			if (a[n - i - 1][i] % 2 != 0) s += a[n - i - 1][i];
			
		}
		if (a[n / 2][n / 2] % 2 != 0) s -= a[n / 2][n / 2] ;
	}
	return s;
}
void main()
{
	int n;
	cout << "Nhap so dong so cot:";
	cin >> n;
	
	int a[MAX][MAX];
	nhap(a,n);
	xuat(a, n);
	cout << "KQ = " << tongLeChinhPhu(a, n);
}
