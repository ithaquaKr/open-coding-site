//Biểu thức căn-lũy thừa
//Với số nguyên n (1<= n <= 20) và số thực x (x>=0). Tính giá trị biểu thức
/* 
Input:
2
1 1.0
2 0
Ouput:
1.000
0.000
*/

#include<bits/stdc++.h>
using namespace std;

float tinh(long long n, float x){
    if(n == 1) return 1.0*sqrt(x);
    return sqrt(pow(x,n) + 1.0*tinh(n-1,x));
}

int main(){
    int t;
    cin >> t;           
    while(t--){
        long long n;
        float x;
        cin >> n >> x;
        cout << fixed << setprecision(3) << tinh(n,x) << endl;
    }
    return 0;
}