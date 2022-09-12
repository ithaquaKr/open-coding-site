//BISEARCH002 - Tìm kiếm trong dãy số 
//Su dung cua bai BISEARCH001 ?
#include<bits/stdc++.h>
#define MAX	100000
using namespace std;
long binarySearch(long x,long a[],long low,long high){
	long  position=0;
	if(a[low] > x || a[high] < x) return position;
	while(low <= high){
		long  mid = (low + high) / 2;
		if(x == a[mid]){
			while(mid >= low && a[mid-1] == x) mid--;
			position = mid;
			break;
		}
		if(x < a[mid]) high = mid - 1;
		else low = mid + 1;
	}
	if(low == high && x == a[low]) position == low;
	return position;
}
void sortArray(long  arr[],int  chiso[],int n){
    vector<pair<long, int>> v;
    for (int i = 0; i < n; ++i) {
        v.push_back(make_pair(arr[i+1], i+1));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
    	arr[i+1] = v[i].first;
		chiso[i+1] = v[i].second;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
		long a[MAX],b;
		int chiso[MAX];

		long n,m;
		cin>>n>>m;

		chiso[0]=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			chiso[i]=i;
		}

		sortArray(a,chiso,n);
		for(int i=1;i <= m;i++){
			cin>>b;
			cout<<chiso[binarySearch(b,a,1,n)]<<" ";
		}
		cout<<endl;
	return 0;
}