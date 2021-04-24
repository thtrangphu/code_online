#include <iostream>
using namespace std;
int doDai(char a[]){
	int i = 0;
	while (a[i] != NULL) i++;
	return i;
}
void xoa(char a[], int vt) {
	int n = doDai(a);
	for (int i = vt; i < n; i++) a[i] = a[i + 1];
}
void chuanHoa(char a[]){
	while (a[0] == ' ') xoa(a, 0);
	while(a[doDai(a)-1] == ' ') xoa(a, doDai(a) - 1);
	for (int i = 0; i < doDai(a); i++)
	{
		if (a[i] == a[i + 1] && a[i] == ' ') {
			xoa(a, i);
			i--;
		}
	}
}
int main() {
	char a[100] = "             Hello      cac       ban              ";
	chuanHoa(a);
	cout << a;
	return 0;
}
