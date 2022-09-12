//BDSO007 - Biểu diễn số thành tổng của các số lũy thừa 2

#include<bits/stdc++.h>
using namespace std;

int count_Way(int N,int K)      //K- giá trị lớn nhất thỏa mãn 2^K <= N
{
    if(N == 0)
        return 1;
    if(K == 0)
        return 1;
    if( N >= pow(2,K))
    {
        int temp = pow(2,K);
        return count_Way(N-temp,K) + count_Way(N,K-1);
    }
    else    
        return count_Way(N,K-1);

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        cout << count_Way(N,log2(N)) << endl;

    }
    return 0;
}