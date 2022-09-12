#include <iostream>
#include<math.h>
using namespace std;
int check(long long a){
    if (a == 1) return 0;
    if (a == 2 || a == 3) return 1;
    if (a % 2 == 0 || a % 3 == 0) return 0;
    for(int i = 3; i <= sqrt(a); i += 2)
        if (a % i == 0) return 0;
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        int key=0;
        for(int i=2;i<=n/2;i++){
            if(check(i)==1 &&check(n-i)==1){
                /*long long x1,x2;
                long long sum=0;
                x1=i;
                x2=n-i;
                sum=x1+x2;
                if(sum==n){
                    key=1;
                    cout << x1 << " " << x2;
                    break;
                } */
                cout << int(i)<< " "<< int (n-i) ;
                key = 1;
                break;
            }
        }
        if(key==0){
            cout << "-1";
        }
        cout << endl;
    }
  return 0;
}