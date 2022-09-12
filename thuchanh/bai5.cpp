#include <iostream>
#include <math.h>
using namespace std;
int check(long long a){
    if (a == 1) return 0;
    if (a == 2 || a == 3) return 1;
    if (a % 2 == 0 || a % 3 == 0) return 0;
    for(int i = 3; i <= sqrt(a); i += 2)
        if (a % i == 0) return 0;
    return 1;
}
int main() {
    long t;
    cin >> t;
    long long n;
    while (t--){
        long long n;
        cin >> n;
        int count =0; 
        for(int i=1;i<=n;i++){
            if(n%i==0 && check(i)==1){
                count+=1;
            }
        }
        cout<< count<<endl;
    }
    return 0;
}