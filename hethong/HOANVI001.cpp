//HOANVI001 - Liệt kê hoán vị

#include <bits/stdc++.h>
using namespace std;

void hoanvi(int arr[15], int n)
{
        do{
            for(int i = 0; i<n;i++)
                cout << arr[i] <<(i<(n-1)?" ":"\n");
        }while(next_permutation(arr, arr + n));
}

int main()
{
    int n; 
    cin >> n;
    int arr[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    hoanvi(arr,n);
    return 0;
}
// HOANVI001 - Liệt kê hoán vị

#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
#define for(i, n) for(int i=1; i<=n; i++)
using namespace std;

int n;
int a[16];

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n; 
        for(i, n) a[i]= i;
        do{
            for(i, n) cout<<a[i]<<(i<n?" ":"\n");
        }while(next_permutation(a+1, a+1+n));
    }
}