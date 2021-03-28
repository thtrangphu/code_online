
#include <iostream>
using namespace std;
void NhapMang(int a[], int& n)
{
	cout << "Nhap so luong phan tu muon thuc hien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " \t\t\t";
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
//
void XuatMang(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << "	  ";
	}
}

void Xoa(int a[], int& n, int vt)
{
	for (int i = vt; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void XoaTrung(int a[], int& n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				Xoa(a, n, j);
			}
		}
	}
}
int main()
{
	int n;
	int a[20];
	NhapMang(a, n);
	XuatMang(a, n);
	cout << endl;
	// Viết chương trình xóa các phần tử trùng nhau trong mảng, chỉ giữ lại duy nhất một phần tử phân biệt.
//VD: 1 4 2 2 1 5 4
//==> 1 4 2 5
	cout << "Mang sau khi xoa la: " << endl;
	XoaTrung(a, n);
	XuatMang(a, n);
}

