//COBAN016 - Bình phương số lớn
/*
#include<bits/stdc++.h>
using namespace std;

 
// Multiplies str1 and str2, and prints result.
string printDemlo(int n)
{
    int len = n;
    string res = "";
 
    // Add numbers to res upto size
    // of str and then add number
    // reverse to it
    for (int i = 1; i <= len; i++)
    {
        if(i<9)
            res += char(i + '0');
        else    
            res += char((i-9) + '0');
    }
    for (int i = len - 1; i >= 1; i--){
        if(i<9)
            res += char(i + '0');
        else    
            res += char((i-9) + '0');
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << printDemlo(n) << endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

void larger_9(int n, bool mot = 1){   
    if(n > 9){
    	cout << "123456790";   
    	larger_9(n - 9, 0);    
    	cout << "098765432";    
    	if(mot) 
            cout << '1';    
    }
    
    else{

        if(n == 1) return;
        for(int i = 1; i <= n; i++){
        	cout << i;
		}
        for(int i = n - 1; i > 1; i--){    
            cout << i;
        }
        return;
    }
}

void smaller_9(int n){
    if(n == 1){    
        cout << 11;
        return;
    }
    for(int i = 1; i <= n; i++){
        cout << i;
    }
    for(int i = n - 1; i > 0; i--){
        cout << i;
    }
    return;
}

int main()
{   
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n; 
        if(n > 9) 
            larger_9(n);
        else 
            smaller_9(n);
        cout << endl;
    }
    return 0;
}