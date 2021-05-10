#include <iostream>
using namespace std;

void xuat(int a[], int n)
{
	cout << "============= XUAT MANG ==========" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

int kiemTra(int a[], int n, int x) {
	int max = abs(a[0] - x);
	int vt = 0;
	for (int i = 0; i < n; i++) {
		if (abs(a[i] - x) > max) {
			max = abs(a[i] - x);
			vt = i;
		}
	}
	return a[vt];
}
int main() {
	int a[] = { 24, 45, 23, 13, 43, - 12 };
	int n = 6;
	cout << "Nhap x: ";
	int x;
	cin >> x;
	cout << kiemTra(a, n, x);
}
