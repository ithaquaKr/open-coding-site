//COBAN008 - Tổng hai số lớn

#include<bits/stdc++.h>
using namespace std;

string add_big_num(string s1,string s2){
    
    if (s1.length() > s2.length())       // đảo 2 số nếu a > b
        swap(s1, s2);
    string result = "";         //Chuỗi kết quả
    int len1 = s1.length();
    int len2 = s2.length();
    reverse(s1.begin(), s1.end());     //Đảo chuỗi a
    reverse(s2.begin(), s2.end());      // Đảo chuỗi b
    
    int carry = 0;                  //biến nhớ =0
    for (int i=0; i<len1; i++)
    {
        int sum = ((s1[i]-'0')+(s2[i]-'0')+carry);         //s1[i] - '0': chuyển từ mã ASCII sang số
        result.push_back(sum%10 + '0');                     //đẩy vào vị trí sau cùng của chuỗi
        carry = sum/10;                                        //Lấy biến nhớ
    }
 
    for (int i=len1; i<len2; i++)
    {
        int sum = ((s2[i]-'0')+carry);
        result.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    if (carry)
        result.push_back(carry+'0');
 
    reverse(result.begin(), result.end());
    return result;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        cout << add_big_num(s1,s2) << endl;
    }
    return 0;
}