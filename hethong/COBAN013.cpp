//COBAN013 - Biến đổi dương

#include<bits/stdc++.h>
using namespace std;

int biendoiduong(int n, int arr[10001])
{
    int check1=0,check2=0, check3=0;
    for(int i=0; i<n;i++)
    {
        if(arr[i] < 0)
            check1++;
        if(arr[i] >0)
            check2++;
        if(arr[i] ==0)
            check3++;
    }

    if((check1 == n || check2 == n) && check3==0)
        return 0;
    else if(check1 < check2 && check3==0)
        return check1;
    else if(check1 > check2 && check3==0)
        return check2;
    else if(check3 > 0)
        return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, arr[10001];
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cout << biendoiduong(n,arr) << endl;
    }
    return 0;
}