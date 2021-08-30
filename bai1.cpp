#include <iostream>
using namespace std;

int main(){
	int n; cin >> n; 
	float max_avg=INT_MIN, min_avg=INT_MAX;
	int a[n];
	for (int i=0;i<n;i++)
		{ cin >> a[i];}
	for (int i=2; i<n; i++){
		for(int j = 0; j < n - i + 1; j++){
			float sum = 0;
			for(int k = j ; k< i + j ; k++){
				sum += a[k];
			}
			max_avg=max(max_avg, sum/i);
			min_avg=min(min_avg, sum/i);
		}	
	}
	printf("%.3f %.3f",min_avg,max_avg);
}

