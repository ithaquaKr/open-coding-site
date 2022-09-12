//MATRAN001 - Đường đi lớn nhất

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n, result;
        cin >> m >> n;
        int arr[102][102];

        for (int i = 1; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
                cin >> arr[i][j];

        for (int i = 0; i <= m; ++i)
            arr[i][0] = arr[i][n+1] = -101;

        for (int i = 2; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
                arr[i][j] += max(arr[i-1][j], max(arr[i-1][j-1], arr[i - 1][j + 1]));
            
        result = 0;
        for (int j = 1; j <= n; ++j)
            result = max(result, arr[m][j]);
        cout << result << endl;
    }
    return 0;
}