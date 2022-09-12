//BDSO009 - Biểu diễn số thành tổng của các số lẻ

#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

// cách(n) = cách(n-1) +cách(n-2)
// tương tự số fibo, do đó chuyển bài toán tìm số cách biểu diễn thành tìm số
//  fibo thứ n
//Func tìm số fibo thứ n
#define ll long long 
#define m 1000000007
void multiply(ll f[][2],ll g[][2])
{
    ll a=(f[0][0]*g[0][0]+f[0][1]*g[1][0])%m;
    ll b=(f[0][0]*g[0][1]+f[0][1]*g[1][1])%m;
    ll c=(f[1][0]*g[0][0]+f[1][1]*g[1][0])%m;
    ll d=(f[1][0]*g[0][1]+f[1][1]*g[1][1])%m;
    
    f[0][0]=a;
    f[0][1]=b;
    f[1][0]=c;
    f[1][1]=d;
}
void power(ll f[2][2],ll n)
{
    ll g[2][2]={{1,1},{1,0}};
    if(n==0||n==1)
    return;
    power(f,n/2);
    multiply(f,f);
    
    if(n%2==1)
    multiply(f,g);
}
ll fib(ll n)
{
    ll f[2][2]={{1,1},{1,0}};
    if(n==0)
    return 0;
    power(f,n-1);
    return f[0][0]%m;
}

// So cach 
long long count_way(int N)
{
    return fib(N);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long N;
        cin >> N;
        cout << count_way(N) << endl;
    }
    return 0;
}