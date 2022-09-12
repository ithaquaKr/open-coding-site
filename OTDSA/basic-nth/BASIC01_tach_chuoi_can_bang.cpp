/*
ques: Chuỗi cân bằng là những chuỗi có số lượng ký tự 'L' và 'R' bằng nhau. 
Cho một chuỗi cân bằng s, hãy chia nó thành số lượng chuỗi cân bằng tối đa.
Trả lại số lượng chuỗi cân bằng đã chia tối đa.

idea: lặp và tăng dần L R, đến khi L = R thì count +=1
return count

*/

#include <bits/stdc++.h>

using namespace std;

int BalancedPartition(string str, int n)
{
    // If the size of the string is 0,
    // then answer is zero
    if (n == 0)
        return 0;
 
    // variable that represents the
    // number of 'R's and 'L's
    int r = 0, l = 0;
 
    // To store maximum number of
    // possible partitions
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
 
        // increment the variable r if the
        // character in the string is 'R'
        if (str[i] == 'R') {
            r++;
        }
 
        // increment the variable l if the
        // character in the string is 'L'
        else if (str[i] = 'L') {
            l++;
        }
 
        // if r and l are equal,
        // then increment ans
        if (r == l) {
            ans++;
        }
    }
 
    // Return the required answer
    return ans;
}
 
// Driver code
int main()
{
    string str;
    cin>>str;
    int n = str.size();
    cout << BalancedPartition(str, n) << endl;
    return 0;
}