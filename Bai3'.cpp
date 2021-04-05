#include <iostream>
using namespace std;
int duong(int a[], int j, int k)
{
	for (int i = j; i < k; i++)
	{
		if(a[i]<0) 	return 0;

	}
	return 1;
}
void kiemTra(int a[], int n)
{
	bool check = true;
	int j = 0, k = 1;
	while (j < n)
	{
		while (k <= n)
		{
			for (int i = j; i < k; i++)
			{
				if (duong(a,j,k)==1)	cout << a[i] << " ";
			}
			if (duong(a, j, k) == 1) cout << endl;
			k++;
		}
		j++;
		//cout << endl;
		k = j+1;
	}
}

int main()
{
//Viết chương trình tìm dãy con toàn dương
	int a[] = { -1,4,-3,2,3,4,5 };
	int n = 7;
	kiemTra(a, n);
}
