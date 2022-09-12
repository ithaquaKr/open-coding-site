// Bài 1 - ID: BT001 - Dãy con chung dài nhất
#include<bits/stdc++.h>
using namespace std;
long long F[105][105][105];
void xuly(vector<int> a, vector<int> b, vector<int> c, int n, int m, int k){
    memset(F,0,sizeof(F));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int l=1;l<=k;l++){
                if(a[i-1]==b[j-1] && b[j-1]==c[l-1]){
                    F[i][j][l]=F[i-1][j-1][l-1]+1;
                }
                else F[i][j][l]=max(F[i-1][j][l] , max(F[i][j-1][l],F[i][j][l-1]));
            }
        }
    }
    cout << F[n][m][k] << endl;
}
int main(){
    int t; 
    cin>>t;
    while(t--){ 
        int m,n,k;
        vector <int> a,b,c;
        a.clear();
        b.clear();
        c.clear();
        cin>>m;
        for(int i = 0;i < m;i++ ){
            int x;
            cin>>x;
            a.push_back(x);
        }
        cin>>n;
        for(int i = 0;i < n;i++ ){
            int x;
            cin>>x;
            b.push_back(x);
        }
        cin>>k;
        for(int i = 0;i < k;i++ ){
            int x;
            cin>>x;
            c.push_back(x);
        }
        xuly(a,b,c,m,n,k);
    }
}