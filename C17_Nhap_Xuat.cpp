/* Nhap Xuat mang */
#include <iostream>
using namespace std;
void nhap(int a[], int &n){
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i=0;i<n;i++)
	{	cout << "a["<<i<<"]=";
		cin >> a[i];
	}
}
void xuat (int a[], int n){
	cout << "Mang vua nhap là: "<<endl;
	for (int i=0;i<n;i++)
		cout << "a["<<i<<"]="<<a[i]<<endl;
	}
int main (){
	int a[1000],n;
	nhap(a,n);
	xuat(a,n);
}
