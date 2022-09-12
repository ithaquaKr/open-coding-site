// Bài 4 - ID: BT004 - Đường đi nhỏ nhất của quân mã
#include <bits/stdc++.h>
using namespace std;
 
int cld[8]={-2,-2,-1,-1,1,1,2,2};
int clc[8]={-1,1,-2,2,-2,2,-1,1};
 
struct node{
    int x, y, dem;
    node(){
        dem=0;
    }
    node(int X, int Y, int Dem){
        x=X; y=Y; dem=Dem;
    }
};
 
int main()
{
    int t; cin >> t;
    while (t--){
        queue <node> Q;
        int n, tdx1 , tdy1 , tdx2 , tdy2;
        cin >> n;
        int a[n+1][n+1];
        for (int i=1; i<=n; i++)
            for (int j=1; j<=n; j++)
                a[i][j]=0;
        cin >> tdx1 >> tdy1 >> tdx2 >> tdy2;

        Q.push(node(tdx1,tdy1,0));
        a[tdx1][tdy1]=1;
    
        while (!Q.empty())
        {
            node tmp = Q.front();
            Q.pop();
            for (int k=0; k<8; k++)
            {
                int tdx = cld[k]+tmp.x;
                int tdy = clc[k]+tmp.y;
                if (1<=tdx && tdx <=n && 1<=tdy && tdy <=n && a[tdx][tdy]==0)
                {
                    a[tdx][tdy]=1;
                    Q.push(node(tdx,tdy,tmp.dem+1));
                    if (tdx==tdx2 && tdy==tdy2)
                    {
                        cout << tmp.dem+1;
                        return 0;
                    }
                }
            }
        }
        cout << -1;
    }
    return 0;
}