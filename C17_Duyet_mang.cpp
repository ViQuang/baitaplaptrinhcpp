// Duyet mang mot chieu

#include <iostream>
using namespace std; 
int main(){
	int a[5]={1,3,5,2,3},S1=0,S2=0,S3=0,i;
		cout << "Mang : "<< endl;
// Duyet khong dieu dieu kien
	for (i=0;i<5;i++)
		cout << "a["<<i<<"]="<<a[i]<<endl;
	for (i=0;i<5;i++)
			S1 +=  a[i];
		cout << "\nTong mang="<<S1;
// Duyet mang co dieu kien
	for (i=0;i<5;i++)
		if(a[i]%2==0)
			S2 += a[i];
		cout << "\nTong mang chan ="<<S2;
// Duyet mang nguoc 
	for (i = 4 ; i>=0;i--)
		if (a[i]%2)
			S3 += a[i];
		cout << "\n Tong mang le = "<<S3;
}

