// Bài 14 - ID: DT0014 - Kiểm tra đồ thị có phải là cây hay không
#include<bits/stdc++.h>
using namespace std;
int V,E,u,check[1005],cycle=0;
int a[1005][1005];

void DFS(int u, int par){
	check[u]=1;
	for(int v=1;v<=V;v++){
			if(a[u][v]==1){
				if(a[u][v]==1){
					if(check[v]==0){
						DFS(v,u);
					}else if((check[v])==1&&v!=par){
						cycle=1;
					}
				}
			}
	}
	
}

void initwsolve(){
	cin>>V;
	int E=V-1;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	cycle=0;
	for(int i=1;i<=E;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	
	DFS(1,0);
	for(int i=1;i<=V;i++)
	    if(check[i]==0) cycle=1;
	if(cycle==1) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

int main(){
   int t;
   cin>>t;
   while(t--) initwsolve();
   return 0;
        
}
