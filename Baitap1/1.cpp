// tính tổng  S = 1 + 1/2 + .. + 1/N
// N< 10^6
//Output chính xác 4 chữ số sau dấu thập phân

#include <bits/stdc++.h>
using namespace std; 

int main() { 
    int n;  
    cin >> n;
    float sum=0;
    for(int i = 1; i <= n; i++){
    sum = sum + 1/float(i);
    }
    cout << setprecision(4) << fixed << sum << endl;
    
}