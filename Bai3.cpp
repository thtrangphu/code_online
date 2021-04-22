//2. Tìm giá trị trong mảng các phần tử phân biệt xa giá trị x nhất(x nhập từ bàn phím)
//VD: 1 3 5 4 8 15
//nhập x = 8

#include <iostream>
#include <vector>
#include <math.h>


using namespace std;
void nhap(vector<int>& a);
void xuat(vector<int> a);
void timPhanTu(vector<int> a, int x);


void main()
{
	vector<int> a;

	a.resize(5);//tương đương realloc()

	nhap(a);

	xuat(a);
	
	cout << "Moi ban nhap x = ";
	int x;
	cin >> x;
	timPhanTu(a, x);


	system("pause");
}

void nhap(vector<int>& a)
{
	cout << "\t\t======NHAP======" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];

	}
}

void xuat(vector<int> a)
{
	cout << "\t\t======XUAT======" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a.at(i) << endl;
	}
}

void timPhanTu(vector<int> a,int x)
{
	int max = abs(a.at(0) - x);
	for (int i = 1; i < a.size(); i++)
	{
		if (abs(a.at(i) - x) > max) max = abs(a.at(i) - a.at(i + 1));
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (abs(a.at(i) - x) == max) cout << a.at(i) << " ";
	}
}
