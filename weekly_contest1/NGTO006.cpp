//NGTO006 - Tìm số đặc biệt lớn nhất

#include<bits/stdc++.h>
using namespace std;

int MaxPrime(int n) {
    int CurrMaxPrime = -1;
    if(n % 2 == 0) {
        CurrMaxPrime = 2;
        while(n % 2 == 0){
            n = n/2;
        }
    }
    for(int i = 3; i <= sqrt(n); i += 2) {
        while(n % i == 0) {
            CurrMaxPrime = i;
            n = n/i;
        }
    }
    if (n > 2) 
        CurrMaxPrime = n;

     return CurrMaxPrime;
}
int special_num(int N){
    int result = -1;
    for(int i=N;i>=1;i--){
        if(MaxPrime(i) > sqrt(i)){
            result = i;
            break;
        }
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        cout << special_num(N) << endl;
    }
    return 0;
}
