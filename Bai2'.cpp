#include <iostream>
using namespace std;
int tong(int a[], int j, int k, int m)
{
	int s = 0;
	for (int i = j; i < k; i++)
	{
		s = s + a[i];
	}
	if (s == m) return 1;
	return 0;
}
void kiemTra(int a[], int n,int m)
{
	bool check = true;
	int j = 0, k = 1;
	while (j < n)
	{
		while (k <= n)
		{
			for (int i = j; i < k; i++)
			{
				if (tong(a,j,k,m)==1)	cout << a[i] << " ";
			}
			if (tong(a, j, k, m) == 1) cout << endl;
			k++;
		}
		j++;
		//cout << endl;
		k = j+1;
	}
}

int main()
{
//Cho mảng 1 chiều các số nguyên và một số nguyên M. Viết chương trình tìm tất cả các mảng con có tổng bằng với M
	int a[] = { 1,4,3,2,3,4,5 };
	int n = 7;
	int m;
	cout << "Nhap M: ";
	cin >> m;
	kiemTra(a, n,m);
}
