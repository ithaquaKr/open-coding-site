// Bài 7 - ID: BASIC07 - Mẫu chuỗi con lặp lại
#include<bits/stdc++.h>
using namespace std;

bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i=1; i<=n/2; i++)
            if(n%i == 0) 
                if(s.substr(0, n-i) == s.substr(i)) 
                    return true;
        return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if(repeatedSubstringPattern(s))
        cout<< "true" <<endl;
    else
        cout << "false" <<endl;
}