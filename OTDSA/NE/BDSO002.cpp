//https://vn.spoj.com/problems/QBMAX/
#include<bits/stdc++.h>
using namespace std;
main()
{
int t;
cin>>t;
while(t--){
int n,m,a[102][102],b[102][102],max,max1=-10000;
cin>>n>>m;
for(int i=1;i<=n;i++)
  for(int j=1;j<=m;j++)
    cin>>a[i][j];
for(int j=1;j<=m;j++)
  { b[0][j]=-10000; b[n+1][j]=-10000; }
for(int i=1;i<=n;i++)
  b[i][1]=a[i][1];
for(int j=2;j<=m;j++)
  for(int i=1;i<=n;i++)
    {
    if(b[i-1][j-1]>b[i][j-1])
       max=b[i-1][j-1];
    else max=b[i][j-1];
    if(max<b[i+1][j-1])
      max=b[i+1][j-1];
    b[i][j]=max+a[i][j];
    }
for(int i=1;i<=n;i++)
  if(b[i][m]>max1)
    max1=b[i][m];
cout<<max1<<endl;
}
//getch();
}