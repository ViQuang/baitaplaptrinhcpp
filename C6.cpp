/*
// Phan toan tu so sanh "?" va ":"
#include "stdio.h"
int main (){
	int a ;
	printf (" a = ");
	scanf("%d",&a);
	
	printf("\n %d la so %s",a,(a%2==0)?"chan":"le"); 
	}
*/
// THUC HANH
#include "stdio.h"
int main(){

float x, y;
	printf(" \n x= ");
	scanf("%f",&x);
	printf("\n y=");
	scanf("%f",&y);
	printf("\n %f < %f la %s",x,y,(x<y==1)?"TRUE":"FALSE");
	


}	
