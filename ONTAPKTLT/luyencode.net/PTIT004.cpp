#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N>9)
    {
        int tmp=0,i=0,a = N;
        while(a>0)
        {
            i=a%10;
            a/=10;
            tmp+=i;
        }
        N=tmp;
    }
    cout << N << endl;
    return 0;
}