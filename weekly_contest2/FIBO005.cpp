//FIBO005 - Biểu diễn số N dưới dạng tổng của các số Fibonacci không lặp lại

#include<bits/stdc++.h>
using namespace std;

long long fibo[101], dp1[101];
long long dp2[101], v[101];
void fibonacci()
{
    fibo[1] = 1;
    fibo[2] = 2;
    for(int i=3;i<=87;i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
}

//Đệ quy trả về số cách 
int find(int n)
{
    int cnt = 0;
    for (int i = 87; i > 0; i--) {
        if (n >= fibo[i]) {
            v[cnt++] = i;
            n -= fibo[i];
        }
    }
    reverse(v, v + cnt);
    dp1[0] = 1;
    dp2[0] = (v[0] - 1) / 2;
 
    for (int i = 1; i < cnt; i++) {
 
        dp1[i] = dp1[i - 1] + dp2[i - 1];
 
        dp2[i] = ((v[i] - v[i - 1]) / 2)
                     * dp2[i - 1]
                 + ((v[i] - v[i - 1] - 1) / 2)
                       * dp1[i - 1];
    }
    return (dp1[cnt - 1] + dp2[cnt - 1]);
}

int main()
{
    int t;
    cin >> t;
    fibonacci();
    while(t--)
    {
        int n;
        cin >> n;  
        cout << find(n) << endl;
    }
    return 0;
}
 