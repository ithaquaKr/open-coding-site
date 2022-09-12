//DAYSO005 - Số cô đơn

#include<bits/stdc++.h>
using namespace std;

int FA_num(int N, int arr[])
{
    int res =0;
    sort(arr, arr+N);
    for(int i=0; i < N; i++)
    {
        if((arr[i] != arr[i-1]) && (arr[i] != arr[i+1]))
        {
            res++;
        }
    }

    return res;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N+1];
        for(int i=0; i<N;i++)
            cin >> arr[i];

        cout << FA_num(N,arr) << endl;
    }
    return 0;
}