
#include<bits/stdc++.h>
using namespace std;
int i=1,j=1;

int fiboB(int k)
{
    if(k==1) 
        return (k,1);
    else
    {
        (i,j) = fiboB(k-1);
        return (i+j,i);
    }
    
}

int main()
{
    int n;
    cin >> n;
    int a=1,b=1;
    (a,b) = fiboB(n);
    cout << a << " " << b << endl;
    return 0;
}
