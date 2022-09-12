//BISEARCH001 - Tìm các vị trí dãy số trong dãy số

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
/*
ull binarySearch_first(ull arr1[], ull low, ull high, ull x, ull n)
{
    if (high >= low) {
        ull mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr1[mid - 1]) && arr1[mid] == x)
            return mid;
        else if (x > arr1[mid])
            return binarySearch_first(arr1, (mid + 1), high, x, n);
        else
            return binarySearch_first(arr1, low, (mid - 1), x, n);
    }
    return -1;
}
*/
/*
lli findFirst(lli arr1[], lli n, lli x)
{
    lli first = -1;
    for (lli i = 0; i < n; i++) {
        if (x != arr1[i])
            continue;
        if (first == -1)
            first = i;
    }
    if (first != -1)
        return first;
    else
        return -1;
}*/
/*
lli findFirst(lli arr1[], lli n, lli x)
{
    lli first;
    // to store first occurrence
    first = lower_bound(arr1, arr1 + n, x) - arr1;
    if (first == n) {
        first = -1;
    }
    return first;
}
 
int main()
{
    ull n,m;
    cin >> n >> m;

    ull arr1[n+1],arr2[m+1];
    for(int i=0; i<n; i++)
        cin >> arr1[i];
    for(int j=0; j<m; j++)
        cin >> arr2[j];
    
    for(int j=0; j<m; j++)
    {
       // ull ans = binarySearch_first(arr1,0,n-1,arr2[j],n);
        //ull ans = findFirst(arr1,n-1,arr2[j]);
        //ull ans = first(arr1,n,arr2[j]);
        if(ans == -1)
            cout << "0" << " ";
        else   
            cout << ans + 1 << " ";
    }
    return 0;
}

*/

/*
lli first(lli arr1[], lli x, lli n)
{
    lli low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
         
        if (arr1[mid] > x)
            high = mid - 1;
        else if (arr1[mid] < x)
            low = mid + 1;
        else
        {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}
*/