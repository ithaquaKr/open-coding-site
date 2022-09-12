//BDSO004 - Biểu diễn số thành tổng K số fibonacci

#include<bits/stdc++.h>
using namespace std;

int fibo[32] = {0};  //Lấy số fibo thứ 43 vì vượt qua 43 thì cũng quá giới hạn của int (10^6)
void fibonacci()
{
    fibo[0] = 1;
    fibo[1] = 2;
    for(int i=2;i<32;i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
}

//Đệ quy trả về số cách 
int sum_of_fibo(int N,int K, int z)
{
    if(K==0){
        if(N==0)
            return 1;
        return 0;
    }
    int temp = 0;
    for(int i = z; i>= 0 and fibo[i]*K >= N;i--)
    {
        if(fibo[i] > N)
            continue;
        temp += sum_of_fibo(N-fibo[i],K-1,i);
    }
    return temp;
}

int main()
{
    int t;
    cin >> t;
    fibonacci();
    while(t--)
    {
        int N,K;
        cin >> N >> K;  
        cout << sum_of_fibo(N,K,31) << endl;
    }
    return 0;
}
 