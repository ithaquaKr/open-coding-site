
//07- Số các bộ số tổng bằng S
#include<bits/stdc++.h>
using namespace std;

int tongso(int K, int S){
    int i,j;
    long long count=0;
    for(i=0;i<= min(K,S);i++){
        for(j=0;j<=min(K,S-i);j++){
            int m = S - i - j;
            if(m >=0 && m <=K)
                count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int K, S;
        cin >> K >> S;
        cout << tongso(K,S) <<endl;
    }
    return 0;
}





















