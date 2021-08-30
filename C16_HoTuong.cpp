#include <iostream>
using namespace std ;
long Yn (int n);
long Xn (int n){
	if (n==0) return 1;
	return Xn(n-1) + Yn(n-1);
	}
long Yn (int n)
{	 if (n==0) return 1;
	return n*n*Xn(n-1) + Yn(n-1);
}
int main (){
	int n ;
	cout << "n=";
	cin >> n;
	cout << "\nXn= "<< Xn(n);
	cout << "\nYn= "<< Yn(n);
	return 0;
}
	
