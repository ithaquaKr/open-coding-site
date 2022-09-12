// Bài 4 - ID: BASIC04 - Xếp đồng xu
#include<bits/stdc++.h>
using namespace std;

int coin(int n){
    int tmp = 1;
    while(n > tmp){
        n -= tmp;
        tmp++;
    }
    return tmp;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); 
    cout.tie(0);
    int n;
    cin >> n;
    cout << coin(n) - 1 << endl;
	return 0;
}


