//*
#include <iostream>
using namespace std;
int main (){
	int a, b, c;
	cout << " a=";
	cin >> a;
	cout << " b=";\
	cin >> b;
	cout << " c=";
	cin >> c;
if (a>b && a>c) 
	cout << a << " la so lon nhat."	;
	else if (b>a && b >c)
	cout << b << " la so lon nhat.";
	else cout << c << " la so lon nhat";
	return 0;}

/*Bai tap thuc hanh: Nhap diem trung binh roi xep loai*/
#include <iostream>
using namespace std ;
int main (){
	 float diem_tb;
	cin >> diem_tb;
	if (9 <diem_tb && diem_tb <=10)
	cout << diem_tb<<" dat HSXS";
		else if (8 < diem_tb && diem_tb <=9)
			cout << diem_tb<<" dat HSG";
			else if (6.5 < diem_tb && diem_tb <=8)
				cout << diem_tb<<" dat HSK";
				else if (5 < diem_tb && diem_tb <=6.5)
					cout << diem_tb<<" dat HSTB";
					 else if (0<= diem_tb && diem_tb < 5)
					 	cout << diem_tb<<" dat HSKem";
		
	return 0;
	}
