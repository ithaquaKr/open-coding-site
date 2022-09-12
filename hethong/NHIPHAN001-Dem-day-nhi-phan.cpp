#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll binaryToDemical(string str, int n){
 	ll result =0;
 	for(int i=0; i<n; i++)
 	  	if(str[i]=='1')
	  		result |=1<<(n-1-i);
 	return result;
 }
int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		string s1;
 		string s2;
 		cin>>n>>s1>>s2;
 		ll len1 = binaryToDemical(s1,n);
 		ll len2 = binaryToDemical(s2,n);
 	
		if(len1==len2) cout<<0<<endl;
		else if(len1>len2)  cout<<len1-len2-1<<endl;
 		else cout<<len2-len1-1<<endl;	
 		} 
    return 0;
}
