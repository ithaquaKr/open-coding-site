//COBAN004 - Số đối xứng
#include<bits/stdc++.h>
using namespace std;

int count(int k){
    int result = 1;
    if( k%2 != 0 ){
        result = 9*pow(10,(k/2));
    } 
    else if(k%2 ==0){
        result = 9*pow(10,(k/2)-1);
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        cout << count(k) << endl;
    }
    return 0;
}