//NGTO004 - Ước nguyên tố lớn nhất

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll maxPrime(ll n)
{
    ll maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1; 
    }
    while (n % 3 == 0) {
        maxPrime = 3;
        n=n/3;
    }
    
    for (ll i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
      while (n % (i+2) == 0) {
            maxPrime = i+2;
            n = n / (i+2);
        }
    }
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << maxPrime(n)<< endl;
    }
    return 0;
}