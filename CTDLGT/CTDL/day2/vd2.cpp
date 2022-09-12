#include<bits/stdc++.h>
using namespace std;
void trans(int n, char a, char c)
{
    cout<<"\t"<< n << ":---"<<a<<"-------"<<c<<endl;
}
void Tower(int n , char a, char b, char c )
{
    if(n==1)
    {
        trans(1,a,c);
    }
    else
    {
        Tower(n-1,a,c,b);
        trans(n,a,c);
        Tower(n-1,b,a,c);
    }
    return;
}
int main(){
    char a='A', b='B', c='C';
    int n;
    cin>>n;
    Tower(n,a,b,c);
}