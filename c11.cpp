#include "stdio.h"
int main (){
// Khai bao bien
	int a,b ;
//Nhap du lieu
	printf("a=");
	scanf("%d",&a);
	printf("\n b=");
	scanf("%d",&b);
//Xu ly
	float ket_qua = (float)a/b;
	int ket_qua_2 = (int)ket_qua;
	float phandu = (int)a % b;
// Xuat du lieu
	printf("\n %d / %d = %.2f",a ,b,ket_qua);
	printf("\n Phan nguyen cua KQ = %d",ket_qua_2);
	printf(" \n Phan du cua KQ = %f",phandu);
	
	
	}
