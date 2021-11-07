//FIBO001 - Tìm số thứ n không thuộc dãy Fibonacci
#include<bits/stdc++.h>
using namespace std;

long notFibonacci(long N)
{
    long prevPrev=1, prev=2, curr=3; 
    //curr : lưu số fibo đang xét
    //prePrev: số trước trước
    //prev: số trước
    while (N > 0)  //Khi biến đến số Fibo thứ .. không âm
    {
        prevPrev = prev; 
        prev = curr;
        curr = prevPrev + prev;  // chạy số fibo cơ bản
        N = N - (curr - prev - 1); //(curr - prev - 1) là số các số không phải fibo ở giữa curr và prev
    }
    N = N + (curr - prev - 1);
    return prev + N;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long N;
        cin >> N;
        cout << notFibonacci(N) << endl;

    }
    return 0;
}