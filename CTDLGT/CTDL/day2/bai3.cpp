#include<bits/stdc++.h>
using namespace std;

string res="";
void dectobin(int n)
{
    res+= n%2 + '0';
    if(n==1) return;
    return dectobin(n/2);
}
int main(){
    int n;
    cin>>n;
    dectobin(n);
    reverse(res.begin(),res.end());
    cout << res << endl;
}