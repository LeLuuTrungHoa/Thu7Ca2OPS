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
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Ví dụ a là 2, b là 1";
	cout<<"Tong =" << tong(2,1);
	cout<<"Hieu =" << hieu(2,1);;
	system("pause");
	return 0;
}
