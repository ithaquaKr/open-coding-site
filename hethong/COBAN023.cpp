//COBAN023 - Số mũ lớn nhất của ước số

#include<bits/stdc++.h>
using namespace std;

long largest_exp_of_divisor(long N, long P)
{
    int count=0;
    while(N)
    {
        N/=P;
        count += N;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long N,P;
        cin >> N >> P;
        cout << largest_exp_of_divisor(N,P) << endl;
    }
    return 0;
}