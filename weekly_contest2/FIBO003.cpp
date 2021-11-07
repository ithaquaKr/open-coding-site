//FIBO003 - Số Fibonacci kế tiếp

#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x)
{
    int temp = sqrt(x);
    return (temp*temp == x);
}

bool isFibonacci(int x)
{
    return  isPerfectSquare(5*x*x + 4) ||
            isPerfectSquare(5*x*x - 4);
}

long nextFibo(int N)
{   
    int i = N + 1;
    while(1)
    {
        if(isFibonacci(i) == false)
        {
            
            return i;
        }
        i++;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        cout << nextFibo(N) << endl;
    }
    return 0;
}