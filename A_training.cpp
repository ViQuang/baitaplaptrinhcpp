#include <iostream>
#include <cmath>
using namespace std;
int main()
{	int a, b;
    cin>>a>>b;
	bool f[200005];
    for (int i = 2; i<=b; i++)
        f[i]=true;
    f[1]=false;
	int can = floor(sqrt(b));
    int i = 2;
    while (i<=can) {
          if (f[i]) 
          {	 int j = i+i;
                  while (j<=b) 
                  {	 f[j] = false;
                     j += i;
                  }
             i++;
          }else
          {	i++;    }
 	}
    for(int i = a; i<=b; i++)
    if (f[i]) 
	cout << i <<"\n";
    return 0;
}
