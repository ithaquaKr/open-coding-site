//STACKQUEUE003 - KIỂM TRA DÃY NGOẶC ĐÚNG
#include<bits/stdc++.h>
using namespace std;

void check(string str)
{
    stack<char> st;
    bool ch = true;
    for(int i=0;i<str.size();i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
            st.push(str[i]);
        else if(str[i] == '}'){
            if(st.size() == 0)
                ch = false;
            else if(st.top() == '{') 
                st.pop();
        }
        else if(str[i] == ']'){
            if(st.size() == 0)
                ch = false;
            else if(st.top() == '[') 
                st.pop();
        }
        else if(str[i] == ')'){
            if(st.size() == 0)
                ch = false;
            else if(st.top() == '(') 
                st.pop();
        }
    }
    if(st.size() > 0)
        ch = false;
    if(ch)
        cout << "Yes" << endl;
    else    
        cout << "No" << endl;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        check(str);
    }
    return 0;
}