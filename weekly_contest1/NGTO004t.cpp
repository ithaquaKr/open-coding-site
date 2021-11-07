//NGTO004 - Ước nguyên tố lớn nhất

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
   ll div=2, ans = 0, maxFact;
   while(n!=0) {
      if(n % div !=0)
         div = div + 1;
      else {
         maxFact = n;
         n = n / div;
         if(n == 1) {
            cout << maxFact << endl;
            ans = 1;
            break;
         }
      }
   }
    }
    return 0;
}