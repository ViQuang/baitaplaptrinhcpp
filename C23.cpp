// Bài 23 : Tim hieu ve cont tro va cap phat bo nho dong

#include <iostream>
using namespace std;
int main (){/*
//Cap phat dong bang C++
	int *p = new int;
	if(p==NULL){
		cout << "Loi cap phat";
		exit (0);
		}
	*p = 100;
	cout << "Tai o nho "<<p<<" ";
	cout<< "la gia tri "<<*p<<" \n";
	// tranh hao ton bo nho nên ta thu hôi lai bang delete
	if(p!=NULL)
	{	delete p;
		p = NULL;
		}
*/
// Con tro void 
	int a = 5, *in = new int,*s; 
	float b=10.3, *fl = new float;
	in = &a;
	fl = &b;
	void *v;
	v = in;
	cout << "Void int : "<<((void*)v);
	v = fl;
	cout <<"\nVoid float : "<<((void*)v);
	cout <<"\n"<<&a;
	cout << "\n"<< &b;

	cout << "\n S = "<< *s;
}


