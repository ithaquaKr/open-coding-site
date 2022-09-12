//05 - Tổng ước số khác nhau

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void tong_uoc(ll n, ll m){
    ll arr[1000];
    ll temp = n,count =0;
    for (ll i=1; i<=sqrt(n); i++){
        if (n%i == 0){
            if (n/i == i){
                arr[count] = i;
                count+=1;
            }
            else{
                arr[count] = i;
                arr[count+1] = n/i;
                count+=2;
            }
        }
    }
    ll result = 0;
    for(long long int k = 0; k<count;k++){
        if(m % arr[k] != 0)
            result+= arr[k];
    }
    cout << result;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        tong_uoc(n,m);
        cout << endl;
    }
    return 0;
}