#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
	int t, i, j;
	cin >> t;
	
	for(i = 1 ; i <= t ; i++){
		int n;
		int giaiThua = 1;
		float sum1, sum2;
		cin >> n;
		sum2 = 0;
		for(j = 2 ; j <= n + 1 ; j++){
			sum1 = pow(giaiThua + sum2, 1.0/j); 
			sum2 = sum1;
			giaiThua *= j;
		}
		std::cout << setprecision(3) << fixed << sum2 << endl;
	}
	return 0;
}