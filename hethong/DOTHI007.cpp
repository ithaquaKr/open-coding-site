//DOTHI007 - ĐẾM SỐ AO
//https://e16cn-ptit.blogspot.com/2017/12/bclkcoun-dem-so-ao.html
#include <iostream>
using namespace std;
 
int chuaxet[10004];
void khoitao ()
{
	for (int i=1; i<=10000; i++)
	{
		chuaxet[i]=1;
	}
}
 
char pond[102][102];
int dinh[102][102];
int R, C;
void nhap ()
{
	int stt=0;
	cin>>R>>C;
	for (int i=1; i<=R; i++)
	{
		for (int j=1; j<=C; j++)
		{
			cin>>pond[i][j];
			stt++;
			dinh[i][j]=stt;	//khoi tao dinh
		}
	}
}
 
int xqX[]={0, -1, -1, -1, 0, 1, 1, 1};
int xqY[]={1, 1, 0, -1, -1, -1, 0, 1};
void DFS_RA (int r, int c)
{
	for (int i=0; i<8; i++)
	{
		int X=c+xqX[i];
		int Y=r+xqY[i];
		if ((X>=1 && X<=C) && (Y>=1 && Y<=R) && chuaxet[dinh[Y][X]]==1 && pond[Y][X]=='W')
		{
			chuaxet[dinh[Y][X]]=0;	//Dinh da duyet
			DFS_RA (Y, X);
		}
	}
}
 
int main ()
{
	//IN;
	nhap ();
	//OUT;
	khoitao();
	int dem=0;
	for (int i=1; i<=R; i++)
	{
		for (int j=1; j<=C; j++)
		{
			if (pond[i][j]=='W' && chuaxet[dinh[i][j]]==1)
			{
				dem++;
				chuaxet[dinh[i][j]]=0;	//Dinh da duyet
				DFS_RA (i, j);
			}
		}
	}
	cout<<dem;
	return 0;
}