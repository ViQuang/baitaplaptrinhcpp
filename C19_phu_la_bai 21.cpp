
// Kieu xuat mang thuong

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char list[4][23];
	for (int i=0;i<4;i++)
	{	cout <<"name"<<i<<":";
			gets(list[i]);
	}
	for (int j=0;j<4;j++)
	puts(list[j]);
}
/*
// Kieu dung con tro 

#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
	char *name[5];
	for (int i=0;i<5;i++)
	name[i] = new char[20];
	for (int i=0; i<5;i++)
	{	cout <<"input name"<<i+1<<":";
		gets(name[i]);
	}
	cout <<"Chuoi:\n";
	for(int i=0;i<5;i++)
		cout<<name[i]<<"    ";
}*/
