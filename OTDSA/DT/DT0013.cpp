// Bài 13 - ID: DT0013 - Cây khung của đồ thị theo thuật toán BFS
#include<bits/stdc++.h>
using namespace std;
#define p pair<int,int>
int V,E,check[1005],b[1005],s;
vector <int> a[1005];
vector<p> st;
void bfs(int u){
	queue <int> q;
	q.push(u);check[u]=1;
	while(q.empty()==0){
		int s=q.front();q.pop();
		for(int i=0;i<a[s].size();i++){
			int t=a[s][i];
			if(!check[t]){
				check[t]=1;
				q.push(t);
				b[t]=s;
				st.push_back(p(s,t));
			}
		}
	}
}
void initwsolve(){
	int res=0;
	cin>>V>>E>>s;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1;i<1000;i++) a[i].clear();
	for(int i=0;i<E;i++){
		int x,y;cin>>x>>y;
		a[x].push_back(y);a[y].push_back(x);
}
	bfs(s);
    if(st.size()!=V-1) cout<<-1<<endl;
    else
		for(int i=0;i<st.size();i++) 
		cout<<st[i].first<<" "<<st[i].second<<endl;
	
}
int main(){
	int t;cin>>t;
	while(t--)initwsolve();
}
