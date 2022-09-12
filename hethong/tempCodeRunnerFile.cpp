//COBAN0120 - Số may mắn

#include<bits/stdc++.h>
using namespace std;

void findMin(int n)
{
    int a = 0, b = 0;
    while (n > 0)
    {
        // Cases where all remaining digits
        // are 4 or 7 (Remaining sum of digits
        // should be multiple of 4 or 7)
        if (n % 7 == 0)
        {
            b++;
            n -= 7;
        }
        else if (n % 4 == 0)
        {
            a++;
            n -= 4;
        }
        // If both 4s and 7s are there
        // in digit sum, we subtract a 4.
        else
        {
            a++;
            n -= 4;
        }
    }
    if (n < 0)
    {
        cout << "-1" << endl;;
        return;
    }
    for (int i=0; i<a; i++)
        cout << "4";
 
    for (int i=0; i<b; i++)
        cout << "7";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        findMin(n);
    }
    return 0;
}
