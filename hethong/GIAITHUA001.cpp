//GIAITHUA001 - Giai thừa số lớn

#include<bits/stdc++.h>
using namespace std;

void giaithua(int n){
    long long arr[100000],i,j,m=1;
    unsigned long long int r=0,tich;
    arr[0]=arr[1]=1;
    for(i=2;i<=n;i++){
        for(j=0;j<m;j++){
           tich=arr[j]*i + r;
           arr[j] = tich%10000;
           r = tich/10000;
        }
        while(r>0){
            arr[m]=r%10000;
            m++;
            r=r/10000;
        }
    }
    if(m>1){
        printf("%d",arr[m-1]);
        for(long long k=m-2;k>0;k--)
            printf("%04d",arr[k]);
        printf("%04d",arr[0]);
    }
    else{
        printf("%d",arr[0]);
    }
}


int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        giaithua(n);
        cout << endl;
    }
    return 0;
}