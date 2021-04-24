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
void daoXau(char a[])
{
	for (int i = 0; i < doDai(a)/2; i++)
	{
		swap(a[i], a[doDai(a) - i - 1]);
	}
}

int main() {
	char a[100] = "Hello";
	daoXau(a);
	cout << a;
	return 0;
}
