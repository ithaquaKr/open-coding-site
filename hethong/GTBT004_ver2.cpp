#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		float x,result=0.0,mul=1.0;
		cin>>n>>x;
		for(int i=1;i<=n;i++){
			mul*=x;
			result+=(float)mul;
			result=pow(result,0.5);
		}
		cout<<fixed<<setprecision(3)<<result<<endl;
	}
	return 0;
}