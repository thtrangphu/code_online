//1. Nhập và hiển thị một ma trận có kích thước là 5x5, trong đó : các phần tử trên đường chéo được điền giá trị 0
//Các phần tử của tam giác dưới đường chéo được điền các giá trị - 1, và ở tam giác trên là được điền với các giá trị 1.
//0  1  1  1  1
//- 1  0  1  1  1
//- 1 - 1  0  1  1
//- 1 - 1 - 1  0  1
//- 1 - 1 - 1 - 1  0
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
#define MAX 100
void nhap(int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)
		for(int j=0;j<n;j++)
		{
			if (i == j) a[i][j] = 0;
			else if (j > i) a[i][j] = 1;
			else a[i][j] = -1;
		}
}
void xuat(int a[][MAX],int n)
{
	cout <<  left << setw(5);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] <<left<< setw(5);
		}
		cout << endl;
	}
		
}
int main()
{
	int a[MAX][MAX]{};
	int n;
	cout << "Moi ban nhap so dong: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	return 0;
}


