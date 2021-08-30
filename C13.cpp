//https://www.youtube.com/watch?v=aHXhCmZ6gNY&list=PLq3KxntIWWrJkDaPEVmoaYW3PcZpkCzV2&index=13
// Tinh tong cac so nguyen tu 1 den n. Phut 4:00 trong video
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
//Vong lap FOR 
 int main (){
 	int i, n, sum;
 	cout << "Nhap vao n ";
 	cin >> n;
 	sum = 0;
 	for (i=1;i<=n;i++)
 		sum += i;
 		cout << " \ntong cac so nguyen la: "<< sum;
 		return 0;}
