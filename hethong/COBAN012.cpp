//COBAN012 - Số đối xứng gần nhất
/*Not fix, more bug
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

// function check Palindrome
bool isPalindrome(string n)
{
    for (ull i = 0; i < n.size() / 2; i++)
        if (n[i] != n[n.size() - 1 - i])
            return false;
    return true;
}
 
// convert number into String
string convertNumIntoString(ull num)
{
    if (num == 0)
        return "0";

    string Snum = "";
    while (num > 0) {
        Snum += (num % 10 - '0');
        num /= 10;
    }
    return Snum;
}
void closestPlandrome(ull num)
{
    ull RPNum = num - 1;
 
    while (!isPalindrome(convertNumIntoString(llabs(RPNum))))
        RPNum--;
    ull SPNum = num + 1;

    while (!isPalindrome(convertNumIntoString(llabs(SPNum))))
        SPNum++;
    if (llabs(num - RPNum) > llabs(num - SPNum))
        cout << SPNum << endl;
    else if (llabs(num - RPNum) < llabs(num - SPNum))
        cout << RPNum << endl;
    else if (llabs(num - RPNum) == llabs(num - SPNum))
        cout << RPNum << " " << SPNum << endl;
        
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ull num;
        cin >> num;
        closestPlandrome(num);
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
bool strymetricalNumber(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-i-1])
			return false;
	}
	return true;
}
string toNum(long long num){
	if(num==0) return 0;
	string res="";
	while(num>0){
		res+=(num%10-'0');
		num/=10;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long num;cin>>num;
		if(num<10) 
            cout<<num<<endl;
		else if(strymetricalNumber(toNum(num))==true) 
            cout<<num<<endl;
		else{		
		    long long num1 = num-1;
		    while(strymetricalNumber(toNum(num1))==false) 
                num1--;
		
		    long long num2 = num+1;
		    while(strymetricalNumber(toNum(num2))==false) 
                num2++;
		
		    if(abs(num-num1) > abs(num-num2)) 
                cout << num2 <<endl;
		    else if(abs(num-num1) < abs(num-num2)) 
                cout << num1 <<endl;
		    else 
                cout << num1 << " " << num2<<endl; 
	        }
    }
	return 0;
}