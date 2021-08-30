/* Mo ta thong tin chuong trinh (1) */
// Khai bao Thu vien(2)
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

// Khai bao prototype cua ham (3)
int Cong ( int a, int b);
	int main (){
		cout << "Cong 5 vs 5 =  ";
		cout << Cong (5,5);/*Ham chinh cua phuong trinh (4) */
		getch ();
		return 0;
	}
int Cong (int a, int b) /*Hàm do coder dinh nghia (5) */
{return a+b ;}
