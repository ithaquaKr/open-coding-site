//GIAITHUA004 - Tính số dư tổ hợp chập k của n khi chia cho m

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
// Dynamic Program <way 1> < Vẫn chưa hiểu rõ lắm >>
ull combination_mod(int n, int k, int m)
{
    // Optimization for the cases when r is large
    if (k > n - k)
        k = n - k;
    // The array C is going to store last row of
    // pascal triangle at the end. And last entry
    // of last row is nCr
    int C[k + 1];
    memset(C, 0, sizeof(C));
    C[0] = 1; // Top row of Pascal Triangle
    // One by constructs remaining rows of Pascal
    // Triangle from top to bottom
    for (int i = 1; i <= n; i++) {
 
        // Fill entries of current row using previous
        // row values
        for (int j = min(i, k); j > 0; j--)
 
            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j - 1]) % m;
    }
    return C[k];
}

/* ?? đang sai sai
int nCrModpDP(int n, int r, int p)
{
    // The array C is going to store last row of
    // pascal triangle at the end. And last entry
    // of last row is nCr
    int C[r+1];
    memset(C, 0, sizeof(C));
    C[0] = 1; // Top row of Pascal Triangle
    // One by constructs remaining rows of Pascal
    // Triangle from top to bottom
    for (int i = 1; i <= n; i++)
    {
        // Fill entries of current row using previous
        // row values
        for (int j = min(i, r); j > 0; j--)
            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}
 
// Lucas Theorem based function that returns nCr % p
// This function works like decimal to binary conversion
// recursive function.  First we compute last digits of
// n and r in base p, then recur for remaining digits
int nCrModpLucas(int n, int r, int p)
{
   // Base case
   if (r==0)
      return 1;
 
   // Compute last digits of n and r in base p
   int ni = n%p, ri = r%p;
   // Compute result for last digits computed above, and
   // for remaining digits.  Multiply the two results and
   // compute the result of multiplication in modulo p.
   return (nCrModpLucas(n/p, r/p, p) * // Last digits of n and r
           nCrModpDP(ni, ri, p)) % p;  // Remaining digits
}

*/
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,m;
        cin >> n >> k >> m;
        cout << combination_mod(n,k,m) << endl;
        //cout << nCrModpLucas(n,k,m) << endl;
    }
    return 0;
}