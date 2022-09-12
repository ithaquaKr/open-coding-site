//10 - Giá trị lớn nhất của tích các chữ số của số không vượt quá N

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll tich(ll x)
{
    ll prod = 1;
    while (x) {
        prod *= (x % 10);
        x /= 10;
    }
    return prod;
}

ll result(ll n)
{
    string b = to_string(n);
    ll ans = n;
    for (ll i = 0; i < b.size(); i++) {
        if (b[i] == '0')
            continue;

        string curr = b;
        curr[i] = ((curr[i] - '0') - 1) + '0';
        for (ll j = i + 1; j < curr.size(); j++)
            curr[j] = '9';
        ll num = 0;
        for (auto c : curr)
            num = num * 10 + (c - '0');
 
        if (num >= 1 && tich(ans) < tich(num))
            ans = num;
    }
 
    return tich(ans);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll N;
        cin >> N;
       // result(N);
        cout << result(N) << endl;
    }
    return 0; 
}