#include "stdio.h"
int main (){
	int x ;
	float y; 
	char c;

	
// I Nhap vao so Nguyen	
	printf("Nhap vao gia tri cua x:");
	scanf("%d",&x);
	printf("\n Gia tri cua x da nhap la: %d", x);
//Nhap vao so thuc 
    printf("\nNhap vao so thuc y: ");
    scanf("%f",&y);
	printf("\nGia tri y vua nhap la: %.2f ",y);
//Nhap vao ky tu 
	printf("\nNhap gia tri cua c:");
	scanf("%c",&c);
	printf("\nGia tri cua c da duoc nhap la: %c",c);
// II Nhap nhieu du kieu cung 1 ham
    int x1, x2, x3, x4;
	printf("Nhap vao gia tri cua x1, x2, x3, x4 ");
	scanf("%d%d%d%d", &x1, &x2, &x3, &x4);
	printf(" x1=%d, x2=%d, x3=%d, x4=%d", x1, x2, x3, x4 );


		}
