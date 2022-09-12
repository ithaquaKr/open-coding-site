#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		float x;
		cin >> n >> x;
		float result = 0;
		int i;
		float tmp;
		for(i = 1 ; i <= n ; i++){
			result = 1.0f*sqrt(result + pow(x, i));
		}
		cout << fixed << setprecision(3)  << result << endl;
	}
	return 0;
}
