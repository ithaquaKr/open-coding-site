#include<bits/stdc++.h>
#define MAX	100000
using namespace std;
// float const PI= 3.14159265358979323846;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--){
		float S, T, x, LuyThua, GiaiThua,tmp;
		long long Dau = -1,a;
		cin>>x;
		tmp=x;
		while(x > 2*3.14159265358979323846) x-=2*3.14159265358979323846;
		GiaiThua = 1;
		S = T = LuyThua = x;
		for(int i = 3; T > 0.00001; i = i+ 2)
		{
			T = (LuyThua = LuyThua * (x * x)) / (GiaiThua = GiaiThua * i * (i - 1));
			S = S + Dau * T;
			Dau = -Dau;
		}
		cout<<fixed<<setprecision(6)<<S<<endl;
		// float x;cin>>x;
		// while(x > 2*PI) x-=2*PI;
		// // x-=2*PI;
		// float mauso=1.0;
		// float tuso=x;
		// float sum=x;
		// int dau=-1;

		// for(int i=1;(tuso/mauso)> 0.00001;i++){
		// 	tuso *= x*x;
		// 	mauso *= (2*i) * (2*i+1);
		// 	sum += dau * (tuso / mauso);
		// 	dau=-dau;
		// }
		// cout<<fixed<<setprecision(6)<<sum<<endl;

	}
	return 0;
}