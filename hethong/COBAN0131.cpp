//COBAN0131 - MÁY ATM
#include<bits/stdc++.h>
using namespace std;

vector<int> c;
int n, soto=0;
int FOTP=9999999;
long long s; //so tien
void doitien(int i)
{
    for(int j=s/c[i];j>=0;j--)
    {
        soto+=j;
        s-=(j*c[i]);
        if(s==0)
            FOTP = soto;
        else if(i<n-1 && soto + s/c[i+1] < FOTP)
            doitien(i+1);
        soto -= j;
        s += (j*c[i]);
        
    }
}
int main()
{
    cin >> n >> s;
    c.resize(n);
    for(int i=0;i<n;i++)
        cin >> c[i];
    sort(c.begin(),c.end(),greater<int>());
    doitien(0);
    cout << FOTP << endl;
    return 0;
}