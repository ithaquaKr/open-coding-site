// Bài 7 - ID: DT007 - Gắn dây
#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
void initwsole(){
	long long n; 
	cin>>n;
	priority_queue<long long,vector<long long>, greater<long long> > pq;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
		pq.push(a[i]);;
	}
	long long p,q, sum=0,sum1=0;

    while(pq.size()){
        p = pq.top();
        pq.pop();
        q = pq.top();
        pq.pop();
        sum = (p+q)%mod;
        sum1 = (sum1+sum)%mod;
        if(pq.size()==0) 
            break;
        pq.push(sum);
    }     
    cout<<sum1<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t; cin>>t;
	while(t--) 
        initwsole();
	return 0;
}

