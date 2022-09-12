//COBAN0110 - DOITIEN

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count = 0;
        vector<int> cent;
        cent = {1,2,5,10,20,50,100,200,500,1000};
        for(int i=cent.size()-1; i >=0 ; i--){
            while(n >= cent[i]){
                n -= cent[i];
                count++;
            }
        }
        cout << count << endl;

    }
    return 0;
}