// Bài 4 - ID: DT004 - Tính 2004^X MOD 29
#include<bits/stdc++.h>
using namespace std;

#define MOD 29

int powmod(int a, int n) {
    if(n == 0) return 1;
    int res = powmod(a, n/2);
    return n % 2 ? res * res * a % MOD : res * res % MOD;
}

int main() {
	int t;
	cin>>t;
	while(t--){
        int x;
        cin>>x;
        while(x != EOF) {
            cout<<((powmod(2,x+x+1)-1)*(powmod(3,x+1)-1)
                                *powmod(2,MOD-2)*(powmod(167,x+1)-1)
                                *powmod(166,MOD-2) % MOD);
            break;
        }
    cout<<endl;
    }
    return 0;
}