#include <iostream>
#include <fstream>
using namespace std;
//Tìm phần tử lớn nhất trong mảng số nguyên đó và ghi vào file input.txt
void docFile(int a[], int& n) {
	ifstream f;
	f.open("input.txt", ios_base::in);
	if (f.fail()) {
		cout << "Khong mo duoc file !";
		return;
	}
	f >> n;
	for (int i = 0; i < n; i++) f >> a[i];
	f.close();
}
void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}
int timMax(int a[], int n) {
	int m = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > m) m = a[i];
	return m;
}
void ghiFile(int a[], int n) {
	ofstream f;
	f.open("output.txt", ios_base::out);
	f << timMax(a, n);
	f.close();

}
void main()
{
	int a[10];
	int n = 0;
	docFile(a, n);
	ghiFile(a, n);
}
