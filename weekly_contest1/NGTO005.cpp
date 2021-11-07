//NGTO005 - Tổng ước nguyên tố lớn nhất của các số không vượt quá N

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prime_sum(ll N){
    ll prime[N+1], sum = 0;
    memset(prime, 0, sizeof(prime));
    ll max = N / 2; 
    for (ll p=2; p<=max; p++){
        if (prime[p] == 0){
            for (ll i=p*2; i<=N; i += p)
                prime[i] = p;
        }
    }
    for (ll p=2; p<=N; p++){
        if (prime[p])           //Nếu p không phải số nguyên tố, prime[p] trả về thừa số nguyên tố max
             sum += prime[p];     
        else                    //Nếu p là số nguyên tố
             sum += p;                  
    }  
    return sum;     
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll N;
        cin >> N;
        cout << prime_sum(N) << endl;
    }
    return 0;
}
