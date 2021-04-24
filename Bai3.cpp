#include <iostream>

using namespace std;
int doDai(char a[])
{
	int i = 0;
	while (a[i] != NULL)
	{

		i++;
	}
	return i;
}
void inThuong(char a[])
{
	for (int i = 0; i < doDai(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	}
}

int main() {
	char a[100] = "HELLO";
	inThuong(a);
	cout << a;
	return 0;
}
