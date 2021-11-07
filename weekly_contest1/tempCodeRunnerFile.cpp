//COBAN025 - Số Catalan thứ n

#include<bits/stdc++.h>
using namespace std;

unsigned long catalan(int N){
    if(N<= 1)   return 1;
    unsigned long result = 0;
    for(int i = 0; i<N; i++){
        result+= catalan(i)*catalan(N-i-1);
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        cout << catalan(N) << endl;
    }
    return 0;
}