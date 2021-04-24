#include <iostream>
using namespace std;
int doDai(char a[]){
	int i = 0;
	while (a[i] != NULL) i++;
	return i;
}
void inThuong(char a[]){
	for (int i = 0; i < doDai(a); i++)
		if (a[i] >= 'A' && a[i] <= 'Z')	a[i] += 32;
}
int soSanhKhongPhanBiet(char a[], char b[]){
	cout << a << endl << b << endl;
	inThuong(a); 
	inThuong(b);
	cout << a << endl << b << endl;
	int n1 = doDai(a);
	int n2 = doDai(b);
	int min = (n1 > n2) ? min = n2 : min = n1;
	for (int i = 0; i < min; i++){
		int ss = a[i] - b[i];
		if (ss!=0) return ss;
	}
	return n1 - n2;
}
int main() {
	char a[100] = "Hello";
	char b[100] = "hello";
	cout<<soSanhKhongPhanBiet(a, b);
	return 0;
}
