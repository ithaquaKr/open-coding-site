//COBAN018 - Ước luỹ thừa 2 lớn nhất

#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
///////////////////???
int log_highestPowerOf2(lld n){
    return log2((n & (~(n - 1))));
}
 /////////////////////??
void result(lld n){
    if(n%2==1)
        n = n-1;
    long long kq=0;
    while(n>1){
        n/=2;
        kq+=n;
    }
    cout << kq;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        lld n;
        cin >> n;
        result(n);
        cout << endl;
    }
    return 0;
}