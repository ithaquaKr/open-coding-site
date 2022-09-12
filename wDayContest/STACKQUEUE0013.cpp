//STACKQUEUE0013 - SỐ THỨ TỰ DẤU NGOẶC

#include<bits/stdc++.h>
using namespace std;

void number_operator(string str)
{
    stack<int> stt;
    int tmp=1;
    for(int i=0;i<str.length();i++){
        if(str[i] == '('){
            cout << tmp << " ";
            stt.push(tmp);
            tmp++;
        }
        else if(str[i] == ')'){
            cout << stt.top() << " ";
            stt.pop();
        }
    }
    cout << endl;
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        number_operator(str);
    }
    return 0;
}