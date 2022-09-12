//https://oj.vnoi.info/problem/maxnum
#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--){
    int n,p,the,kq=1000000,x[11111],so[11111],run = 0,t;
    cin>>n>>p;
    for(int i = 2;i<=p;i++){
         if(p%i==0){
              x[++run] = i;
              so[run]=0;
              while(p%i==0){
                   p/=i;
                   so[run]++;
              }
         }
    }
    for(int i = 1;i<=run;i++){
    the   = n;
    t = 0;
    while(the!=0){
          t+=the/x[i];
          the/=x[i];
          }
    kq = min(kq,t/so[i]);
    }  
    cout<<kq<<endl;
}
    //getch();
}