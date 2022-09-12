//STACKQUEUE0015 - Số lộc phát

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void luckynumber(int n){
    vector<ull> res;
    ull count=0;
    ull MAX = pow(10,n);
    ull next = 0,div, total = 0;
    bool islucky = false, stop = true;
    for(ull i=MAX; i>= 6; i--){
        div = i;
        total = i;
        while(div > 0){
            next = div%10;
            div/=10;
            if(next == 6 || next == 8){
                islucky ==true;
                if(div == 0){
                    stop = false;
                    res.push_back(total);
                    count++;
                }
            }
            else{
                islucky = false;
                break;
            }
        }

    }
    cout << count << endl;
    for(int i=0; i<res.size();i++){
        cout << res[i] << " ";
    }
    if(islucky == false && stop == true){
        cout << -1;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        luckynumber(n);
        cout << endl;
    }
    return 0;
}
