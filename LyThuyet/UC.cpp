#include<iostream>
using namespace std;

long long gcd(long a, int b) {
    if (b == 0) return a;
    return gcd(b, (int) (a % b));
}

long long lcm(long a, int b){
     return (a*b)/gcd(a,b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long x=1;
        for(int i=2;i<=n;i++){
             x=lcm(x,i);
        }
        cout<<x<<endl;
    }
}
