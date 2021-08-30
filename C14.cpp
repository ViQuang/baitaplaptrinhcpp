 #include <iostream>
 using namespace std;
 int cong (int , int );
 int nhan(int , int );
 int main (){
 	int x,y,z,t;
 	
 	cout << "x = ";
 	cin >> x;
 	cout << "\ny = ";
 	cin >> y;
 	z = cong(x,y);
 	t = nhan(x,y);
 	
 	cout << "\n Tong = "<<z;
 	cout << "\n Tich = "<<t;
}
int cong (int a,s int b)
{ return a+b; }
int nhan (int a,int b)
{ return a*b; }
