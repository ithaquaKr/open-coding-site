//https://oj.vnoi.info/problem/ilsmath
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--){
    int i=0,n,m=0,re[10];
    double s=1;
    cin >> n;
    if (n==1)
    {
       m++; re[1]=0;
    }
    while (s<n+1)
    {
          i++;
          s+=log(i)/log(10);
          if (s>=n)
          {
            m++; re[m]=i;
          }
    }
    if (m-1)
    {
       cout << m-1 << " ";
       for (i=1;i<m;i++) cout << re[i] << " ";
    }
    else cout << "NO";
    cout<<endl;
}
    return 0;
    
}