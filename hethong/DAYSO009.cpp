//DAYSO009 - Chênh lệch lớn nhất giữa 0 và 1 trong dãy nhị phân

#include<bits/stdc++.h>
using namespace std;

int binary_lis(string str,int n){
     int current_sum = 0;
    int max_sum = 0;
 
    // traverse a binary string from left
    // to right
    for (int i = 0; i < n; i++) {
        // add current value to the current_sum
        // according to the Character
        // if it's '0' add 1 else -1
        current_sum += (str[i] == '0' ? 1 : -1);
 
        if (current_sum < 0)
            current_sum = 0;
 
        // update maximum sum
        max_sum = max(current_sum, max_sum);
    }
 
    // return -1 if string does not contain
    // any zero that means all ones
    // otherwise max_sum
    return max_sum == 0 ? -1 : max_sum;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string str;
        cin >> str;
        int n = str.length();
        cout << binary_lis(str,n) << endl;

    }
    return 0;
}