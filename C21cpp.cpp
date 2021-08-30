/*
#include <iostream>
using namespace std;
int main(){
	int x=7;
	float y=10.5;
	cout << "Dia chi bien x:"<<&x<<endl;
	cout << "\nDia chi bien y:"<<&y;
	}
*/

// Gán y vào a
#include <iostream>
using namespace std;
int main(){
int a = 500, x;
int *y;
x=a;
y=&a;
a=*y;
cout <<&a <<"\n";
cout<< &x <<endl;
cout <<*y<<endl;
cout <<y;}
