//COBAN024 - Đổi tiền xu

#include<bits/stdc++.h>
using namespace std;

//DP7-Geekforgeeks
//Way 1 to code
int exchange_coins(int arr[], int m, int N){ 
    if (N == 0)
        return 1;  
    if (N < 0)
        return 0;
    if (m <= 0 && N >= 1)
        return 0;
    return exchange_coins(arr, m - 1, N) +
           exchange_coins(arr, m, N - arr[m - 1]);
}

int main(){
    int N,m;
    int arr[20];
    cin >> N >> m;
    for(int i=0; i<m ; i++)
        cin >> arr[i];

    cout << exchange_coins(arr,m,N) << endl;

    return 0;
}