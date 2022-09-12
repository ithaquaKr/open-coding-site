//BDSO006 - Biểu diễn số thành tổng K số nguyên tố phân biệt

#include<bits/stdc++.h>
using namespace std;
// Sử dụng Sieve of Eratosthenes và Dynamic Programming

vector<int> prime;
bool isPrime[1000];
int dp[200][20][1000];
void sieve()
{
    memset(isPrime,true,sizeof(isPrime));
    for(int i=2;i*i<=1000;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=1000;j+=i)
                isPrime[j]=false;
        }
    }

    for(int i=2;i<=1000;i++){
        if(isPrime[i])
            prime.push_back(i);
    }

}

int count(int i, int j, int sum, int n, int k)
{
    // Nếu index vượt qua giá trị mảng
    // hoặc tổng vượt quá n
    // trả về 0;
    if (i > prime.size() || sum > n)
    {
        return 0;
    }

    if (sum == n) {
        if (j == k) {
            return 1;
        }
        return 0;
    }
    // If sum!=n and still j as
    // exceeded, return 0
    if (j == k)
        return 0;
 
    // If that state is already
    // calculated, return directly
    // the ans
    if (dp[i][j][sum])
        return dp[i][j][sum];
 
    int inc = 0, exc = 0;
    // Include the current prime
    inc = count(i + 1, j + 1,
                sum + prime[i],
                n, k);
 
    // Exclude the current prime
    exc = count(i + 1, j, sum,
                n, k);
 
    // Return by memoizing the ans
    return dp[i][j][sum] = inc + exc;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        sieve();
        cout << count(0,0,0,n,k) << endl;
        memset(dp,0,sizeof(dp));
        prime.clear();
    }
    return 0;
}