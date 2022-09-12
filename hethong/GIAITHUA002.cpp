//GIAITHUA002 - Giai thừa có n số không ở cuối 

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
//True nếu giai thừa của n chứa ít nhất n số 0 ở cuối, ngược lại false
bool check(ull p, ull n)
{
    ull temp = p, count = 0, f = 5;
    while (f <= temp)
    {
        count += temp/f;
        f = f*5;
    }
    return (count >= n);
}
 
// trả về số nhỏ nhất có giai thừa chứa ít nhất n số 0 ở cuối
ull findNum(ull n)
{
    if (n==1)
        return 5;
    ull low = 0;
    ull high = 5*n;
 
    // Binary Search.
    while (low <high)
    {
        ull mid = (low + high) >> 1;
        if (check(mid, n))
            high = mid;
        else
            low = mid+1;
    }
    return low;
}
 

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ull n;
        cin >> n;
        cout << findNum(n) << endl;
    }
    return 0;
}