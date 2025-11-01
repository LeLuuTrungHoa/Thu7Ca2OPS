#include <iostream>

using namespace std;


int tong(int a, int b){
	return a + b;
}
int hieu(int a, int b){
	return a - b;
}
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b);
bool ktrsochinhphuong(int n) {
    if (n < 0) {
        return false;
    }
    double squareRoot = sqrt(n);
    return (squareRoot == floor(squareRoot));
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Ví dụ a là 2, b là 1";
	cout<<"Tong =" << tong(2,1);
	cout<<"Hieu =" << hieu(2,1);;
	cout<<"ChinhPhuong =" << ktrsochinhphuong(9);
	system("pause");
	return 0;
}
