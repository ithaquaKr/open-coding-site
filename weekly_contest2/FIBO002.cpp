//FIBO002 - Tổng các số Fibonacci chẵn không vượt quá N

#include<bits/stdc++.h>
using namespace std;

long sum_of_even_fibo(int N)
{   
    if(N < 2)
        return 0;
    long long pre1 = 0, pre2 = 2; 
    long long result = pre1 + pre2;
    while(pre2 <= N)
    {
        long long pre3 = pre1 + 4*pre2;  //Logic Fibonacill chẵn
        if(pre3 > N)
            break;
        pre1 = pre2;
        pre2 = pre3;                     //logic fibo cơ bản
        result += pre2;

    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        cout << sum_of_even_fibo(N) << endl;
    }
    return 0;
}