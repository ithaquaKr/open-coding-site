#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		// cứ tại một vị trí gặp ')' sẽ xóa đi 1 cặp tương ứng ()
		stack <char>a;
		int count = 0;
		for(int i=0;i<s.size();i++){
			if(s[i]!=')') a.push(s[i]);
			else{
				if(a.size() == 0){
					a.push('(');
					count++;
				} 	
				else a.pop();
			}
		}
		cout<<count+a.size()/2<<endl;
	}
	return 0;
}