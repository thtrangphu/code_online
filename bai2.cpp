
#include <iostream>
#include <cmath>
using namespace std;

void inputMark(float &x)
{
	do{
		cout << "Moi ban nhap diem: ";
		cin >> x;
	} while (x < 0 || x>10);
	
}
void checkMark(float x)
{
	if (x >= 9 && x <= 10) cout << "Gioi";
	else if (x >= 8) cout << "Kha";
	else if (x >= 4) cout << "Trung binh";
	else cout << "Yeu";
}
int main()
{
	float x = 0;
	inputMark(x);
	checkMark(x);
}