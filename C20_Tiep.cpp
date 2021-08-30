// Tiep bai 20
// Tinh do dai chuoi____ strlen(char*str)
#include<iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main (){ 
	char s1[50], s2[50];
	gets(s1);cout<<"\n";
	gets(s2);
//	cout << " Do dai chuoi S: "<< strlen(s1);
	cout <<" \nSo sanh 6:"<< strcmp(s1,s2);
	cout<< "\nSo sanh 7: "<< strncmp(s1,s2,5);
	cout << "\nSo sanh 8:"<< stricmp(s1,s2);
	cout<< "\nSo sanh 9:"<< strnicmp(s1,s2,3);
	cout << "\n Chuyen Hoa:"<< toupper('a');
	cout<< "\n Chuyen thuong:"<< tolower('M');
	return 0;
	}
