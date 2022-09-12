//GTBT005 - Biểu thức sin(x)
/*
#include<bits/stdc++.h>
using namespace std;
#define M_PI  3.14159265358979323846

void cal_sin(long double x){   
    float S, T, LuyThua, GiaiThua;
		long long Dau = -1,a;
		while(x > 2*3.14159265358979323846) x-=2*3.14159265358979323846;
		GiaiThua = 1;
		S = T = LuyThua = x;
		for(int i = 3; T > 0.00001; i = i+ 2)
		{
			T = (LuyThua = LuyThua * (x * x)) / (GiaiThua = GiaiThua * i * (i - 1));
			S = S + Dau * T;
			Dau = -Dau;
		}
		cout<<fixed<<setprecision(6)<<S;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long double x;
        cin >> x;
        cal_sin(x);
        cout << endl;
    }
    return 0;
}
*/
//GTBT005 - Biểu thức sin(x)
#include<bits/stdc++.h>
#define MAX	100000
using namespace std;

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
	}
	return 0;
}