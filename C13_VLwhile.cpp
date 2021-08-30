// Vong lap while 
// Tinh tong cac so nguyen tu 1 den n.
#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int i, n, sum;
	cout << "Nhap vao gia tri n :";
	cin >> n;
	sum =0 ; i=1 ;
	
	do {  sum += i; i++ ;}
	
	while (i <= n);

	cout << "Tong cac so nguyen nho hon n là "<< sum;
	return 0;
	}
