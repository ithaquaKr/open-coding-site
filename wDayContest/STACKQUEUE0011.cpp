//STACKQUEUE0011 - ĐẢO NGƯỢC

#include<bits/stdc++.h>
using namespace std;


void reverse(string str)
{
  stack<string> st;
  string temp="";
  for(int i=str.length()-1;i>=0;i--){
    if(str[i]==' '){
      st.push(temp);
      temp="";         
    }
    else{
      temp=temp+str[i];
    }
  }
  st.push(temp);
  while(!st.empty()) {
    temp=st.top();
    cout << temp << " ";
    st.pop();
  }
}

int main()
{
    string str;
    getline(cin,str);
    reverse(str);
    return 0;
}