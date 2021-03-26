#include <iostream>
using namespace std;
void NhapMang(int a[100], int& n)
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
void XuatMang(int a[100], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << "	  ";
	}
}

//
bool KiemTraSoNguyenTo(int n)
{

	if (n < 2)	return false;
	else if (n == 2) return true;
	else if (n > 2)
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)	return false;
		}
	}
	return true;
}
void XuatSoNguyenTo(int a[100], int n)
{
	int dem = 0;
	cout << "\nCac so nguyen to la: "<<endl;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]) == true)
		{
			cout << a[i] << " ";
			dem++;
		}
	}
	if (dem == 0) cout << "Khong co :((";
}
int main()
{
	int a[100], n;
	//Viết chương trình kiểm tra mảng có tăng dần hay không ?
	NhapMang(a, n);
	XuatMang(a, n);
	XuatSoNguyenTo(a, n);
}
