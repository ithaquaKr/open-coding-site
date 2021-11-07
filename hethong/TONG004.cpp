//TONG004 - Tổng lũy thừa bậc n

#include<bits/stdc++.h>
using namespace std;

int tongluythua(int m, int n, int num=1, int sum = 0)
{
    int result = 0;
    int p = pow(num,n);
    while(p+sum <m)
    {
        result += tongluythua(m,n,num+1,sum+p);
        num++;
        p = pow(num,n);
    }
    if(p+sum == m)
        result++;
    return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m,n;
        cin >> m >> n;
        cout << tongluythua(m,n) << endl;
    }
    return 0;
}