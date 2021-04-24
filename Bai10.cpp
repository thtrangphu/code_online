#include <iostream>
using namespace std;
int doDai(char a[]){
	int i = 0;
	while (a[i] != NULL) i++;
	return i;
}
void demKiTu(char a[]){
	int dem[26]{};
	for (int i = 0; i < doDai(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
		if (a[i] >= 'a' && a[i] <= 'z') dem[a[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
		if (dem[i] > 0) cout << char(i + 97) << " lap " << dem[i] << " lan." << endl;
}
int main() {
	char a[100] = "Hello cac ban";
	demKiTu(a);
	return 0;
}
