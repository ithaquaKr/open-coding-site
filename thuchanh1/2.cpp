//02 - Phân tích số

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void prime_factorization(ll n){
    int arr[10000];
    int k = 0;
    while(n%2==0){         // xử lí với 2
        arr[k] = 2;
        n/=2;
        k++;
    }
    for(ll i=3;i <= sqrt(n); i+=2){   
        while(n%i == 0){
            arr[k] = i;
            n/=i;
            k++;
        }
    }
    if(n > 2){      // xử lí số nguyên tố lớn hơn 2 còn thừa lại
        arr[k] = n;
        k++;
    }
    int m = 0;
    for(int i = 0; i < k; i++){
        int count = 1;
        for(int j=i+1; j<k ;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        prime_factorization(n);
        cout << endl;
    }
    return 0;
}