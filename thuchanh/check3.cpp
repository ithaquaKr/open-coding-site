#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	int i, j;
	for(i = 1 ; i <= t ; i++){
		cin >> n;
		long long giaiThua = 1;
		double ketQua = 0.0;
		for(j = 2 ; j <= n + 1 ; j++){
			ketQua = 1.0f*pow(ketQua + giaiThua, 1.0/j);
			giaiThua *= j;
		}
		std::cout << setprecision(3) << fixed << ketQua << endl;
	}
	return 0;
}