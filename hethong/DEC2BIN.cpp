//DEC2BIN - Đổi hệ thập phân sang hệ nhị phân

#include<bits/stdc++.h>
using namespace std;

void d_convert_b(long long int n){
    string result = "";
    while(n >0){
        long long int sum = n%2;
        result.push_back(sum + '0');
        n/=2;
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        d_convert_b(n);
    }
    return 0;
}