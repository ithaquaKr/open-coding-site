//DAYSO003 - Đếm số dãy con K phần tử có tổng nhỏ nhất

#include<bits/stdc++.h>
using namespace std;

// Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
 
    return C[n][k];
}
// Function to return the count
// of valid subsequences
int cntSubSeq(int arr[], int n, int k)
{
    // Sort the array
    sort(arr, arr + n);
    // Maximum among the minimum K elements
    int num = arr[k - 1];
    // Y will store the frequency of num
    // in the minimum K elements
    int Y = 0;
    for (int i = k - 1; i >= 0; i--) {
        if (arr[i] == num)
            Y++;
    }
    // cntX will store the frequency of
    // num in the complete array
    int cntX = Y;
    for (int i = k; i < n; i++) {
        if (arr[i] == num)
            cntX++;
    }
    return binomialCoeff(cntX, Y);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N, K;
        cin >> N >> K;
        int arr[N+1];
        for(int i=0;i<N;i++)
        {
            cin >> arr[i];
        }
        cout << cntSubSeq(arr,N,K) << endl;
    }
    return 0;
}