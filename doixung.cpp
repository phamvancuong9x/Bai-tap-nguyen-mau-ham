//Bài 2: Nhập x, viết ct kiểm tra x có phải làm số đối xứng không?
#include<iostream>
using namespace std;
int daoso(int x);
int main()
{
	int x;
	cout << "Nhap gia tri x : ";
	cin >> x;
	if (daoso(x) == x) { cout << "x la mot so doi xung\n "; }
	else {
		cout << "x khong phai la so doi xung\n ";
	}
		system("pause");
		return 0;
	
}
	int daoso(int x) 
	{
		int sum = 0;
		int term;
		while (x != 0)
		{
			term = x % 10;
			sum = sum * 10 + term;
			x = x / 10;
		}
		return sum;
	}

