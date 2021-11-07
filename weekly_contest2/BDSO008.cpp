//BDSO008 - Biểu diễn số thành tổng của các số chẵn

#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

//Func tính (x^y)%z với số lớn, độ phức tạp O(log y)
int power(int x, unsigned int y, int z)
{
    int result = 1;
    x = x % z;
    while(y > 0)
    {
        if(y&1)                 //nếu y lẻ, nhân y với result
            result = (1LL*result*x)%z;
        y = y >> 1;             //y = y/2
        x = (1LL*x*x)%z;
    }
    return result;
}


// So cach = ways(m) = 2^((m/2) - 1)
int count_way(int N)
{
    return power(2, N/2 - 1, MOD);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        if(N%2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << count_way(N) << endl;
        }
        

    }
    return 0;
}