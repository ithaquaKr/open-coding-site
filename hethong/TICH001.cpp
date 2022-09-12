//TICH001 - Tích các số lẻ

#include<bits/stdc++.h>
using namespace std;

void tichsole(int n){
    int arr[100000],i,j,m=1;
    unsigned long long int r=0,tich;
    arr[0]=1;
    for(i=1;i<=(2*n+1);i+=2){
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

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        tichsole(n);
        printf("\n");
    }
    return 0;
}
