//LUYTHUA002 - Tính phần dư phép chia luỹ thừa a mũ n cho 10 mũ 9+7
// MOD = 10^9 + 7 là số nguyên tố
/*
    1) a^b MOD m = (a MOD m)^(b MOD (m-1)) MOD m   < với m là số nguyên tố >
    2) abcde MOD m = (a MOD m)*10 + (bcde MOD m)

*/
// Thuật toán chia để trị
#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
const lld MOD = pow(10,9) +7;

lld sqr(lld x) {
    return x*x;
}

lld pow(lld a, lld n) {
    if (n == 0) return 1 % MOD;
    else
        if (n % 2 == 0)
            return sqr(pow(a, n/2)) % MOD;
        else
            return a * (sqr(pow(a, n/2)) % MOD) % MOD;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        lld a,n;
        cin >> a >> n;
        cout << pow(a,n) << endl;

    }
    return 0;
}