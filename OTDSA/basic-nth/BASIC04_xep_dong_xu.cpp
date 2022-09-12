/*
Bạn có n đồng xu và bạn muốn xây cầu thang bằng những đồng xu này.
Cầu thang gồm k hàng mà hàng thứ i có đúng i đồng tiền. Hàng cuối cùng của cầu thang có thể c
hưa hoàn thiện. Cho số nguyên n, trả về số hàng hoàn chỉnh của cầu thang mà bạn sẽ xây.
*/
#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(long long int n)
{
    int l = 0, h = n, res;
    long long mid, sum;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        sum = mid * (mid + 1) / 2;
        if (sum == n)
        {
            return mid;
        }
        else if (sum > n)
        {
            h = mid - 1;
        }
        else
        {
            res = mid;
            l = mid + 1;
        }
    }
    return res;
}

int main(){
    long long int n;
    cin>>n;
    cout << arrangeCoins(n) <<endl;
}