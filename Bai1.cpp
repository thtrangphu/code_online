//1. Tính trung bình cộng các số lẻ ở vị trí chẵn

#include <iostream>
#include <vector>
using namespace std;
void nhap(vector<int>& a);
void xuat(vector<int> a);
float trungBinhCong(vector<int>a);
void main()
{
	vector<int> a;
	a.resize(5);//tương đương realloc()
	
	nhap(a);

	xuat(a);
	
	cout<<"KQ = "<<trungBinhCong(a);
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

float trungBinhCong(vector<int> a)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a.at(i) % 2 != 0 && i % 2 == 0) {
			s += a.at(i);
			dem++;
		}
	}
	if(dem!=0) return s / dem;
	
	return s;
}
