/*
problem:   Cho một số nguyên dương n, bạn có thể áp dụng một trong các phép toán sau: 
    - Nếu n chẵn thì thay n bằng n / 2. 
    - Nếu n lẻ, thay n bằng n + 1 hoặc n - 1. 
    Trả về số phép toán tối thiểu cần thiết để n trở thành 1.

idea: ret = 0;
n = x;
while n>1
- if n even : n = n/2
- elseif 
    if n=3 || n/2 even : n-=1
    else n+=1
ret+=1

*/
#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

int integerReplace(lli x){
    int ret = 0;
    lli n =x;
    while ( n > 1 )
    {
        if( n % 2 == 0 )
            n=n/2;
        else if ( n%2 == 1){
            if(n==3 || ((n/2) % 2 == 0)) 
                n -=1;
            else 
                n+=1;
        }
        ret++;
    }
    return ret;
}

int main(){
    lli x;
    cin>>x;
    cout<<integerReplace(x)<<endl;
}