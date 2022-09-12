#include <bits/stdc++.h>
using namespace std;

static const char so[] =
"0123456789"
"!@#$%^&*";
static const char chu[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int doDaiChuoi1 = sizeof(so) - 1;
int doDaiChuoi2 = sizeof(chu) - 1;

char randomAlpha(){

    return chu[rand() % doDaiChuoi2];
}

char randomNum(){

    return so[rand() % doDaiChuoi1];
}

int main(){
    int x;
    cout << "Vui long nhap do dai mat khau :";
    cin >> x;
    if(x<6){
        cout << "Do dai mat khau phai > 6, Vui long nhap lai :";
        cin >> x;
    }
    if (x>=6){
        srand(time(0));
        string str;
        for(unsigned int i = 0; i < x; ++i){
            str = str + randomAlpha(); // str = str + randomNum();

        }   
    cout << "Mat khau goi y cho ban la : ";
    cout << str << endl;
    }
    return 0;
}