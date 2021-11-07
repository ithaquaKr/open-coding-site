#include<bits/stdc++.h>
using namespace std;
int giaithua(int n){
	int mul=1;
	for(int i=1;i<=n;i++){
		mul*=i;
	}
	return mul;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		float x;
		cin >> n >> x;
		float result = 0.0;
		for(int i=1;i<=n;i++){
			result+=pow(x,i)/(giaithua(i));
		}
		cout<< fixed << setprecision(3) << result <<endl;
	}
	return 0;
}