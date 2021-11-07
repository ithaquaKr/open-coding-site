//UOCSO004- Ước nguyên tố
#include<bits/stdc++.h>
using namespace std;
//------------------------------------------------
long long int productPrimeFactors(long long int n)
{
    long long int product = 1;
    if (n % 2 == 0) {
        product *= 2;
        while (n % 2 == 0)
            n = n / 2;
    }
 
    for (long long int i = 3; i <= sqrt(n); i = i + 2) {
        if (n % i == 0) {
            product = product * i;
            while (n % i == 0)
                n = n / i;
        }
    }
    if (n > 2)
        product = product * n;
 
    return product;
}

bool result(long long int x)
{
    return( x > productPrimeFactors(x));
}

//-------------------------------------------------------------
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int x;
        cin >> x;
        if(result(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}