#include <iostream>
#include <string>
using namespace std;
//Bài 3: Viết chương trình nhập chuỗi ngày tháng năm.Tiến hành chuẩn hóa chuỗi ngày tháng năm.
//_ Nếu có khoảng trắng thì xóa.
//_ Chuỗi chỉ có 2 kí tự '/'.Nếu sai điều kiện thì yêu cầu nhập lại.
//_ Nếu điều kiện ngày tháng năm không hợp lý thì yêu cầu nhập lại.VD : 1 / 13 / 2021, 31 / 2 / 2021
void xoa(char a[], int vt) {
	int n = strlen(a);
	for (int i = vt; i < n; i++)
	{
		a[i] = a[i + 1];
		//Lấy dư đến n để có /0 
	}
}
int main()
{
	char s[20];
	int dem = 0;
	do {
		dem = 0;
		cout << "Nhap chuoi ngay/thang/nam : ";
		cin.getline(s,20);
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == '/') dem++;
			if (s[i] == ' ') xoa(s, i);
		}
		if (dem != 2) {
			cout << "Moi ban nhap lai..\n";
		
		}
	} while (dem != 2);

}
