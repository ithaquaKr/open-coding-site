// Bài 8 - ID: BASIC08 - Số cách để tách một chuỗi
#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numSplits(string s)
    {
        unordered_map<char, int> up;
        for (int i = 0; i < s.size(); i++)
            up[s[i]]++;
        unordered_map<char, int> dp;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            dp[s[i]]++;
            up[s[i]]--;
            if (up[s[i]] == 0)
                up.erase(s[i]);
            if (dp.size() == up.size())
                count++;
        }
        return count;
    }
};

int main(){
    Solution Split;
    string s;
    cin>>s;
    cout<< (Split.numSplits(s)) <<endl;
}