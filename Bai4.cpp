#include "Header.h"

void main() {
	cout << "Nhap so nguyen can chuyen tu thap phan sang nhi phan: ";
	int n; cin >> n;
	Stack s;
	InitStack(s, 50);
	cout << "Chuyen " << n << " sang nhi phan" << endl;
	BieuDienNhiPhan(s, n);
	PrintStack(s);
}

