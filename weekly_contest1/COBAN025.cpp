//COBAN025 - Số Catalan thứ n

#include<bits/stdc++.h>
using namespace std;

unsigned long int catalanDP(int n){
    unsigned long int cat[n + 1];   //Mảng lưu số catalan
    cat[0] = cat[1] = 1;            // lưu 2 số catalan đầu tiên
    for (int i = 2; i <= n; i++) {      //Tìm số catalan lưu vào mảng bằng đệ quy
        cat[i] = 0;
        for (int j = 0; j < i; j++)
            cat[i] += cat[j] * cat[i - j - 1];
    }
    // KẾT QUẢ
    return cat[n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << catalanDP(n) << endl;
    }
    return 0;
}