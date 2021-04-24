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
void themKiTu(char a[], int vt, char x){
	int n = doDai(a);
	for (int i = n + 1; i > vt; i--) a[i] = a[i - 1];
	//Thêm ô cuối để gán /0 tạo dư một ô để thêm
	a[vt] = x;
}
int main() {
	char a[100] = "hello";
	themKiTu(a, 0, 'A');
	cout << a;
	return 0;
}
