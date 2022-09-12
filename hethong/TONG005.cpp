//TONG005 - Số các bộ số có tổng bằng S

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int K, S;
        cin >> K >> S;
        int count=0;
        int lim1 = min(K,S);
    	for(int i=0; i<= lim1;i++){
            int lim2 = min(K,S-i);
       		for(int j=0;j <= lim2;j++){
            	int m = S - i - j;
            	if(m >=0 && m <=K)
                	count++;
        	}
    	}
        cout<< count << endl;
    }
    return 0;
}
