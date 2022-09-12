//STACKQUEUE007 - SỬA LẠI DÃY NGOẶC
/*
#include<bits/stdc++.h>
using namespace std;

void countMin(string str)
{
    stack<char> st;
    for(int i=0;i< str.size(); i++)
    {
        if(str[i] == '(' || (str[i] == ')' && st.size() == 0))
            st.push(str[i]);
        else if(str[i] == ')')
        {
            if(st.size() > 0 && st.top() == '(')
                st.pop();
            else    
                st.push(str[i]);
        }
    }
    int d1=0,d2=0;
    while(st.size() > 0)
    {
        if(st.top() == '(')
            d1++;
        else 
            d2++;
        st.pop();
    }
    int res = d1/2 + d2/2 + d1%2 + d2%2;
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        countMin(str);
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
    cin>>t;
	while(t--){
		string s;
		cin>>s;
		// cứ tại một vị trí gặp ')' sẽ xóa đi 1 cặp tương ứng ()
		stack <char>a;
		int count = 0;
		for(int i=0;i<s.size();i++){
			if(s[i]!=')') a.push(s[i]);
			else{
				if(a.size() == 0){
					a.push('(');
					count++;
				} 	
				else a.pop();
			}
		}
		cout<<count+a.size()/2<<endl;
	}
	return 0;
}