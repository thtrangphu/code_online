#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
//-File UCLN.TXT lưu 1 số nguyên là ước số chung lớn nhất của tất cả các phần tử của mảng
//- File BCNN.TXT lưu 1 số nguyên là bội chung nhỏ nhất của tất cả các phần tử của mảng
//
//* Gợi ý :
//-Nghiên cứu cách dùng hàm seekg() hoặc suy nghĩ cách để giải quyết vướng mắc bài toán
void docFile(int a[], int& n) {
	ifstream f;
	f.open("input.txt", ios_base::in);
	if (f.fail()) {
		cout << "Khong mo duoc file !";
		return;
	}
	while (!f.eof()) {
		char x;
		f >> a[n++];
		f >> x;
	}
	f.close();
}
int UCLN(int x,int y) {
	while (x * y != 0)
		if (x > y) x %= y;
		else y %= x;
	return x + y;
}
int uocMang(int a[], int n) {
	int m = UCLN(a[0], a[1]);
	for (int i = 2; i < n; i++) {
		m = UCLN(m, a[i]);
	}
	return m;
}
int BCNN(int x, int y) {
	return x * y / UCLN(x, y);
}
int boiMang(int a[], int n) {
	int m = BCNN(a[0], a[1]);
	for (int i = 2; i < n; i++) {
		m = BCNN(m, a[i]);
	}
	return m;
}
void ghiFile(int a[], int n) {
	ofstream f1;
	f1.open("ucln.txt", ios_base::out);
	f1 << uocMang(a, n);
	f1.close();
	ofstream f2;
	f2.open("bcnn.txt", ios_base::out);
	f2 << boiMang(a, n);
	f2.close();
}

void main()
{
	int a[10] = {1,3,6,9};
	int n = 4;
	docFile(a, n);
	ghiFile(a, n);
}
