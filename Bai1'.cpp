#include <iostream>
using namespace std;

void kiemTra(int a[], int n)
{
	bool check = true;
	int j = 0, k = 1;
	while (j < n)
	{
		while (k <= n)
		{
			for (int i = j; i < k-1; i++)
			{
				if (a[i] > a[i + 1])
				{
					check = false;
				}
			}
			if (check == false) break;
			for (int i = j; i < k; i++)
			{
				if (check = true)	cout << a[i] << " ";
			}
			if (check = true ) cout << endl;
			k++;
			
		}
		j++;
		check = true;
		//cout << endl;
		k = j+1;
	}
}

int main()
{
	// Cho dãy số nguyên có n phần tử. Viết chương trình tìm các dãy con tăng trong mảng.
	int a[] = { 1,4,3,2,3,4,5 };
	int n = 7;
	kiemTra(a, n);
}
