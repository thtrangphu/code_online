#include<iostream>
using namespace std;

struct PhanSo {
	int tu;
	int mau;
};
void nhap1(PhanSo& x) {
	cout << "Nhap tu so: ";
	cin >> x.tu;
	cout << "Nhap mau so: ";
	cin >> x.mau;
}
void nhapN(PhanSo p[],int n) {
	for (int i = 0; i < n; i++) {
		cout << "============== NHAP PHAN SO THU " << i + 1 << " ==============\n";
		nhap1(p[i]);
		cout << endl;
	}
}
void xuat1(PhanSo x) {
	cout << x.tu << "/" << x.mau<<endl;
}
void xuatN(PhanSo p[], int n) {
	for (int i = 0; i < n; i++) {
		xuat1(p[i]);
	}
}
int uocChung(int x, int y) {
	while (x * y != 0)
		if (x > y) x %= y;
		else y %= x;
	return x + y;
}
void rutGon1(PhanSo x) {
	int m = uocChung(x.tu, x.mau);
	cout << x.tu * 1.0 / m << "/" << x.mau * 1.0 / m << endl;
}
void rutGonN(PhanSo p[], int n) {
	for (int i = 0; i < n; i++) {
		rutGon1(p[i]);
	}
}
PhanSo max(PhanSo p[], int n) {
	float max = p[0].tu * 1.0 / p[0].mau;
	int vt = 0;
	for (int i = 1; i < n; i++) {
		if ((p[i].tu * 1.0 / p[i].mau) > max) {
			max = p[i].tu * 1.0 / p[i].mau;
			vt = i;
		}
	}
	return p[vt];
}
void themPhanSo(PhanSo p[], int& n, int vt, PhanSo x) {
	for (int i = n; i > vt; i--) {
		p[i].tu = p[i - 1].tu;
		p[i].mau = p[i - 1].mau;
	}
	p[vt] = x;
	n += 1;
}
void xoaPhanSo(PhanSo p[], int& n, int vt) {
	for (int i = vt; i < n-1; i++) {
		p[i] = p[i+1];
	}
	n--;
}
int boiChung(int x, int y) {
	return x * y / uocChung(x, y);
}
int mauChung(PhanSo p[], int n) {
	int mau = boiChung(p[0].mau, p[1].mau);
	for (int i = 2; i < n; i++) {
		mau = boiChung(mau, p[i].mau);
	}
	return mau;
}
float tongPhanSo(PhanSo p[], int n) {
	int tu = 0;
	for (int i = 0; i < n; i++) {
		tu += p[i].tu * (mauChung(p, n) / p[i].mau);
	}
	return tu * 1.0 / mauChung(p,n);
}
int main() {
	int n;
	cout << "Nhap so luong phan so: ";
	cin >> n;
	PhanSo p[10];
	nhapN(p, n);
	cout << endl << "XUAT CAC PHAN SO \n";
	xuatN(p, n);
	cout << endl << "RUT GON CAC PHAN SO \n";
	rutGonN(p, n);
	cout << endl << "PHAN SO MAX CUA CAC PHAN SO\n";
	xuat1(max(p, n));
	cout << endl << "TONG PHAN SO\n"<<tongPhanSo(p, n);
	themPhanSo(p, n, 0, { 1,2 });
	cout << endl;
	cout << "THEM PHAN SO\n";
	xuatN(p, n);
	cout << endl;
	xoaPhanSo(p, n, 0);
	cout << endl;
	cout << "XOA PHAN SO\n";
	xuatN(p, n);
	cout << endl;

}
