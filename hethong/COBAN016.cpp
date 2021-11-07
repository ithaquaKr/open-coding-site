//COBAN016 - Bình phương số lớn

#include<bits/stdc++.h>
using namespace std;

string demlo(int n){
    string result = "";
    string temp1 = "123456790", temp2 = "987654320", temp3 = "987654321";
    string k0 = "120", k1 = "12320", k2="1234320", k3= "123454320", k4="12345654320",
        k5 = "1234567654320", k6= "123456787654320",k7 = "12345678987654320",
        k8 = "1234567900987654320", k9="123456790120987654320";
    int mark1 = n/10;
    for(int i=1;i<=mark1;i++){
        result += temp1;
    }
    switch (n%10)
    {
    case 1:
        result += k1;
        break;
    case 2:
        result += k2;
        break;
    case 3:
        result += k3;
        break;
    case 4:
        result += k4;
        break;
    case 5:
        result += k5;
        break;
    case 6:
        result += k6;
        break;
    case 7:
        result += k7;
        break;
    case 8:
        result += k8;
        break;
    case 9:
        result += k9;
        break;
    default:
        break;
    }
    for(int i=1;i<mark1;i++){
        result+=temp2;
    }
    result+=temp3;
    return result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << demlo(n) << endl;
    }
    return 0;
}