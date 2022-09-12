//DOTHI003 - CHUYỂN TỪ DANH SÁCH CẠNH SANG DANH SÁCH KỀ
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int N,M;
        cin >> N >> M;
        vector<int> ke[N+5];
        for(int i=0; i< M;i++)
        {
            int a,b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        for(int i=1;i<N;i++)
            sort(ke[i].begin(),ke[i].end());
        for(int i=1;i<=N;i++)
        {   
            for(int j=0; j < ke[i].size();j++)
                cout << ke[i][j] << " ";
            cout << endl;
        }

    }
    return 0;
}