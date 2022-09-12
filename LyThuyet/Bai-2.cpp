#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
	int t, i, k;
	float x, n;
	cin >> t;
	for(i = 1 ; i <= t ; i++){
		cin >> n >> x;
		float sum1 = 0;
		for(k = 1 ; k <= n ; k++){
			float giaiThua = 1;
			for(int j = 1 ; j <= k ; j++){
				giaiThua *= j;
			}
			sum1 += 1.0f*(pow(x, k)/giaiThua);
		}
		std::cout << setprecision(3) << fixed << sum1 << endl;
	}
	return 0;
}
