//Đếm số nguyên tố tuần hoàn
/*
Số nguyên tố hoàn toàn (full prime) là số nguyên tố mà mỗi chữ số của nó cũng là số nguyên tố
Hãy đếm số các số nguyên tố hoàn toàn nhỏ hơn hoặc bằng 1 giá trị nguyên dương cho trước (1<= n <= 10^6)
-------------------------------------
*/
#include<iostream>
#include<math.h>

using namespace std;
bool is_prime(int i){
    if (i == 1) return false;
    if (i == 2 || i == 3) return true;
    if (i % 2 == 0 || i % 3 == 0) return false;
    for(int j = 3; j <= sqrt(i); j += 2)
        if (i % j == 0) return false;
    return true;
}
bool is_full_prime(int i){
    int arr[10];
    int c=0;
    while(i>0){
        arr[c] = i% 10;
        i/= 10;
        c++;
    }
    int mark = 0;
    for(int j=0;j<c;j++){
        if(is_prime(arr[j]) == false)
            return false;
    }
    return true;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,i;
        int count = 0;
        cin >> n;
        for(i = 2; i <= n; i++){
            if(is_prime(i) && is_full_prime(i)){
                count++;
                cout << i << endl;
            }
                
        }
        cout << count << endl;
    }
    return 0;
}