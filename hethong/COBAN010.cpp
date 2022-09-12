//COBAN010 - Lũy thừa dư

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = pow(10,9) +7;

ll sqr(ll x){
    return x*x;
}
/*
Thuật toán: Chia để trị
*/
ll get_pow(int a, int n){
    if (n == 0) return 1 % MOD;     
    else
        if (n % 2 == 0)
            return sqr(get_pow(a, n/2)) % MOD;
        else
            return a * (sqr(get_pow(a, n/2)) % MOD) % MOD;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int a,n;
        cin >> a >> n;
        cout << get_pow(a,n) << endl;
    }
    return 0;
}