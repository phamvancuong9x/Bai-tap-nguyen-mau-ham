/*Bài 4: Nhập vào số nguyên dương n.Viết chương trình kiểm tra số dương n có phải là Amstrong số không ?
Biết n là Amstrong khi tổng cộng thừa k các chữ của n bằng chính nó(với k là số lượng của n).
Đầu dữ liệu vào Đầu dữ liệu
n = 135 Không phải Amstrong số vì 1 ^ 3 + 3 ^ 3 + 5 ^ 3 khác 135
n = 9 Amstrong Number vì 9 ^ 1 bằng 9
n = 153 Số Amstrong vì 1 ^ 3 + 5 ^ 3 + 3 ^ 3 bằng 153
n = 1634 Số Amstrong vì 1 ^ 4 + 6 ^ 4 + 3 ^ 4 + 4 ^ 4 bằng 1634*/
#include<iostream>
using namespace std;
void nhapsolieu(int& n);
void amstrong(int n);
int main()
{
	int n;
	nhapsolieu(n);
	amstrong(n);
	system("pause");
	return 0;
}
void nhapsolieu(int &n) {
	
	do {
		cout << "Nhap so nguyen duong n : ";
		cin >> n;
	} while (n <= 0);
}
void amstrong(int n) {
	int sum = 0;
	int n1 = n;
	int n2 = n;
	int  term;
	int term1 = 1;
	int dem = 0;
	while (n != 0) {
		dem = dem++;
		n = n / 10;
	}
	while (n1 != 0) {
		term = n1 % 10;
		for (int i = 1; i <= dem; i++) {
			term1 *= term;
		}
		sum += term1;
		term1 = 1;
		n1 = n1 / 10;
	}
	if (sum == n2) { cout <<n2<< " la so amstrong\n "; }
	else { cout <<n2<< " khong phai so amstrong\n "; }
}