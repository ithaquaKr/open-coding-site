//NGTO002 - Đếm số nguyên tố
#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000000; 
int prefix[MAX + 1];
 
void buildPrefix()     ///Sử dụng thuật toán sàng nguyên tố Eratosthenes
{
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));   // Đặt tất cả các giá trị của mảng prime là true
 
    for (int p = 2; p * p <= MAX; p++) {      // Thuật toán sàng nguyên tố              
        if (prime[p] == true) {    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
            for (int i = p * 2; i <= MAX; i += p)
                prime[i] = false;
        }
    }
 
    prefix[0] = prefix[1] = 0;
    for (int p = 2; p <= MAX; p++) {
        prefix[p] = prefix[p - 1];
        if (prime[p])
            prefix[p]++;
    }
}
 
int count_prime(int L, int R)
{
    return prefix[R] - prefix[L - 1];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int L,R;
        int count = 0;
        cin >> L >> R;
        buildPrefix();
        cout << count_prime(L,R) << endl;
    }
    return 0;
}