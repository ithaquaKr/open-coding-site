#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;cin >> n;
    int arr[n+1], res[n+1];
    
    for(int i=0 ;i <n;i++)
    {
        cin >> arr[i];
    }
    int k=0;
    for(int i = n-1; i>=0;i--){
        res[k] = arr[i];
        k++;
    }

    for(int i = 0;i <n;i++){
        cout << res[i] << " ";
    }
    return 0;
}