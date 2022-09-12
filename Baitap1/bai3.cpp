/*
Tính giai thừa của số lớn N < 1000

*/
#include<iostream>
#include<math.h>

using namespace std;

long long tinh(int N){
    if(N == 0) return 1;
    return tinh(N-1)*N;
}

int main(){
    int N;
    cin >> N;
    cout << tinh(N) << endl;
    return 0;
}
