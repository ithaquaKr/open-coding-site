// UOCSO002 - Ước số nguyên tố

#include <bits/stdc++.h>
using namespace std;

long long checkSNT(long long a){
	if(a<2)
		return 0;
	else{
    	for(int i=2;i<=sqrt(a);i++){
        	if(a%i==0) 
				return 0;
    	}
	}
	return 1; 
}

void uocSo(long long a){
	for(int i = 1;i <= a;i++){
        if(a % i == 0){
			checkSNT(i);
			if(checkSNT(i)==1)
				cout << i << " ";
		}
	}		
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
		uocSo(n);
        
    }
    return 0;
}