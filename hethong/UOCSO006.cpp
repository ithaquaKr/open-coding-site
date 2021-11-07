//UOCSO006 - Cặp số bạn bè

#include<bits/stdc++.h>
using namespace std;

long long int tong_uoc(long long int n){
    long long int result = 0;
    if(n == 1) 
      return result;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            if (i==(n/i))
                result += i;
            else
                result += (i + n/i);
        }
    }
    return (result + 1);
}


int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,b;
        cin >> a >> b;
        if(tong_uoc(a) == b || tong_uoc(b) == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}