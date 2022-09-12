#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	
	map<int,int> h1,h2,h3;
	int a[100005], x, sum=0;
	vector<int> res;
	for(int i=0; i<n; i++){
		cin >> a[i];
		sum += a[i];
	}
	for(int i= 0; i<n; i++){	
		res.push_back(sum);
		sum -= a[i];
	}
	
	sum = 0;
	for(int i=0; i<m; i++){
		cin >> a[i];
		sum += a[i];
	}
	for(int i=0; i<m; i++){
		h2[sum] = 1;
		sum -= a[i];
	}
	
	sum = 0;
	for(int i=0; i<k; i++){
		cin >> a[i];
		sum += a[i];
	}
	for(int i=0; i<k; i++){
		h3[sum] = 1;
		sum -= a[i];
	}
	
	int checkFound=0;
	for(int i=0; i<res.size(); i++){
		int X = res[i];
		if(h2[X] == 1 && h3[X] == 1){
			cout << X << endl;
			checkFound = 1;
			break;
		}
	}
	if(checkFound == 0){
		cout << 0 <<endl;
	}
	
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
