#include <iostream>
using namespace std;
//1. Viết chương trình dùng con trỏ quản lí mảng n phần tử.Xuất phần tử lớn nhất và nhỏ nhất trong mảng.
void nhap(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> *(p + i);
	}
}
int max(int* p, int n)
{
	int max = *p;
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) > max) max = *(p + i);
	}
	return max;
}
int min(int* p, int n)
{
	int min = *p;
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) < min) min = *(p + i);
	}
	return min;
}
int main()
{
	int n;
	int* p = NULL;
	cout << "Nhap slpt: ";
	do {
		cin >> n;
		if (n < 0) cout << "Nhap sai!!Moi ban nhap lai..";
	} while (n < 0);
	p = new int[n];
	nhap(p, n);
	cout << "Gia tri lon nhat cua mang la : " << max(p, n)<<endl;
	cout << "Gia tri nho nhat cua mang la: " << min(p, n);
}
