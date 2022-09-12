#include<bits/stdc++.h>
using namespace std;
long long count(long long n){
	if(n<3) return n;
	long long tmp=0;
	tmp=1+min(n%2+count(n/2),n%3+count(n/3));
	return tmp;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;cin>>t;
	while (t--){
		long long n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}
