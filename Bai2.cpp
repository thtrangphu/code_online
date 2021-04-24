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
void saoChep(char a[], char b[])
{
	
	for (int i = 0; i < doDai(a); i++)
	{
		b[i] = a[i];
	}
	b[doDai(a)] = '\0';
}
int main() {
	char a[100] = "hello";
	char b[100];
	saoChep(a, b);
	cout << b;
	return 0;
}
