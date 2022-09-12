//STACKQUEUE009 - PREFIX TO INFIX

#include<bits/stdc++.h>
using namespace std;

void  prefix_to_infix(string str)
{
    stack<string> temp;
    int len = str.length();
    for(int i= len-1;i>=0;i--){
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
            string operand1 = temp.top();
            temp.pop();
            string operand2 = temp.top();
            temp.pop();
            string res = '(' + operand1 + str[i] +operand2 + ')';
            temp.push(res);
        }
        else{
            temp.push(string(1,str[i]));
        }
    }

    cout << temp.top() << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        prefix_to_infix(str);

    }
    return 0;
}