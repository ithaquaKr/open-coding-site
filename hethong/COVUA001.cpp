#include<bits/stdc++.h>
using namespace std;

int h[8][2] = {-2, 1, -1, 2, 1, 2, 2, 1, 2, -1, 1, -2, -1, -2, -2, -1};
int daqua[100][100];
int x, y, m, n, sc;



int ok(int u, int k)
{
if (u >= 1 && u <= k) return 1;
else return 0;
}

void nhapdl()
{
cout << "Nhap so ha`ng M cua ban co : ";
cin >> m;
cout << "Nhap so co^.t N cua ban co : ";
cin >> n;
do
{
cout << "Nhap toa do hang ban dau X cua con ma (1<=X<=M) : ";
cin >> x;
}
while (!ok(x, m));

do
{
cout << "Nhap toa do cot ban dau Y cua con ma (1<=Y<=N) : ";
cin >> y;
}
while (!ok(y, n));
}


void khoitao()
{
sc = 0;
daqua[x][y] = 1;
}


void xuat(int c)
{
cout << "-----------------------------------------------" << endl;
cout << "Cach thu " << c << " de con ma di het ban co : " << endl;
for (int i = 1; i <= m; i++)
{
for (int j = 1; j <= n; j++)
cout << setw(5) << daqua[i][j];
cout << endl;
}
}


void mxt(int u, int v, int c)
{
int uu, vv;
if (c == m * n)
{
sc++;
xuat(sc);
}
else
{
for (int i = 0; i <= 7; i++)
{
uu = u + h[i][0];
vv = v + h[i][1];
if (ok(uu, m) && ok(vv, n))
if (!daqua[uu][vv])
{
daqua[uu][vv] = c + 1;
mxt(uu, vv, c + 1);
daqua[uu][vv] = 0;
}
}
}
}


int main()
{
nhapdl();
khoitao();
mxt(x, y, 1);
cout << "------------------------------------------------------------------";
cout << "Vay, co' tong cong " << sc << " cach de con ma di het ban co!(^_^)";
return 0;
}