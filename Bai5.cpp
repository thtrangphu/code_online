#include <iostream>
#include <string>
using namespace std;
//Bài 5. Nhập vào chuỗi ngày tháng năm định dạng như sau dd / mm / yyyy(đã chuẩn hóa) và số ngày.
//Viết chương trình tính ngày kết quả sau khi cộng ngày với số ngày.
//VD:
//21 / 11 / 2015	42	⇒ 02 / 01 / 2016
//2 / 8 / 2020		152 = > 1 / 1 / 2021
void xoa(char a[], int vt) {
	int n = strlen(a);
	for (int i = vt; i < n; i++) a[i] = a[i + 1];
		//Lấy dư đến n để có /0 
}

int chuoiSangSo(char s[])
{
	int x = 0;
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		x = x + pow(10, strlen(s) - 1 - i) * (s[i] - 48);
	}
	return x;
}

bool kiemTraNam(int nam)
{
	if (nam % 400) return true;
	if (nam % 4 == 0 && nam % 100 != 0) return true;
	return false;
}
bool kiemTraThang(int t) {
	if (t < 1 || t>12) {
		return false;
	}
	return true;
}

bool kiemTraNgay(int n, int t,int nam)
{
	if (kiemTraThang(t))
	{
		switch (t)
		{
			case 1:case 3: case 5: case 7: case 8: case 10: case 12: 
			{
				if (n < 1 || n>31) return false;
				break;
			}
			case 2:
			{
				if (n < 1) return false;
				else {
					if (kiemTraNam(nam)) {
						if (n > 28) return false;
					}
					else if (n > 29) return false;
				}
			}
			default:
				if (n < 1 || n>30) return false;
		}
	}
	else return false;
	return true;
}

bool kiemTraNgayThang(int n, int t, int nam)
{
	if (kiemTraNgay(n, t, nam) == false || kiemTraThang(t) == false) return false;
	return true;
}
void xuat(int n, int t, int nam)
{
	cout << n << "/" << t << "/" << nam << endl;
}
void ngayKeTiep(int n, int t, int nam)
{
	if (kiemTraNgayThang(n+1,t,nam))
	{
		xuat(n + 1, t, nam);
	}
	else {
		//Ngay cuoi thang
		if (kiemTraNgay(1, t + 1, nam)) xuat(1, t + 1, nam);
		else xuat(1, 1, nam + 1);
	}
}
int main()
{
	char s[20];
	int dem = 0;
	char ngay[5]{};
	char thang[5]{};
	char nam[10]{};
	do {
		dem = 0;
		cout << "Nhap chuoi ngay/thang/nam : ";
		cin.getline(s, 20);
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == '/') dem++;
			if (s[i] == ' ') xoa(s, i);
		}
		
		int demm = 0;
		for (int i = 0; i < strlen(s); i++) {
			demm++; // Dem ki tu cua ngay va bo qua /
			if (s[i] == '/') break;
			ngay[i] = s[i];
		}
		int t = 0;
		for (int i = demm; i < strlen(s); i++) {
			demm++; // Dem ki tu cua thang va bo qua /
			if (s[i] == '/') break;
			thang[t] = s[i];
			t++;
		}
		int n = 0;
		for (int i = demm; i < strlen(s); i++) {
			nam[n] = s[i];
			n++;
		}
		if (dem != 2 || kiemTraNgayThang(chuoiSangSo(ngay), chuoiSangSo(thang), chuoiSangSo(nam)) == false) {
			cout << "Moi ban nhap lai..\n";
		}
	} while (dem != 2 || kiemTraNgayThang(chuoiSangSo(ngay), chuoiSangSo(thang), chuoiSangSo(nam)) == false);
	ngayKeTiep(chuoiSangSo(ngay), chuoiSangSo(thang), chuoiSangSo(nam));
}
