//Bài 3: Nhập vào số nguyên dương n. Viết chương trình kiểm tra xem n có phải là số chính phương hay không ?
#include<iostream>
using namespace std;
void chinhphuong(int n);
void nhapsolieu(int &n);
int main()
{
	int n;
	nhapsolieu(n);
	chinhphuong(n);
	system("pause");
	return 0;
}
void nhapsolieu(int &n) {
	do {
		cout << "Nhap so nguyen duong n : ";
		cin >> n;
	} while (n <= 0);
}
void chinhphuong(int n) {
	bool kt = 0;
	for (int i = 1; i < n; i++) {
		if (i * i == n) { kt = 1; break; }
	}
	if (kt == 0) { cout << n << " khong phai so chinh phuong\n "; }
	else { cout << n << " la so chinh phuong\n "; }
}