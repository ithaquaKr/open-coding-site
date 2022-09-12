//03 - Đếm số nguyên tố

#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000000; 
int arr[MAX + 1];
 
void eratosthenes(){     ///Sử dụng thuật toán sàng nguyên tố Eratosthenes
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));   // Đặt tất cả các giá trị của mảng prime là true
    for (int p = 2; p * p <= MAX; p++) {      // Thuật toán sàng nguyên tố              
        if (prime[p] == true) {    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
            for (int i = p * 2; i <= MAX; i += p)
                prime[i] = false;
        }
    }
 
    arr[0] = arr[1] = 0;
    for (int p = 2; p <= MAX; p++) {
        arr[p] = arr[p - 1];
        if (prime[p])
            arr[p]++;
    }
}
 
int count_prime(int L, int R){
    return arr[R] - arr[L - 1];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int L,R;
        int count = 0;
        cin >> L >> R;
        eratosthenes();
        cout << count_prime(L,R) << endl;
    }
    return 0;
}