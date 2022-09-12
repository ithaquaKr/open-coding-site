//DAYSO010 - Tìm thẻ bị thiếu

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ull N,L,sum=0;
        cin >> N >> L;
        ull total = N*L + N*(N-1)/2;
        for(ull i=0;i<N-1;i++)
        {
            ull arr;
            cin >> arr;
            sum+=arr;
        }
        cout << (total - sum) << endl;

    }
    return 0;
}