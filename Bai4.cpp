//3. có 2 mảng a, b đã được sắp xếp tăng dần.Trộng mảng a, b vào c sao cho mảng c tăng dần.
//VD: a: 1 2 7
//b : 0 2 6 9
//= > c: 0 1 2 2 6 7 9

#include <iostream>
#include <vector>
using namespace std;
void nhap(vector<int>& a);
void xuat(vector<int> a);
void sapXep(vector <int> &a);
void gopMang(vector<int>& a, vector<int>b);

void main()
{
	vector<int> a;
	vector<int> b;
	a.resize(5);//tương đương realloc()

	nhap(a);

	xuat(a);

	b.resize(4);//tương đương realloc()

	nhap(b);

	xuat(b);

	gopMang(a, b);
	xuat(a);


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
		cout << a.at(i) << " ";
	}
	cout << endl;
}

void sapXep(vector<int> &a)
{
	for (int i = 0; i < a.size()-1; i++)
	{
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a.at(j) < a.at(i))
			{
				int t = a.at(i);
				a.at(i) = a.at(j);
				a.at(j) = t;
			}
		}
	}
}

void gopMang(vector<int>&a, vector<int>b)
{
	int size1 = a.size();
	int size2 = b.size();
	a.resize(size1 + size2);
	int dem = 0;
	for (int i = size1; i < a.size(); i++)
	{
		a.at(i) = b.at(dem);
		dem++;
	}
	sapXep(a);
}
