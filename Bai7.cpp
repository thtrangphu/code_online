#include <iostream>
#include <string>
using namespace std;
int chuoiSangSo(char s[])
{
	int x = 0;
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		x = x + pow(10, strlen(s) - 1 - i) * (s[i] - 48);
	}
	return x;
}

void nhap(char s[]) 
{
	bool check;
	do {
		check = true;
		cout << "Nhap chuoi so: ";
		cin >> s;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] >= '0' && s[i] <= '9');
			else check = false;
		}
		if (strlen(s) != 3 || check == false) cout << "\nNhap sai!! Moi ban nhap lai...";
	} while (strlen(s) != 3 || check == false);
}
int main() 
{
	char s[4];
	char t[4];
	cout << "Chuoi 1"<<endl;
	nhap(s);
	cout << "\nChuoi 2" << endl;
	nhap(t);
	cout << "\nTong 2 so la: " << chuoiSangSo(s) + chuoiSangSo(t);
	cout<<endl<<"Hieu 2 so la: "<< chuoiSangSo(s) - chuoiSangSo(t);
}
