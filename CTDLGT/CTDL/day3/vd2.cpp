#include<bits/stdc++.h>
using namespace std;

int n,k, X[20];

void result(int X[20], int n)
{
    for(int i=1;i <=n;i++){
        cout << X[i];
    }
    cout << endl;
}
void tohop(int i)
{
    for(int j=X[i-1]+1;j<=n-k+i;j++)
    {
        X[i]=j;
        if(i == k)
            result(X,k);
        else{
            tohop(i+1);
        }
    }
}

int main()
{
    cin >> n >>k;
    tohop(1);
    return 0;
}