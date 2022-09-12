#include <bits/stdc++.h>
using namespace std; 

int main() { 
    int n;  
    cin >> n;
    float sum=0;
    for(int i = 1; i <= n; i++){
        sum = sum + 1/float(i);
    }
    cout << setprecision(4) << fixed << float(sum) << endl;
}