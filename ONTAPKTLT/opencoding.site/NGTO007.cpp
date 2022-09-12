//Ontap thi cuoi ki - rerun
//
#include<bits/stdc++.h>
using namespace std;

bool primecheck(int n)
{
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(int i=3; i<= sqrt(n); i+=2)
        if(n%i == 0)    return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int L, R;
        cin >> L >> R;
        for(int i= R; i >= L; i--)
        {
            if(primecheck(i))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}