//BDSO003 - Biểu diễn số 03

#include<bits/stdc++.h>
using namespace std;

unsigned long int binomialCoeff(int n, int k)         //Binomial Coefficient C(n, k)
{
    unsigned long int arr[n + 1][k + 1];
    int i, j;
 
    // Calculate value of Binomial Coefficient in bottom up manner
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            // Base Cases
            if (j == 0 || j == i)
                arr[i][j] = 1;
            // Calculate value using previously stored values
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
 
    return arr[n][k];

}
 

int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        int n,k;
        cin >> n >> k;
        cout << binomialCoeff(n-1,k-1) << endl;


    }
    return 0;
}