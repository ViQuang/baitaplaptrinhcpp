#include <iostream>
#include <conio.h>
using namespace std ;

// Tính giai thua cua 1 so nguyen 

int giai_thua (int n){
	if (n==0 || n==1)
	return 1;
	return n*giai_thua (n-1);}
int main ()
{	int n;
	cout << "Nhap so nguyen n:";
	cin >> n ;
	cout << n << "! = "<<giai_thua(n);
	return 0;
	}

// Tinh mot so trong day so Fibonacci
// Cách 1: dung Ðê Quy
int so_hang (int n ){
	if (n==1 || n==2 ) 
	return 1;
	return n = so_hang(n-1) + so_hang (n-2);}
int main (){
	int n ;
	cout << " Nhap vao so hang thu : ";
	cin >> n;
	cout <<"\n So hang thu "<<n<< " co gia tri la "<< so_hang(n);
	return 0;
	}

	
