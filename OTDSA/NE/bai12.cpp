#include<bits/stdc++.h>
using namespace std;
#define p pair<int,int>
int V,E,check[1005],b[1005],s;
vector <int> a[1005];
vector<p> st;
void DFS(int u){
	check[u]=1;
	
		for(int i=0;i<a[u].size();i++){
			int v=a[u][i];
			if(!check[v]){
				st.push_back(p(u,v));
				DFS(v);
			}
		}
	
}
void initwsolve(){
	memset(check,0,sizeof(check));
    st.clear();
    cin>>V>>E>>s;
	for(int i=1;i<1000;i++) a[i].clear();
	for(int i=0;i<E;i++){
		int x,y;cin>>x>>y;
		a[x].push_back(y);a[y].push_back(x);
}
	DFS(s);
    if(st.size()!=V-1) cout<<-1<<endl;
    else
		for(int i=0;i<st.size();i++) 
		cout<<st[i].first<<" "<<st[i].second<<endl;
	
}
int main(){
	int t;cin>>t;
	while(t--)initwsolve();
}
