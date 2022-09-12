#include<bits/stdc++.h>
using namespace std;

stack<int > Front;
stack<int > Behind;


void solve(){	
	int type, x;
	cin >> type;
	
	if(type == 1){
		cin >> x;
		Behind.push(x);
	}
	else{
		if(Front.empty()){
			while(!Behind.empty()){
				Front.push(Behind.top());
				Behind.pop();
			}
		}
		if(!Front.empty()){
			if(type == 2) Front.pop();
			if(type == 3) cout << Front.top() << endl;
		}
	}
}

int main(){	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}


