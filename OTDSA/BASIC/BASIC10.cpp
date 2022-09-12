// Bài 10 - ID: BASIC10 - Thay thế chuỗi con cho chuỗi cân bằng

#include<bits/stdc++.h>

using namespace std;

int balancedString(string s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.size(); i++)
        m[s[i]]++;
    int n = s.size();
    int res = n;
    int left = 0;
    for (int right = 0; right < n; right++)
    {
        m[s[right]]--;
        while (left < n && m['Q'] <= n / 4 && m['W'] <= n / 4 && m['E'] <= n / 4 && m['R'] <= n / 4)
        {
            res = min(res, right - left + 1);
            m[s[left]] += 1;
            left++;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    cout<<balancedString(s)<<endl;
}
