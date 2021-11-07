//BISEARCH001 - Tìm các vị trí dãy số trong dãy số

#include<bits/stdc++.h>
using namespace std;

long binarySearch_first(long arr1[], long low, long high, long x, long n)
{
    if (high >= low) {
        long mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr1[mid - 1]) && arr1[mid] == x)
            return mid;
        else if (x > arr1[mid])
            return binarySearch_first(arr1, (mid + 1), high, x, n);
        else
            return binarySearch_first(arr1, low, (mid - 1), x, n);
    }
    return -1;
}

int main()
{
    int n,m;
    cin >> n >> m;

    long arr1[n+1],arr2[m+1];
    for(int i=0; i<n; i++)
        cin >> arr1[i];
    for(int j=0; j<m; j++)
        cin >> arr2[j];
    
    for(int j=0; j<m; j++)
    {
        long ans = binarySearch_first(arr1,0,n-1,arr2[j],n);
        if(ans == -1)
            cout << "0" << " ";
        else   
            cout << ans + 1 << " ";
    }
    return 0;
}