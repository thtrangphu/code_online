#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
//2. đọc các số nguyên từ file input.txt
//biết : chỉ có 1 dòng duy nhất chứa các số nguyên
//VD : input.txt
//
//==== yêu cầu ==
//tìm các phần tử là số amstrong trong mảng số nguyên đó và ghi vào file ouput.txt
void docFile(int a[], int& n) {
	ifstream f;
	f.open("input.txt", ios_base::in);
	if (f.fail()) {
		cout << "Khong mo duoc file !";
		return;
	}
	while (!f.eof()) {
		f >> a[n++];
	}
	f.close();
}
int soAmstrong(int x) {
	int s = 0;
	int n = x;
	while(n!=0) {
		s += pow((n % 10), 3);
		n /= 10;
	}
	if(x==s) return 1;
	return 0;
}
void ghiFile(int a[], int n) {
	ofstream f;
	f.open("output.txt", ios_base::out);
	for (int i = 0; i < n; i++) {
		if (soAmstrong(a[i]) == 1) f << a[i]<<" ";
	}
	f.close();
}

void main()
{
	int a[10];
	int n = 0;
	docFile(a, n);
	ghiFile(a, n);
}
