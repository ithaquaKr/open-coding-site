// Bài 6 - ID: BASIC06 - Số hoàn hảo
#include <bits/stdc++.h>
using namespace std;

bool perfect_num(long n){
    long check = 0;
    for(int i = 1; i <= sqrt(n); i++){
    
        if(n%i == 0){
            if(n/i == i){
                check += i;
            }
            else if (i == 1){
                check += i;
            }
            else{
                check += (i+ n/i);
            }
        }
    }
    if(check == n) return true;
    return false;
}

int main()
{
    long n;
    cin >> n;
    if(perfect_num(n)) cout<< "true"<< endl;
    else cout << "false" << endl;
    return 0;
}