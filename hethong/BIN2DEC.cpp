//BIN2DEC - Chuyển đổi nhị phân sang thập phân
#include<bits/stdc++.h>
using namespace std;

void b_convert_d(string s){
    long long int result=0;
    int len = s.length();
    long long int temp = 1;
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '1')
            result += temp;
        temp = temp * 2;
    }

    cout << result << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        b_convert_d(s);
    }
    return 0;
}