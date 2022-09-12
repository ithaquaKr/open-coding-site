#include<bits/stdc++.h>
using namespace std;

void solve(){
	int A[6][6];
	int sum;
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cin >> A[i][j];
		}
	}
	
	int maxSum = INT_MIN;
	for(int i=0; i<=3; i++){
		for(int j=0; j<=3; j++){
			sum = A[i][j] + A[i][j+1] + A[i][j+2] + A[i+1][j+1] + A[i+2][j] + A[i+2][j+1] + A[i+2][j+2];
			maxSum = max(sum, maxSum);
		}
	}
	cout << maxSum << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
//	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}

