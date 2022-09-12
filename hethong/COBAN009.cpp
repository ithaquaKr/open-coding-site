//COBAN009 - Đếm số chữ số

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char s[2000];
        cin >> s;
        int len = strlen(s);
        int count = 0;
        for(int i=0; i<len;i++){
            if(s[i] <= '9' && s[i] >= '0')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}