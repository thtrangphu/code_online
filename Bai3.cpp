//3. Viết chương trình dùng con trỏ quản lí mảng.Xóa phần tử tại vị trí vt nhập từ bàn phím
#include <iostream>
using namespace std;
void nhap(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> *(p + i);
	}
}
void xoa(int* p, int& n, int vt)
{
	for (int i = vt; i < n-1; i++)
	{
		p[i] = p[i + 1];
	}
	p = new int[n--];
}
void xuat(int* p, int n)
{
	cout << "\nCac phan tu cua mang la: "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(p + i) << " ";
	}
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
	int vt;
	cout << "Nhap vi tri phan tu muon xoa: ";
	do {
		cin >> vt;
		if (vt >= n || vt < 0) cout << "Khong co vi tri nay trong mang. ";
	} while (vt >= n || vt < 0);
	xoa(p, n, vt);
	xuat(p, n);
}
