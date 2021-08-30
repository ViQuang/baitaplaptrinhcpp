/* Nhap, Xuat mang 2 chieu */
/*
#include <iostream>
#define MaxA 50
#define MaxB 50
using namespace std ;
int nhap (int mt[MaxA][MaxB],int &a,int &b)
{	cout<< "Nhap so dong ";
	 	cin >> a;
	cout << "\nNhap so cot :\n ";
		cin >> b;
	for (int i=0;i<a;i++)
	{	for (int j=0;j<b;j++)
		{	cout <<"a["<<i<<"]["<<j<<"]=";
			cin>> mt[i][j];}
	}
}
int xuat (int mt[MaxA][MaxB],int a, int b)
{	cout << "Ma tran:"<< endl;
	for  (int i=0;i<a;i++)
	{	for (int j=0;j<b;j++)
			cout <<"    "<<mt[i][j];
			cout<<endl;
	}
}
int main (){
	int mt[MaxA][MaxB], a,b;
	nhap(mt,a,b);
	xuat(mt,a,b);	
}
*/

//  Nhap xuat mang 2 chieu theo kieu 1 chieu
#include <iostream>
#define MaxA 50
#define MaxB 50
using namespace std ;
int nhap (int mt[MaxA*MaxB],int &a,int &b)
{	cout<< "Nhap so dong ";
	 	cin >> a;
	cout << "\nNhap so cot :\n ";
		cin >> b;
	for (int i=0;i<a;i++)
	{	for (int j=0;j<b;j++)
		{	cout <<"a["<<i<<"]["<<j<<"]=";
			cin>> mt[i*b+j];}
	}
}
int xuat (int mt[MaxA*MaxB],int a, int b)
{	cout << "Ma tran:"<< endl;
	for  (int i=0;i<a;i++)
	{	for (int j=0;j<b;j++)
			cout <<"    "<<mt[i*b+j];
			cout<<endl;
	}
}
int main (){
	int mt[MaxA*MaxB], a,b;
	nhap(mt,a,b);
	xuat(mt,a,b);	
}
