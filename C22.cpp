/* 
 #include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	int a = 452;
	int *p1,*p2;
	p1 = &a;
	p2 = p1;
	cout<<"*p2 = "<<*p2;
	cout<<"\n*p1 = "<<*p1;
	*p2 = 10;
	cout<<"\na = "<<a;
	cout <<"\n*p1= "<<p1;
	}
	*/
// Hoan vi 2 so bang con tro 
#include <iostream>
using namespace std;
int main (){
	int a=500,b=15,temp;
	int *aa, *bb;
	aa = &a;
	bb = &b;
	temp = *aa;
	*aa=*bb;
	*bb = temp;
	cout<< a <<"\n";
	cout << b;
	}
