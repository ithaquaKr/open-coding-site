//Ontap thi cuoi ki - rerun
//BIN2DEC - Chuyen doi nhi phan sang thap phan 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        int len = n.length();
        unsigned long long int res=0,j=1;
        for(int i=len-1;i>=0;i--)
        {
            if(n[i] == '1')
            {
                res+=j;
            }
            j*=2;
        }
        cout << res << endl;
    }
    return 0;
}