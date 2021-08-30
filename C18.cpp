/* Khoi tao gia tri mang 2 mien */

#include <iostream>
using namespace std;
int main (){
	int mt1[2][3] = {12,13,45,4,5,6};
	int mt2[][3] = {{1,2,3},{1,3,5}};
	int i,j;
	cout << "Ma tran 1:\n";
	for ( i=0; i<2; i++)
	{ 	for (j=0 ; j<3 ; j++)
			cout<<"   "<< mt1[i][j];
		cout <<endl;
	}
	cout << "Ma tran 2:\n ";
	for (i=0;i<2;i++)	
	{	for (j=0;j<3;j++)
			cout<<"  " <<mt2[i][j];
			cout << endl;
	} 
	
	return 0;
}

