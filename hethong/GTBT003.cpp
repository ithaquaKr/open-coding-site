
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
long long int giaithua(int k){
    if(k==0) return 1;
    return k*giaithua(k-1);
}

double tinh(int n){
    int k= n;
    if(n==1) return 1;
    return pow(giaithua(k) + tinh(n-1),1.0/(n+1));
}

int main(){
    int t;
    cin >> t;           
    while(t--){    
        int n;     
        cin >> n;
        cout<< setprecision(3)<< fixed << tinh(n);
        cout<< endl;
    }
    return 0;
}