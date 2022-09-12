#include<bits/stdc++.h>
using namespace std;

int n, X[20];

void result(int X[20], int n)
{
    for(int i=1;i <=n;i++){
        cout << X[i];
    }
    cout << endl;
}
void Nhiphan(int i)
{
    for(int j=0;j<=1;j++)
    {
        X[i]=j;
        if(i == n)
            result(X,n);
        else{
            Nhiphan(i+1);
        }
    }
}

int main()
{
    cin >> n;
    Nhiphan(1);
    return 0;
}