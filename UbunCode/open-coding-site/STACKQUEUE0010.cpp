//STACKQUEUE0010 - POSTFIX TO PREFIX

#include<bits/stdc++.h>
using namespace std;

void postToPre(string str){
    stack<string> stk;
    int len = str.size();
    for(int i=0;i<len;i++)
    {
        if(str[i] == '+' || str[i] == '-' || str[i] =='*' || str[i] == '/' || str[i] =='^')
        {
            string a = stk.top(); stk.pop();
            string b = stk.top(); stk.pop();
            string res = str[i] + b + a;
            stk.push(res);
        }
        else
            stk.push(string(1,str[i]));
    }
    cout << stk.top() << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        postToPre(str);
    }
    return 0;
}


/*
// function to check if character is operator or not
bool isOperator(char x)
{
    switch (x) {
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }
    return false;
}
// Convert postfix to Prefix expression
string postToPre(string str)
{
    stack<string> s;
    // length of expression
    int length = str.size();
    // reading from right to left
    for (int i = 0; i < length; i++) {
        // check if symbol is operator
        if (isOperator(str[i])) {
            // pop two operands from stack
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            // concat the operands and operator
            string temp = str[i] + op2 + op1;
            // Push string temp back to stack
            s.push(temp);
        }
        // if symbol is an operand
        else {
            // push the operand to the stack
            s.push(string(1, str[i]));
        }
    }
    string ans = "";
    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        cout << postToPre(str) << endl;

    }
    return 0;
}
*/