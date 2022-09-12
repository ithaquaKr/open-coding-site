//COBAN017 - Dãy con liên tiếp tổng lớn nhất

#include<bits/stdc++.h>
using namespace std;

int max_sub_arr_sum(int arr[], int n)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n+1];
        for(int i=0; i<n;i++)
        {
            cin >> arr[i];
        }
        cout << max_sub_arr_sum(arr,n) << endl;
    }
    return 0;
}
