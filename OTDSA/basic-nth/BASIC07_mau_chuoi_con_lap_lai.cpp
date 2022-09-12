/*
pro: Cho một chuỗi s, hãy kiểm tra xem nó có thể được x
ây dựng hay không bằng cách lấy một chuỗi con của nó và nối n
hiều bản sao của chuỗi con lại với nhau.

idea:

*/
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
    string s;
    cin>>s;
    if(repeatedSubstringPattern(s))
        cout<< "true" <<endl;
    else
        cout << "false" <<endl;
}