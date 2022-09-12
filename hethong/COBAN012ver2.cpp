//COBAN012 - Số đối xứng gần nhất
//Not fix, more bug
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mirror(ll ans) {
    string a = to_string(ans);
    int i = 0;
    int j = a.length()-1;
    while (i < j) {
        a[j--] = a[i++];
    }
    return stoll(a,nullptr,10);
} 
void nearestPalindromic(string n) {
    int order =pow(10, n.length()/2);
    ll ans = stoll(n,nullptr,10);
    ll noChange = mirror(ans);
    ll larger = mirror((ans/order)*order + order+1);
    ll smaller = mirror((ans/order)*order - 1 );
    if ( noChange > ans) {
        larger =  min(noChange, larger);
    } else if ( noChange < ans) {
        smaller = max(noChange, smaller); 
    }       
    if((ans - larger) == (ans - smaller))
        cout << to_string(smaller) <<" "<< to_string(larger) << endl;
    else 
        cout << to_string( ans - smaller <= larger - ans ? smaller :larger) << endl;
    }
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        nearestPalindromic(n);
    }
    return 0;
}