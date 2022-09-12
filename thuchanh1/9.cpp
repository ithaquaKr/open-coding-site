//09- Ước lũy thừa 2 lớn nhất

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void result(ll n){
    if(n%2==1)
        n=n-1;
    ll temp = 0; 
    while(n>1){
        n/=2;
        temp+=n;
    }
    cout << temp;
}

int main(){
    int t;
    cin  >> t;
    while(t--){
        ll n;
        cin >> n;
        result(n);
        cout << endl;
    }
    return 0;
}