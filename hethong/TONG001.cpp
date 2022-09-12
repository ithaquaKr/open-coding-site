//TONG001 - Tổng các số lẻ

#include<bits/stdc++.h>
using namespace std;
long long int sumOdd(long long int n)
{
    long long int terms = (n + 1) / 2;
    long long int sum = terms * terms;
    return sum;
}
long long int sum(long long int l, long long int r)
{
    return sumOdd(r) - sumOdd(l - 1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int l,r;
        cin >> l >> r;
        cout<< sum(l,r) << endl;
    }
    return 0;
}