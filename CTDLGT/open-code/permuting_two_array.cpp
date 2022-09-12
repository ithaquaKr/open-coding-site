// C++ program to check whether permutation of two
// arrays satisfy the condition a[i] + b[i] >= k.
#include<bits/stdc++.h>
using namespace std;

// Check whether any permutation exists which
// satisfy the condition.
bool isPossible(int a[], int b[], int n, int k)
{
	// Sort the array a[] in decreasing order.
	sort(a, a + n);

	// Sort the array b[] in increasing order.
	sort(b, b + n, greater<int>());

	// Checking condition on each index.
	for (int i = 0; i < n; i++)
		if (a[i] + b[i] < k)
			return false;

	return true;
}

// Driven Program
int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        int a[n+1], b[n+1];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int j=0; j<n; j++)
            cin >> b[j];

    isPossible(a, b, n, k) ? cout << "YES" :
                    cout << "NO";
    cout << endl;
    }
    return 0;
}
