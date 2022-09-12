#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0; i<n; i++) 
		cin >> A[i];
	
	int m, d;
	cin >> d >> m;
	int count = 0;
	for(int i=0; i<n-m+1; i++){
		int sum = 0;
		for(int j=i; j<m+i; j++){
			sum = sum + A[j];
		}
		if(sum == d){
			count++;
		}		
	}
	cout << count << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	while(test--){
		solve();
	}
	return 0;
}
