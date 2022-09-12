// Bài 3 - ID: BASIC03 - Chuỗi đối xứng hợp lệ
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string::iterator low, string::iterator high){
    while (low < high){
       if (*low != *high)
          return false;
       low++;
       high--;
    }
    return true;
}

bool palindrome_string(string s){
    int low = 0, high = s.length() - 1;
    while (low < high){
        if (s[low] == s[high]){
            low++;
            high--;
        }
        else{
            if (isPalindrome(s.begin() + low + 1, s.begin() + high))
                return true;
            if (isPalindrome(s.begin() + low, s.begin() + high - 1))
                return true;
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if(palindrome_string(s)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}