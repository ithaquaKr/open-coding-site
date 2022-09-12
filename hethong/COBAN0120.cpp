//COBAN0120 - Số may mắn

#include<bits/stdc++.h>
using namespace std;

void findMin(long n)
{
    long a = 0, b = 0;
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
    for (long i=0; i<a; i++)
        cout << "4";
 
    for (long i=0; i<b; i++)
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
        long n;
        cin >> n;
        findMin(n);
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        int r4=0, r7=0;
        int res4=1e5 , res7 = 1e5;
        for(int i=n; i>=0 ;i--)
        {
            if(n>= 4*i && (n-4*i)%7 == 0)
            {
                r4=i;
                r7=(n-4*i)/7;
                if(res4 + res7 > r4 + r7)
                {
                    res4 = r4;
                    res7 = r7;
                }
                else if(res4 + res7 == r4+ r7)
                {
                    if(res4 > r4)
                    {
                        res4 = r4;
                        res7 = r7;
                    }
                }
            }
        }
        if(4*res4 + 7*res7 == n)
        {
            for(int i=0;i<res4;i++)
                cout << "4";
            for(int i=0;i<res7;i++)
                cout << "7";
        }
        else
            cout <<"-1";

        cout<< endl;
    }
    return 0;
}
*/