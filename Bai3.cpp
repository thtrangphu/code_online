#include <iostream>
#include <string>
using namespace std;
//Bài 3: Viết chương trình nhập chuỗi ngày tháng năm.Tiến hành chuẩn hóa chuỗi ngày tháng năm.
//_ Nếu có khoảng trắng thì xóa.
//_ Chuỗi chỉ có 2 kí tự '/'.Nếu sai điều kiện thì yêu cầu nhập lại.
//_ Nếu điều kiện ngày tháng năm không hợp lý thì yêu cầu nhập lại.VD : 1 / 13 / 2021, 31 / 2 / 2021
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

bool kiemTraNgayThang(int n, int t, int nam)
{
	if (t < 1 || t>12) {
		return false;
	}
	else {
		switch (t)
		{
			case 1:case 3: case 5: case 7: case 8: case 10: case 12: {
			if (n < 1 || n>31) return false;
			}
			case 2: 
				if (n < 1) return false;
				else {
					if (kiemTraNam(nam)) {
						if (n > 28) return false;
					}
					else if (n > 29) return false;
				}
			default:
				if (n < 1 || n>30) return false;
		}
	}
	return true;
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

}
