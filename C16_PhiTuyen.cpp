#include <iostream>
#include <conio.h>
using namespace std;
// Tinh so hang thu n cua day Xn duoc dinh nghia nhu sau :
// _X(0) = 1
// _X(n) = n^2X0+(n-1)^2X1+... + 1^2X(n-1) voi n>=0

long Xn (int n){
	if (n==0 )
	return 1;
	long s = 0;
	for (int i = 1; i<=n; i++)
		s = s + i * i * Xn(n-i);
		return s;}
int main (){
	int n;	
	cout << "Nhap n:";
	cin >> n;
	cout << "\n Xn = "<< Xn(n);
	return 0;
}	
	

