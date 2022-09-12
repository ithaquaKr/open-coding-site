//BDSO001 - Biểu diễn số 01

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
const int MOD = 1e9 + 7;

ull countWays(int n)
{

    ull table[n+1];
    memset(table, 0, sizeof(table));
    table[0] = 1;
 
    for (int i=1; i<n; i++)
        for (int j=i; j<=n; j++)
            table[j] = (table[j] + table[j-i]) % MOD;
 
    return table[n];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        cout << countWays(N) << endl;

    }
    return 0;
}