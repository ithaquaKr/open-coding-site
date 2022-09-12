/*
problem: Bạn được cung cấp một chuỗi có độ dài n chỉ chứa bốn loại ký tự: 'Q', 'W', 'E' và 'R'. 
Một chuỗi được cho là cân bằng nếu mỗi ký tự của nó xuất hiện n / 4 lần trong 
đó n là độ dài của chuỗi. 
Trả về độ dài tối thiểu của chuỗi con có thể được thay 
thế bằng bất kỳ chuỗi nào khác có cùng độ dài để làm cho s cân bằng.
Nếu s đã được cân bằng, trả về 0.

idea: - đếm số lượng mỗi từ
    - nếu từ nào có số lượng >n/4 thì sẽ cần thay thế
    make one map m
    for each character in s, store the frequency of characters into map, n := size of s
    res := n, left := 0
    for right in range 0 to n – 1
    decrease m[s[right]] by 1
    while left < n and m[Q] <= n/4 and m[W] <= n/4 and m[E] <= n/4 and m[R] <= n/4
    res := minimum of res, right – left + 1
    increase m[s[left]] by 1
    increase left by 1
    return res
*/
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
    string s;
    cin>>s;
    cout<<balancedString(s)<<endl;
}
