// Bài 1 - ID: DT001 - Số lớn
#include <bits/stdc++.h>
using namespace std;

int big_num(int N,int P){
    int the, kq = 1000000, x[111111], so[111111], run=0, t;
    for(int i = 2;i <= P;i++){
         if(P%i==0){
              x[++run] = i;
              so[run]=0;
              while(P%i==0){
                   P/=i;
                   so[run]++;
              }
         }
    }
    for(int i = 1;i<=run;i++){
    the  = N;
    t = 0;
    while(the!=0){
        t+=the/x[i];
        the/=x[i];
        }
    kq = min(kq,t/so[i]);
    }  
    return kq;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    
    while(t--){
        int N, P;
        cin >> N >> P;
        cout << big_num(N, P) << endl;
    }
    return 0;
}