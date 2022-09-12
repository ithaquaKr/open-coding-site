// Bài 6 - ID: DT006 - Nhầm số
#include<bits/stdc++.h>
using namespace std;
int convert(string s){
	int res=0;
	for(int i=0;i<s.length();i++){
		res=10*res+s[i]-48;
	}
	
	return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while(t--){
        string a,b;
        cin>>a>>b;
        int min=0, max=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='5') 
                a[i]='3';
        }
        
        for(int i=0;i<b.length();i++){
            if(b[i]=='5') 
                b[i]='3';
        }
        
        cout<<convert(a)+convert(b)<<" ";
        
        for(int i=0;i<a.length();i++){
            if(a[i]=='3') 
                a[i]='5';
        }
        
        for(int i=0;i<b.length();i++){
            if(b[i]=='3') 
                b[i]='5';
        }
        
        cout << convert(a) + convert(b) << endl;
    }
	return 0;
	
}