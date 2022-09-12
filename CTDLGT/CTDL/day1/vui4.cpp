#include<bits/stdc++.h>
using namespace std;
class matran
{
    public:
        int hang,cot;
        matran(int a, int b);
        //CRectangle(void);
        void inmatran();
        void nhapmatran();
};

int CRectangle::areas()
{
    return w*h;
}
CRectangle::CRectangle(int a, int b)
{
    w = a;
    h = b;
}
int main()
{
    CRectangle hcn(0,0); 
    CRectangle hcn2(7,8);

    cout << hcn.areas() << endl;
    cout << hcn2.areas() << endl;
}