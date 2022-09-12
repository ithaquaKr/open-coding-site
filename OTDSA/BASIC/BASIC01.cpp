// Bài 1 - ID: BASIC01 - Tách chuỗi thành các chuỗi cân bằng
#include<bits/stdc++.h>
using namespace std;

int split_string(string str){
    int l=0, r=0;
    int res = 0;
    for(int i=0; i < str.length(); i++){
        if(str[i] == 'L') l++;
        if(str[i] == 'R') r++;
        if(l == r) res++;
    }
    return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
    cout.tie(0);
    string str;
    cin >> str;
    cout << split_string(str) << endl;
	return 0;
}