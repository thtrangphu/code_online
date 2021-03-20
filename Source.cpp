#include <iostream>
using namespace std;

int main()
{
	int n;
	do {
		cout << "Nhap n = ";
		cin >> n;
		if (n <= 0) cout << "Nhap lai...";
	} while (n <= 0);
	int dong = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < dong; j++)
		{
			cout << " ";
		}
		for (int k = 2 * (dong - 1); k < 2 * n - 1; k++)
		{
			cout << "*";
		}
		dong--;
		cout << endl;
	}

}