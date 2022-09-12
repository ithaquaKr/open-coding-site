#include<bits/stdc++.h>
using namespace std;
int V,E,check[1005];
int a[1005][1005];
void bfs(int u){
	queue <int> q;
	q.push(u);check[u]=1;
	while(q.size()){
		int s=q.front();q.pop();
		for(int i=0;i<=V;i++){
			if(a[s][i]==1&&check[i]==0){
				check[i]=1;
				q.push(i);
			}
		}
	}
}
void initwsolve(){
	int res=0,dem=0;
	cin>>V>>E;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1;i<=E;i++){
		int x,y;cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	
	for(int i=1;i<=V;i++){
		memset(check,0,sizeof(check));
		check[i]=1;res=0;
		for(int j=1;j<=V;j++){
			if(check[j]==0){
				bfs(j);res++; 
			}
		}
	if(res>1){
		cout<<i<<" ";
			dem=1;
		}
	}
   if(dem==0) cout<<"NO";
	cout<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)initwsolve();
}
