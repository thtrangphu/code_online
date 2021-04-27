#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	//Chuyen so ve chuoi
	int x = 1234;
	char s[20]="";
	int n = log10(x) + 1;
	for (int i = n - 1; i >= 0; i--)
	{
		s[i] = char(x % 10 + 48);
		x /= 10;
	}
	cout << s;
}
