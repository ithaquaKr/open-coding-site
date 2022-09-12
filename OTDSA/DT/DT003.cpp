// Bài 3 - ID: DT003 - Đếm chữ số
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
struct ndigit {
    ll d[11];
};
ll p[11];
ndigit f[11];
ndigit g[11];
ll a,b;
void init(void) {
    int i,j;
    p[0]=1;
    for (i=1;i<=9;i=i+1) p[i]=p[i-1]*10;
    for (i=0;i<=9;i=i+1) {
        f[1].d[i]=1;
        g[1].d[i]=1;
        f[0].d[i]=0;
        g[0].d[i]=0;
    }
    for (i=2;i<=9;i=i+1)
        for (j=0;j<=9;j=j+1) f[i].d[j]=10*f[i-1].d[j]+p[i-1];
    for (i=2;i<=9;i=i+1)
        for (j=0;j<=9;j=j+1) g[i].d[j]=g[i-1].d[j]+9*f[i-1].d[j]+p[i-1]*(j>0);
}
int ndgs(ll x) {
    int i=1;
    while (p[i]<=x) i=i+1;
    return (i);
}
ndigit count(ll x) {
    ndigit res;
    if (x<10) {
        int i;
        for (i=0;i<=9;i=i+1) res.d[i]=(i<=x);
        return (res);
    }
    int dig[11];
    int i,j,k;
    int nd=0;
    while (x>0) {
        nd++;
        dig[nd]=x%10;
        x=x/10;
    }
    res=g[nd-1];
    for (i=nd;i>0;i=i-1)
        for (j=(i==nd);j<dig[i]+(i==1);j=j+1) {
            for (k=nd;k>i;k=k-1) res.d[dig[k]]+=p[i-1];
            res.d[j]+=p[i-1];
            for (k=0;k<=9;k=k+1) res.d[k]+=f[i-1].d[k];
        }
    return (res);
}
void swap (ll &a,ll &b) {
    ll sw;
    sw=a;a=b;b=sw;
}
void process(void) {
    if (a>b) swap(a,b);
    ndigit t1=count(a-1);
    ndigit t2=count(b);
    int i;
    for (i=0;i<9;i=i+1) cout<<(t2.d[i]-t1.d[i])<<" ";
    cout<<(t2.d[9]-t1.d[9])<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    int t; cin >> t;
    while(t--){
        cin >> a >> b;
        process();
        cout << endl;
    }

    return 0;
}