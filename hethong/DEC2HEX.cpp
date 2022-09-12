//DEC2HEX - Chuyển đổi thập phân sang hexa

#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

void d_convert_b(long long int n){
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    long long int temp;
    string result = "";
    if(n==0)
        cout << "0" << endl;
    else{
        while(n>0)
        {
            temp = n % 16;
            result = hex[temp] + result;
            n = n/16;
        }
        cout << result << endl;
    }
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