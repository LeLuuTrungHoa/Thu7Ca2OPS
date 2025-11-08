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

float thuong(int a, int b){
	if (divisor == 0) {
        coutr << "Lỗi: Không thể chia cho 0." << endl;   
        return 0; 
    }
    return a / b;
}
float thuong(int a, int b);

bool kiemTraSNT(int n) {
    if (n <= 1) {


        return false;
    }
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
bool ktrsochinhphuong(int n) {
    if (n < 0) {

        return false;
    }
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;

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
	
	cout<<"Hieu =" << hieu(2,1);
	cout<<"Kiem tra so 7 co phai so nguyen to";
	if(kiemTraSNT(7)){
		cout<<"7 la so nguyen to";
	}
	cout<<"Hieu =" << hieu(2,1);;
	cout<<"ChinhPhuong =" << ktrsochinhphuong(9);

	cout<<"Kiem tra 7 co phai so nguyen to";
	if(kiemTraSNT(7))
		cout<<"7 la so nguyen to";

	else
		cout<<"7 khong la so nguyen to";
	
	cout<<"Main";
	system("pause");
	return 0;
}
