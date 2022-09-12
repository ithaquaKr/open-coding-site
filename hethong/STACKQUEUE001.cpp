//STACKQUEUE001 - Dư thừa dấu ngoặc

#include<bits/stdc++.h>
using namespace std;

bool checkRedundancy(string& str){
    // create a stack of characters
    stack<char> st;
    // Duyet cac ki tu trong bieu thuc da cho trong str
    for (auto& ch : str) {
        // if current character is close parenthesis ')'
        if (ch == ')') {
            char top = st.top();
            st.pop();
            // If immediate pop have open parenthesis '('
            // duplicate brackets found
            bool flag = true;
            while (!st.empty() and top != '(') {
                // Check for operators in expression
                if (top == '+' || top == '-' ||
                    top == '*' || top == '/')
                    flag = false;
                // Fetch top element of stack
                top = st.top();
                st.pop();
            }
            // If operators not found
            if (flag == true)
                return true;
        }
        else
            st.push(ch); // push open parenthesis '(',
                  // operators and operands to stack
    }
    return false;
}
 
void findRedundant(string& str)
{
    bool ans = checkRedundancy(str);
    if (ans == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        findRedundant(str);
    }
    return 0;
}