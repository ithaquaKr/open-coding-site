//STACKQUEUE008 - Biểu thức tương đương

#include<bits/stdc++.h>
using namespace std;

void bt_equa(string str)
{
    stack<int> st;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '(')
            st.push(i);
        else if(str[i] == ')')
        {
            if(st.size() > 0)
            {
                int top = st.top();
                st.pop();
                if(top == 0)
                    continue;
                else if(str[top-1] == '+')
                    continue;
                else if(str[top-1] == '-')
                {
                    for(int j=top; j <i; j++)
                    {
                        if(str[j] == '+')
                            str[j] = '-';
                        else if(str[j] == '-')
                            str[j] = '+';
                    }
                }
            }
        }
    }
    for(int i=0; i < str.size();i++)
        if(str[i] != '(' && str[i] != ')' )
            cout << str[i];
    cout << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        bt_equa(str);
    }
    return 0;
}