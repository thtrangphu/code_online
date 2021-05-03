#include <iostream>
#include <string>
using namespace std;
//Bài 8. Nhập 1 chuỗi: tính tổng các số có trong chuỗi. 
//VD: abc24d123e7gf1		s = 24 + 123 + 7 + 1 = 155
int chuoiSangSo(char tam[])
{
	int x = 0;
	for (int i = strlen(tam) - 1; i >= 0; i--)
	{
		x = x + pow(10, strlen(tam) - 1 - i) * (tam[i] - 48);
	}
	return x;
}
int xuLy(char s[])
{
	char tam[10];
	int so[20];
	int dem = 0;
	int sum = 0;
	for (int i = 0; i < strlen(s); i++) {
		bool check = false;
		while (s[i] >= '0' && s[i] <= '9') {
			tam[dem] = s[i];
			dem += 1;
			check = true;
			i++;
		}
		if (check == true) {
			tam[dem] = '\0';
			sum += chuoiSangSo(tam);
			for (int j = 0; j < dem; j++) tam[j] = '\0';
			i = i - 1;
			dem = 0;
		}
	}
	return sum;
}
int main() 

{
	char s[] = "abc24d123e7gf1";
	cout<<xuLy(s);
	
}
