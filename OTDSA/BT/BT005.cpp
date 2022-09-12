// Bài 5 - ID: BT005 - Xâu mẹ chung ngắn nhất
// Sử dụng Quy hoạch động.

#include <bits/stdc++.h>
using namespace std;

void superSeq(string str1, string str2, int m, int n)
{
    int dp[m + 1][n + 1];
 
    // Fill table in bottom up manner
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            // Below steps follow above recurrence
            if (!i)
                dp[i][j] = j;
            else if (!j)
                dp[i][j] = i;
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j]
                    = 1 + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    // return dp[m][n];
}

int main()
{
    int t; cin >> t;
    while(t--){
        string str1, str2;
        cin >> str1 >> str2;
        int m = str1.length();
        int n = str2.length();
        // cout << superSeq(str1, str2, m, n) << endl;
        superSeq(str1, str2, m, n);
    }
    return 0;
}