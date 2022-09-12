#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[1001],n;
    cin >> n;
    int temp;
    for(int i = 0; i < n;i++){
        
        cin >> temp;
        arr[i] = temp;
    }
    for(int i = n-1; i>=0 ; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}