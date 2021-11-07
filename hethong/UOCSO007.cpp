//UOCSO007 - Tổng ước số khác nhau

#include<bits/stdc++.h>
using namespace std;

long long int Divisors(long long int n, long long int m, long long int arr[10000], long long int count)
{
    long long int result = 0;
    for (long long int i=1; i<=sqrt(n); i++){
        if (n%i == 0){
            if (n/i == i){
                arr[count] = i;
                count+=1;
            }
            else{
                arr[count] = i;
                arr[count+1] = n/i;
                count+=2;
            }
        }
    }
    for(long long int k = 0; k<count;k++){
        if(m % arr[k] != 0)
            result+= arr[k];
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n,m;
        cin >> n >> m;
        long long int arr[10000];
        long long int count=0;
        cout << Divisors(n,m,arr,count) << endl;
    }
    return 0;
}