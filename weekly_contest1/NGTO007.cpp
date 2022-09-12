//NGTO007 - Tìm số có ước nguyên tố lớn nhất

#include<bits/stdc++.h>
using namespace std;

bool is_prime(int i){
    if (i == 1) return false;
    if (i == 2 || i == 3) return true;
    if (i % 2 == 0 || i % 3 == 0) return false;
    for(int j = 3; j <= sqrt(i); j += 2)
        if (i % j == 0) return false;
    return true;
}
void result(long L, long R){
    long num_hav_prime_max = -1;
    for(long i = R; i>=L;i--){
        if(is_prime(i)){
            num_hav_prime_max = i;
            break;
        }
    }
    cout << num_hav_prime_max << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long L, R;
        cin >> L >> R;
        result(L,R);
    }
    return 0;
}