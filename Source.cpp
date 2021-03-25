////NHAP vao so x ,in ra so dao cua x

#include<iostream>
using namespace std;
int daoso();
int main(){
cout<<daoso();
cout << endl;
	system("pause");
	return 0;
}
int daoso() {
    int n, tong = 0, term;
    cin >> n;
   
    while (n != 0)
    {
        term = n% 10;
        tong = tong * 10 + term;
        n/= 10;
    }
	return tong;
}
