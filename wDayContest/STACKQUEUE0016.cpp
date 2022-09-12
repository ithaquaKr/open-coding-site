//STACKQUEUE0016 - Biến đổi S - T

#include<bits/stdc++.h>
using namespace std;

int count_ways(int s, int t)
{
    if (s == t)
        return 0;
 
    if (s > t)
        return s - t;

    if (s <= 0 && t > 0)
        return -1;
    if (t % 2 == 1)

        return 1 + count_ways(s, t + 1);
    else
        return 1 + count_ways(s, t / 2);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s,t;
        cin >> s >> t;
        cout << count_ways(s,t) << endl;

    }
    return 0;
}