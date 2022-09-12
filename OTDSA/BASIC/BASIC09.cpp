// Bài 9 - ID: BASIC09 - Thay thế số nguyên
#include<bits/stdc++.h>
using namespace std;

int integerReplace(long long n){
	if( n == 1) return 0;
	long long result = 0;
	if(n % 2 == 0){
		result = 1 + integerReplace(n/2);
	}
	else{
		result = 1+min(integerReplace(n-1), integerReplace(n+1));
	}
	return result;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
    cout.tie(0);
    long long n;
    cin >> n;
    cout << integerReplace(n) << endl;
	return 0;
}


