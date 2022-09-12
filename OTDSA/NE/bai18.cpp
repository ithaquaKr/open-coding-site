#include<bits/stdc++.h>
#define ii pair<int,int>
using namespace std;
int V,E,check[1005];
int a[1005][1005];
vector<pair<int,int> >canh;
void dfs(int u){
      check[u]=1;
      for(int v=0;v<=V;v++){
      	if(a[u][v]==1&&check[v]==0){
      		dfs(v);
		  }
	  }
}
void initwsolve(){
	cin>>V>>E;
	canh.clear();
	int dem=0;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1;i<=E;i++){
		int x,y;cin>>x>>y;
	     a[x][y]=1;
	     a[y][x]=1;
	     canh.push_back(ii(x,y));
	}
	
	for(int i=0;i<E;i++){
		a[canh[i].first][canh[i].second]=0;
		int res=0;
		memset(check,0,sizeof(check));
		for(int k=1;k<=V;k++){
			if(check[k]==0)res++;dfs(k);
		}
		if(res>1) {
		cout<<canh[i].first<<" "<<canh[i].second<<" ";
		dem=1;
	}
		a[canh[i].first][canh[i].second]=1;
	}
	if(dem==0) cout<<"NO";
	cout<<endl;
}
int main(){
	int t;cin>>t;
	while(t--)initwsolve();
}
