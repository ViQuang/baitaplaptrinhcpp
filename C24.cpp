#include <iostream>
#include <conio.h>
using namespace std;
int main (){/
    int m[5],*p;
    p= m ;
    *p= 10;
    p++ ; *p=20;
    p= &m[2];*p= 30;
    p= m+3 ; *p= 40;
    p= m; *(p+4)=50;
    for (int i=0; i<5; i++)
        cout << m[i]<<"  \n";
*
// Nhap, xuat mag băng con tro
    int a[10], *p;
    p = a ;
    for(int i=0; i<10;i++){
        cin >> *(p+i);
    }
    cout <<"output:\n";
    for(int i=0; i<10;i++){
        cout <<*(p+i)<<"\n";
    }
*/

// Mang con tro 
int *p[5], a=101;
p[0]=&a;
p[2]=p[0];
int b ;
p[1]=p[2];
b= *p[1];
cout <<" B ="<< b;
}