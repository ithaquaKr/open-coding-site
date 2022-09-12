#include<bits/stdc++.h>
using namespace std;

struct tamgiac
{
    int canh1,canh2,canh3;
    tamgiac(int a, int b, int c)
    {
        canh1 = a;
        canh2 = b;
        canh3 = c;
    }
    // void nhap()
    // {
    //     int a,b,c;
    //     cin >> a >> b >> c;
    //     canh1= a;
    //     canh2= b;
    //     canh3= c;
    // }
    void chuvi()
    {
        cout << canh1+canh2+canh3 << endl;
    }
};

int main()
{
    
    int a,b,c;
    cin >> a >> b >> c;
    struct tamgiac tri = tamgiac(a,b,c);
    tri.chuvi();
    return 0;
}