// Số Armstrong  ID:COBAN001
/*
------------------------------------------
Số Armstrong là số mà từng chữ số trong đó lũy thừa với số chữ số
của nó bằng chính nó. Ví dụ: 153 = 1^3 + 5^3 + 3^3 .
Cho số nguyên n (1<= n <= 10^18 ). Kiểm tra xem n có phải số Armstrong?
----------------------------
Input: số lượng testcase t (t>=1). Với mỗi testcase, nhập vào một số nguyên dương n.
2
153
137
-----------
Output: mỗi dòng tương ứng 1 testcase. =1 nếu là armstrong, =0 nếu ngược lại.
1
0
-----------------
*/
#include<iostream>
#include<math.h>
using namespace std;

int armstrong_check(long long n){
    int arr[20];
    int i=0;
    long long mark = n;
    while(n>0){
        arr[i] = n % 10;
        n/=10;
        i++; 
    }
    long long arm_var=0;
    for(int j=0; j<i; j++){
        arm_var += pow(arr[j],i);
    }
    if(arm_var == mark)
        return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(armstrong_check(n) == 1)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}