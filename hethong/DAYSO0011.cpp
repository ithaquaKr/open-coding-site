//DAYSO0011 - Ước chung lớn nhất cả dãy số

#include<bits/stdc++.h>
using namespace std;

int uocchung(int a, int b)
{
    if(a==0)
        return b;
    return uocchung(b% a, a);
}

int find_uocchung(int arr[],int n)
{
    int res = arr[0];
    for(int i=1;i<n;i++)
    {
        res = uocchung(arr[i],res);
        if(res == 1)
            return 1;
    }
    return res;
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
        int arr[n+1];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << find_uocchung(arr,n) << endl;
    }
    return 0;
}
