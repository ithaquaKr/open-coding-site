
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int giaithua(int k){
    if(k==1|k==0) return 1;
    return giaithua(k-1)*k;
}

float tinh(int n){
    int k= n;
    if(n==1) return 1;
    return pow(giaithua(k) + tinh(n-1),1.0/(n+1));
}

int main(){
    int t;
    int n;
    cin >> t;           
    while(t--){         
        cin >> n;
        cout<< setprecision(3)<< fixed << tinh(n);
        cout<< endl;
    }
    return 0;
}