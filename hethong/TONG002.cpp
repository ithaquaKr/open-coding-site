//TONG002 - Tổng dãy số liên tiếp

#include<bits/stdc++.h>
using namespace std;

long long int get_sum(long long int n)
{
    long long int terms = (n*(n + 1))/ 2;
    return terms;
}
long long int sum(long long int l, long long int r)
{
    return get_sum(r) - get_sum(l - 1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int l,r;
        cin >> l >> r;
        cout << sum(l,r) << endl;
    }
    return 0;
}