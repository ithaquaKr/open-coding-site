//NGTO003 - Nguyên tố tổng

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool prime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

ll prime_sum(ll n)
{
        for(ll i=n;;i++)
        {
            if(prime(i) && prime(i-2))
                return i;
        }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << prime_sum(n) << endl;
    }
    return 0;
}