#include <iostream>
using namespace std;
void sapXepGiam(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j]) {
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
			
		}
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
int main() {
	int a[] = { -4,-5,0,6,-1,0,8,3,-11,15,2,1 };
	int n = 12;
	sapXepGiam(a, n);
	int* b = new int[n];
	int j = 0;
	xuat(a, n); cout << endl;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			b[j] = a[i];
			j++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			b[j] = a[i];
			j++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			b[j] = a[i];
			j++;
		}
	}
	xuat(b, n);
}
