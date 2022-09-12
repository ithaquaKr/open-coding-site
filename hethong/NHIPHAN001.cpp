//NHIPHAN001 - Đếm dãy nhị phân

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
/*
// Function to convert binary to decimal
uli b_convert_d(string s){
    uli result=0;
    int len = s.length();
    uli temp = 1;
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '1')
            result += temp;
        temp = temp * 2;
    }

    return result;
}
*/
ll binaryToDemical(string str, int n){
 	ll result =0;
 	for(int i=0; i<n; i++)
 	  	if(str[i]=='1')
	  		result |=1<<(n-1-i);
 	return result;
 }

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        //uli a = b_convert_d(s1);
        //uli b = b_convert_d(s2);
        ll len1 = binaryToDemical(s1,n);
        ll len2 = binaryToDemical(s2,n);
        if(len1 > len2){
            cout << len1-len2-1 << endl;
        }
        else if(len1 < len2) 
            cout << len2-len1-1 << endl;

        else if(len1 == len2)
            cout << 0 << endl;

    }
    return 0;
}