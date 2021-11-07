//FIBO004 - Biểu diễn số N dưới dạng tổng của 2 số Fibonacci
//Pass 7/10
#include<bits/stdc++.h>
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

void two_fibo(int N)
{
    int check = 0;
    for(int i = 0; i<= N/2 ; i++){
        if(isFibonacci(i) && isFibonacci(N-i))
        {
            cout << i << " "<< N-i;
            check = 1;
            break;
        }
    }
    if(check == 0)
        cout << "-1";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        two_fibo(N);
        cout << endl;
    }
    return 0;
}