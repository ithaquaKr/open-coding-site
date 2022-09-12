//COBAN019 - Biến đổi số

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
/*
ull getMinSteps(ull n)
{
    ull table[100000];
    table[1]=0;
    for (ull i=1; i<=n; i++)
    {
    if (!(i%2) && (i%3))
        table[i] = 1+min(table[i-1], table[i/2]);
    else if (!(i%3) && (i%2))
        table[i] = 1+min(table[i-1], table[i/3]);
    else if(!(i%2) && !(i%3))
        table[i] = 1+min(table[i-1],min(table[i/2],table[i/3]));
    else
        table[i] =1+table[i-1];
    }
    return table[n];
}*/
ull getMinSteps(ull n){
	if(n<3) return n;
	ull tmp=0;
	tmp=1+min(n%2 + getMinSteps(n/2),n%3 + getMinSteps(n/3));
	return tmp;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ull n;
        cin >> n;
        cout << getMinSteps(n) << endl;
    }
    return 0;
}