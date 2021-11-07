//COBAN015 - Tổ hợp k phần tử
//?
#include <bits/stdc++.h>
using namespace std;
 
void makeCombiUtil(vector<vector<int> >& ans,
    vector<int>& tmp, int n, int left, int k)
{

    if (k == 0) {
        ans.push_back(tmp);
        return;
    }
    for (int i = left; i <= n; ++i)
    {
        tmp.push_back(i);
        makeCombiUtil(ans, tmp, n, i + 1, k - 1);
        tmp.pop_back();
    }
}
 
vector<vector<int> > makeCombi(int n, int k)
{
    vector<vector<int> > ans;
    vector<int> tmp;
    makeCombiUtil(ans, tmp, n, 1, k);
    return ans;
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int> > ans = makeCombi(n, k);
        cout << ans.size()<< endl;
        for (int i = 0; i < ans.size(); i++) 
        {
            cout << "[";
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans.at(i).at(j) << (j<(ans[i].size()-1)?" ":"]");
            }
            cout << endl;
        }
    }
    return 0;
}