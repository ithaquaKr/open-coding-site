//COBAN019 - Biến đổi số

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull dp[1000000];

ull minimumSteps(ull n)
{

    if (n == 1)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    if (n % 3 == 0 && n % 2 == 0) {
        dp[n] = 1 + min(minimumSteps(n - 1), min(minimumSteps(n / 3), minimumSteps(n / 2)));
    }
    else if (n % 3 == 0) {
        dp[n] = 1 + min(minimumSteps(n - 1), minimumSteps(n / 3));
    }
    else if (n % 2 == 0) {
        dp[n] = 1 + min(minimumSteps(n - 1), minimumSteps(n / 2));
    }
    else
        dp[n] = 1 + minimumSteps(n - 1);

    return dp[n];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ull n;
        cin >> n;
        cout << minimumSteps(n) << endl;
    }
    return 0;
}