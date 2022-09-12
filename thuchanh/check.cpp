#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
        long long n;
        cin >> n;
        if(n%2==0)
            n = n-1;
        long long sum=0;
        while(n>1){
            n/=2;
            sum+=n;
        }
        cout << sum << endl;

    }

	return 0;
}