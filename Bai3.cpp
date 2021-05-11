#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct bangDiem {
	float mac;
	float daiSo;
	float c;
};

struct sinhVien {
	char hoTen[30];
	bool gioiTinh;
	char ngaySinh[15];
	char mssv[20];
	char ten[20];
	bangDiem diem;
};
void xoa(char a[], int vt) {
	int n = strlen(a);
	for (int i = vt; i < n; i++) a[i] = a[i + 1];
	//Lấy dư đến n để có /0 
}

int chuoiSangSo(char s[])
{
	int x = 0;
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		x = x + pow(10, strlen(s) - 1 - i) * (s[i] - 48);
	}
	return x;
}

bool kiemTraNam(int nam)
{
	if (nam % 400) return true;
	if (nam % 4 == 0 && nam % 100 != 0) return true;
	return false;
}

bool kiemTraNgayThang(int n, int t, int nam)
{
	if (t < 1 || t>12) {
		return false;
	}
	else {
		switch (t)
		{
		case 1:case 3: case 5: case 7: case 8: case 10: case 12: {
			if (n < 1 || n>31) return false;
		}
		case 2:
			if (n < 1) return false;
			else {
				if (kiemTraNam(nam)) {
					if (n > 29) return false;
				}
				else if (n > 28) return false;
				else return true;
			}
		default:
			if (n < 1 || n>30) return false;
		}
	}
	return true;
}
void nhap1(sinhVien& x) {
	cout << "Nhap ho ten: ";
	cin.getline(x.hoTen, 31);
	do {
		cout << "Nhap gioi tinh: (1.Nam,0.Nu) ";
		cin >> x.gioiTinh;
		if (x.gioiTinh != 0 && x.gioiTinh != 1) cout << "Nhap lai...";
	} while (x.gioiTinh != 0 && x.gioiTinh != 1);
	cin.ignore();
	char s[20];
	int dem = 0;
	char ngay[5]{};
	char thang[5]{};
	char nam[5]{};
	do {
		dem = 0;
		cout << "Nhap chuoi ngay/thang/nam : ";
		cin.getline(s, 16);
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == '/') dem++;
			if (s[i] == ' ') xoa(s, i);
		}

		int demm = 0;
		for (int i = 0; i < strlen(s); i++) {
			demm++; // Dem ki tu cua ngay va bo qua /
			if (s[i] == '/') break;
			ngay[i] = s[i];
		}
		int t = 0;
		for (int i = demm; i < strlen(s); i++) {
			demm++; // Dem ki tu cua thang va bo qua /
			if (s[i] == '/') break;
			thang[t] = s[i];
			t++;
		}
		int n = 0;
		for (int i = demm; i < strlen(s); i++) {
			nam[n] = s[i];
			n++;
		}
		if (dem != 2 || kiemTraNgayThang(chuoiSangSo(ngay), chuoiSangSo(thang), chuoiSangSo(nam)) == false) {
			cout << "Moi ban nhap lai..\n";
		}
	} while (dem != 2 || kiemTraNgayThang(chuoiSangSo(ngay), chuoiSangSo(thang), chuoiSangSo(nam)) == false);
	cout << "Nhap MSSS: ";
	cin.getline(x.mssv, 21);
}
void nhapDiem(sinhVien& x) {
	cout << "Nhap diem Mac-Lenin: ";
	cin >> x.diem.mac;
	cout << "Nhap diem Dai so: ";
	cin >> x.diem.daiSo;
	cout << "Nhap diem C++: ";
	cin >> x.diem.c;
}
void xuat1(sinhVien x) {
	cout << "Ho ten:" << x.hoTen << "   Gioi tinh:";
	if (x.gioiTinh == 1)
	{
		cout << "Nam";
	}
	else cout << "Nu";
	cout << "  MSSV:" << x.mssv << "   Ngay sinh:" << x.ngaySinh << endl;
}
//_ Mã sinh viên (phân biệt)
//_ bảng điểm (1 Sinh viên sẽ có 1 bảng điểm gồm 3 môn: Mac Lenin, Đai số, C++).
//1. Nhập, xuất sinh viên trong danh sách.
//2. Xóa sinh viên có mã sinh viên nhập từ bàn phím.
//3. Sắp xếp danh sách sinh viên tăng dần theo tên (nếu trùng thì theo họ).
//4. Nhập điểm 3 môn cho sinh viên có mã sv nhập từ bàn phím.
//5. Xuất ds sinh viên tăng dần theo ngày tháng năm sinh.
//
//Lưu ý: Chuẩn hóa dữ liệu gồm: họ tên, ngày tháng năm sinh, mã sinh viên(phân biệt).
bool kiemTraMSSV(sinhVien sv[],int n, char x[20]) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (strcmp(x, sv[i].mssv) == 0) dem++;
	}
	if (dem == 1) return 1; //Mỗi mssv phân biệt 
	return 0;
}
int viTri(sinhVien sv[], int n, char x[20]) {
	for (int i = 0; i < n; i++) {
		if (strcmp(x, sv[i].mssv) == 0) return i;
	}
	return -1;
}
void xoa(sinhVien sv[], int &n, int vt) {
	for (int i = vt; i < n - 1; i++) {
		sv[i] = sv[i + 1];
	}
	n--;
}
int doDai(char a[]) {
	int i = 0;
	while (a[i] != NULL) i++;
	return i;
}
void xoa1(char a[], int vt) {
	int n = doDai(a);
	for (int i = vt; i < n; i++) a[i] = a[i + 1];
}
void inThuong(char a[]) {
	for (int i = 0; i < doDai(a); i++)
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
}
void chuanHoa(char a[]) {
	while (a[0] == ' ') xoa(a, 0);
	while (a[doDai(a) - 1] == ' ') xoa1(a, doDai(a) - 1);
	for (int i = 0; i < doDai(a); i++)
	{
		if (a[i] == a[i + 1] && a[i] == ' ') {
			xoa1(a, i);
			i--;
		}
	}
	inThuong(a);
	for (int i = 0; i < doDai(a); i++)
	{
		if (a[i] == ' ' && (a[i + 1] >= 'a' && a[i + 1] <= 'z')) {
			a[i + 1] -= 32;
		}
	}
}
void daoXau(char a[])
{
	for (int i = 0; i < doDai(a) / 2; i++)
	{
		swap(a[i], a[doDai(a) - i - 1]);
	}
}
void layTen(sinhVien &x) {
	char tam[20];
	char a[30];
	strcpy(a, x.hoTen);
	int dem = 0;
	for (int i = strlen(a); i >= 0; i--) {
		if (a[i] == ' ') break;
		tam[dem] = a[i];
		dem++;
	}
	daoXau(tam);
	strcpy(x.ten, tam);
}
void chuanHoaHoTen(sinhVien sv[], int n) {
	for (int i = 0; i < n; i++) {
		chuanHoa(sv[i].hoTen);
		layTen(sv[i]);
	}
}
void sapXepHoTen(sinhVien sv[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(sv[i].hoTen, sv[j].hoTen) > 0) {
				swap(sv[i], sv[j]);
			}
		}
	}
}
void sapXepTen(sinhVien sv[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(sv[i].ten, sv[j].ten) > 0) {
				swap(sv[i], sv[j]);
			}
		}
	}
}
int main()
{
	sinhVien sv[30];
	int n = 0;
	while (1) {
		int lc;
		system("cls");
		cout << "1. Nhap danh sach sinh vien. " << endl;
		cout << "2. Xuat danh sach sinh vien. " << endl; 
		cout << "3. Xoa sinh vien theo ma nhap ban phim. " << endl;
		cout << "4. Sap xep theo ten tang dan. " << endl;
		cout << "5. Nhap diem bang mssv. " << endl;
		cout << "6. Xuat danh sach sinh vien tang dan theo ngay thang nam sinh. " << endl;
		cout << "0. Thoat. " << endl;
		cout << "\n============ Moi ban nhap lua chon ============\n";
		do {
			cin >> lc;
			if (lc < 0 || lc>6) cout << "Nhap sai !! Moi ban nhap lai...";
		} while (lc < 0 || lc>6);

		switch (lc)
		{
		case 0: exit(0);
		case 1: {
			cout << endl << "	NHAP DANH SACH SINH VIEN " << endl;
			int sl;
			cout << "Moi ban nhap so luong muon them: ";
			cin >> sl;
			cin.ignore();
			for (int i = 1; i <= sl; i++) {
				cout << endl << "------------------" << n + 1 << "------------------\n";
				nhap1(sv[n]); n++;
				while (kiemTraMSSV(sv,n,sv[i].mssv) == 0)
				{
					cin.getline(sv[i].mssv, 21);
				}
			}
			
			break;
		}
		case 2: {
			cout << endl << "XUAT DANH SACH SINH VIEN " << endl;
			if (n == 0) cout << "Khong co sinh vien nao trong danh sach :((" << endl;
			else
			for (int i = 0; i < n; i++) {
				xuat1(sv[i]);
			}
		}
		case 3: {
			cout << "XOA SINH VIEN THEO MSSV NHAP TU BAN PHIM" << endl;
			char x[20];
			cout << "Nhap mssv: ";
			cin.getline(x, 21);
			if (kiemTraMSSV(sv, n, x) == 1) { // Kiểm tra mssv có trong danh sách hay không 
				xoa(sv, n, viTri(sv, n, x));
			}
			else {
				cout << "Khong co sinh vien trong danh sach." << endl;
			}
		}
		case 4: {
			cout << "SAP XEP CAC SINH VIEN TANG DAN THEO TEN" << endl;
			sapXepHoTen(sv, n);
			sapXepTen(sv, n);
			cout << endl << "XUAT DANH SACH SINH VIEN " << endl;
			if (n == 0) cout << "Khong co sinh vien nao trong danh sach :((" << endl;
			else
				for (int i = 0; i < n; i++) {
					xuat1(sv[i]);
				}
		}
		case 5: {
			cout << "NHAP DIEM THEO MSSV NHAP TU BAN PHIM" << endl;
			char x[20];
			cout << "Nhap mssv: ";
			cin.getline(x, 21);
			if (kiemTraMSSV(sv, n, x) == 1) { // Kiểm tra mssv có trong danh sách hay không
				nhapDiem(sv[viTri(sv, n, x)]);
			}
			else {
				cout << "Khong co sinh vien trong danh sach." << endl;
			}
		}
		}
	}
}
