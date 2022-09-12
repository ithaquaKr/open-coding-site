//DOTHI005 - CHUYỂN DANH SÁCH KỀ SANG MA TRẬN KỀ

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n;
    string s;
    cin >> n;
    cin.ignore();
    vector<int> ke[100];
    for(int i=1; i <=n; i++)
    {
        getline(cin,s);
        s += " ";
        int tmp = 0;
        int j=0;
        while(j<s.size())
        {
            if(s[j] >= '0' && s[j] <= '9')
                tmp = 10*tmp + (int)(s[j]-'0');
            else if(tmp > 0)
            {
                ke[i].push_back(tmp);
                tmp = 0;
            }
            j++;
        }
    }
    for(int i=1; i<=n;i++)
        sort(ke[i].begin(), ke[i].end());
    int d[100][100];
    memset(d,0,sizeof(d));
    for(int i=1; i<=n; i++)
    {
        for(int j=0;j < ke[i].size();j++)
            d[i][ke[i][j]] = d[ke[i][j]][i] = 1;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}