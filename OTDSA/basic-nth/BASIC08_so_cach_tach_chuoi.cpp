/*
Cho một chuỗi nhị phân s, bạn có thể chia s thành 3 chuỗi không rỗng s1, s2 và s3 trong đó s1 + s2 + s3 = s. Trả về số cách chia s sao cho số cách chia s1, s2 và s3 là như nhau. Vì câu trả lời có thể quá lớn, hãy trả kết quả theo mô-đun 10^9 + 7.

idea:
no idea. copy if you want high score.
*/
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