#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long n,k;
struct matrix{
	long long pos[15][15];
};

matrix multi(matrix a, matrix b){
	matrix temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp.pos[i][j]=0;
			for(int k=0;k<n;k++)
			temp.pos[i][j]=(temp.pos[i][j]+a.pos[i][k]*b.pos[k][j]%mod)%mod;
		}
	}
	return temp;
}

matrix power(matrix a, long long k){
	if(k==1) return a;
	if(k%2==0) return power(multi(a,a),k/2);
	else return multi(a,power(multi(a,a),k/2));
}

void initwsolve(){
	cin>>n>>k;
	matrix a;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++) cin>>a.pos[i][j];
	matrix b=power(a,k);
	long long res=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		if(i==j) res=(res+b.pos[i][j])%mod;
	cout<<res<<endl;
	
}

int main(){
	int t;
	cin>>t;
	while(t--) initwsolve();
	return 0;
}
