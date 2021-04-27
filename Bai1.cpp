#include <iostream>
#include <string>
using namespace std;
int chuoiSangSo(char s[])
{
	int x = 0;
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		x = x+pow(10,strlen(s)-1-i)*(s[i]-48);
	}
	return x;
}
int main()
{
	char s[100] = "123";
	cout<<chuoiSangSo(s);
}
