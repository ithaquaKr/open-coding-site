#include <bits/stdc++.h>

using namespace std;
//Kiểm tra số nguyên tố
bool prime_num(long y){
    if(y <2){
        return false;
    }
    if(y>=2){
        for(long i=2;i<=sqrt(y);i++){
            if(y%i==0){
                return false;
            }
        }
        return true;
    }
}
//Kiểm tra tổng các chữ số
bool sum_cs(int K,long y){
    int count=0;
    while(y>0){
        count += y % 10;
        y /= 10;
    }
    if(count == K){
        return true;
    }
    else{
        return false;
    }
}
//Kiểm tra tồn tại chữ số X
bool have_x(int X,long y){
    int count=0;
    while(y>0){
        count = y % 10;
        y/= 10;
        if(count == X){
            return true;
            break;
        }
    }
    return false;
}
//Kiểm tra tổng bình phương các số
bool sum_cs_2(int S, long y){
    int count=0;
    while(y>0){
        count += pow((y % 10),2);
        y /= 10;
    }
    if(count == S){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int N,K,X,S;
    long y,mark=0;
    cin >> N >> K >> X >> S;
    for(y= pow(10,N-1); y< pow(10,N); y++){
        if(sum_cs(K,y) && have_x(X,y) && prime_num(y) && sum_cs_2(S,y)){
            cout << y << endl;
            mark+=1;
            }
        }
    if(mark == 0){
        cout << "Khong co so thoa man"<<endl;
    }
    return 0;
}