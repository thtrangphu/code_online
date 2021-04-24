#include <iostream>
using namespace std;
int doDai(char a[]){
	int i = 0;
	while (a[i] != NULL) i++;
	return i;
}
void xoaKiTu(char a[], int vt){
	int n = doDai(a);
	for (int i = vt; i < n; i++)
	{
		a[i] = a[i+1];
		//Lấy dư đến n để có /0 
	}
}
int main() {
	char a[100] = "hello";
	xoaKiTu(a, 0);
	cout << a;
	return 0;
}
