// Bài 5 - ID: BT005 - Xâu mẹ chung ngắn nhất
// Dựa trên LCS

#include <bits/stdc++.h>
using namespace std;

// Utility function to get max
// of 2 integers
int max(int a, int b) { return (a > b) ? a : b; }
 
// Returns length of LCS for
// X[0..m - 1], Y[0..n - 1]
int lcs(string str1, string str2, int m, int n);
 
// Function to find length of the
// shortest supersequence of X and Y.
int shortestSuperSequence(string str1, string str2)
{
    int m = str1.length();
    int n = str2.length();
 
    // find lcs
    int l = lcs(str1, str2, m, n);
 
    // Result is sum of input string
    // lengths - length of lcs
    return (m + n - l);
}
 
// Returns length of LCS
// for X[0..m - 1], Y[0..n - 1]
int lcs(string str1, string str2, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;
 
    // Following steps build L[m + 1][n + 1]
    // in bottom up fashion. Note that
    // L[i][j] contains length of LCS of
    // X[0..i - 1] and Y[0..j - 1]
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
 
            else if (str1[i - 1] == str2[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
 
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
 
    // L[m][n] contains length of LCS
    // for X[0..n - 1] and Y[0..m - 1]
    return L[m][n];
}

int main()
{
    int t; cin >> t;
    while(t--){
        string str1, str2;
        cin >> str1 >> str2;
        cout << shortestSuperSequence(str1, str2) << endl;

    }
    return 0;
}