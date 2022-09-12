//DEC2HEX - Chuyển đổi thập phân sang hexa

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        std::cout << std::hex << uppercase << n << endl;
    }
    return 0;
}