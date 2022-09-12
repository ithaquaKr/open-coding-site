//COBAN005 - Hàm mũ số lớn
// MOD = 10^9 + 7 là số nguyên tố
/*
    1) a^b MOD m = (a MOD m)^(b MOD (m-1)) MOD m  <m là số nguyên tố >
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

lld get_pow(lld x, lld y) {
    if (y == 0) return 1 % MOD;
    else
        if (y % 2 == 0)
            return sqr(get_pow(x, y/2)) % MOD;
        else
            return x * (sqr(get_pow(x, y/2)) % MOD) % MOD;
}

lld get_mod(string num, lld x)
{

    lld res = 0;
    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % x;
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        lld i = get_mod(a,MOD);
        lld j = get_mod(b,(MOD-1));
        cout << get_pow(i,j) << endl;

    }
    return 0;
}