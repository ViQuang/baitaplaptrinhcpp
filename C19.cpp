// Xuat nhap chuoi ky tu

#include <iostream>
#include <stdio.h>
#define max 500
using namespace std;
int main (){
//Khai bao chuoi
	char*str;
	str=new char[max];
	
	char strr[max] ;
//Nhap chuoi
	cout<<"Nhap chuoi str:";
	gets(str);
	
	cout << "\nNhap chuoi strr:";
	cin.getline (strr, 500);
// Xuat chuoi
	cout << "\n";
	puts(str);
	
	cout << "\n";
	cout <<strr;
	}
