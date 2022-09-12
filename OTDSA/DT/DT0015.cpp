// Bài 15 - ID: DT0015 - Đi đường BFS
#include<bits/stdc++.h>
using namespace std;
int V,E,check[1005],b[1005],s,t;
vector<int>a[1005];
void bfs(int u){
	queue <int> q;
	q.push(u);check[u]=1;
	while(q.empty()==0){
		int s=q.front();q.pop();
		for(int i=0;i<a[s].size();i++){
			int t=a[s][i];
			if(check[t]==0){
				check[t]=1;
				q.push(t);
				b[t]=s;
			}
		}
	}
}
void initwsolve(){
	int res=0;
	cin>>V>>E>>s>>t;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1;i<=E;i++){
		int x,y;cin>>x>>y;
		a[x].push_back(y);a[y].push_back(x);
	}
	bfs(s);
    if(check[t]==0) cout<<-1<<endl;
    else{
    	vector <int>res;
    	int i=t; cout<<s<<" ";
    	while(i!=s){
    		res.push_back(i); i=b[i];
		}
		for(int i=res.size()-1;i>=0;i--) cout<<res[i]<<" ";
		cout<<endl;
	}
}
int main(){
	int t;cin>>t;
	while(t--)initwsolve();
}
