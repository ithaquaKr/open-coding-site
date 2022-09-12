//UOCSO003 - Số hoàn hảo

#include<bits/stdc++.h>
using namespace std;

int perfect_num(long long n){
    long long sum=1;
    for(long long int i=2;i*i<=n; i++){
        if(n%i==0){
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum = sum + i;
        }
    }
    if(sum == n && n!=1)
        return 1;
    else
        return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << perfect_num(n) << endl;
    }
    return 0;
}