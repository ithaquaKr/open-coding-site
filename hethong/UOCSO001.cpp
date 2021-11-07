//UOCSO001

#include<bits/stdc++.h>
using namespace std;

int tong_uoc(int n)
{
    int result = 0;
    if(n == 1) 
      return result;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (i==(n/i))
                result += i;
            else
                result += (i + n/i);
        }
    }
    return (result + 1);
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << tong_uoc(n) << endl;
    }
    return 0;
    
}