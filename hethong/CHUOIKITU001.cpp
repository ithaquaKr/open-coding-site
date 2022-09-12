//CHUOIKYTU001 - Xâu XY

#include<bits/stdc++.h>
using namespace std;

#define M 100;

int N, K, D=0;
vector<vector<int>> V;
vector<int> x;
void Update()
{
    V.push_back(x);
    D++;
}
void res()
{
    for(int i=V.size()-1;i>=0;i--)
    {
        for(int j=0;j<V.at(i).size();j++)
        {
            if(V.at(i).at(j) == 1)
                cout << "A";
            else 
                cout << "B";
        }
        cout << endl;
    }
}
bool check()
{
    int t=0,dem=0;
    for(int i=0;i<=N-1;i++)
    {
        if(x.at(i) == 1)
            t++;
        else
            t=0;
        if(t>K)
            return false;
        else if(t==K)
            dem++;
    }
    return (dem==1);
}
void qlNhiPhan(int i)
{
    for(int j=0;j<=1;j++)
    {
        x.at(i)=j;
        if(i==N-1)
        {
            if(check())
                Update();
        }
        else
            qlNhiPhan(i+1);
    }
}

int main()
{
    //ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> K;
    x.resize(N);
    qlNhiPhan(0);
    cout << D << endl;
    res();
    return 0;
}