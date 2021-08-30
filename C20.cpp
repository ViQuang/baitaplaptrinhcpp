//bai 20
//https://www.youtube.com/watch?v=7OMLHJW6zZY&list=PLq3KxntIWWrJkDaPEVmoaYW3PcZpkCzV2&index=21

#include <iostream>
#include <stdio.h>
#include <string.h>
#define m 500
using namespace std;
int main (){
// Sao chep noi dung chuoi sau vao chuoi truoc, xo� noi dung chuoi truoc

	char str1[m], str2[m];
	cout<< "Ten 1:";
	gets(str1);
	cout<< "Ten 2:";
	gets(str2);
	strcpy(str1,str2); //ham copy
	cout << "Ten: "<<str1;}
	/*
//Chen n k� tu o chuoi nguon sau qua chuoi truoc, neu chieu dai chuoi nguon <n thi ham se dien khoang trang cho du n ky tu
// video bai 20, phut 2:45

	char s1[50],s2[5];
	cout<<"\nS1: ";
	gets(s1);
	cout<<"S2:";
	gets(s2);
	strncpy(s1,s2,5); // copy n ky tu
	cout <<" The film "<<s1;
	}
*/
// Noi 2 chuoi ky tu
/*
#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char a1[50],a2[50];
	cout << "a1: ";
	gets(a1);
	cout<< "a2: ";
	gets(a2);
	// Noi 2 chuoi
	strcat(a1, a2);
	//Noi n ky tu chuoi 2 sang chuoi 1
	strncat(a1,a2,5);
	cout <<"The film: "<<a1;
	}
	
*/
