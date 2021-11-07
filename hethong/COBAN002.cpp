// Số chính phương   ID: COBAN002
/*
Số chính phương là số có thể biểu diễn bằng bình phương của một số
Ví dụ 9 = 3^2
Cho số tự nhiên k ( 1<- k <= 18)
Hãy tìm số chính phương nhỏ nhất có k chữ số và mỗi chữ số của nó
cũng là số chính phương
----------------------------
Input: Số lượng testcase t, nhập vào 1 số tự nhiên k
2
1
3
----------
Output: Mỗi dòng ứng với 1 testcase, nếu không tìm được thì ghi -1
1
100
*/

#include<iostream>
#include<math.h>

using namespace std;

bool sochinhphuong(long long i){
    float a = sqrt(i);
    if(int(a)*int(a) == i)
        return true;
    return false;
}
bool cs_chinhphuong(long long i){
    int arr[20];
    int count=0;
    while(i>0){
        arr[count] = i % 10;
        i/= 10;
        count++;
    }
    int check = 0;
    for(int j = 0; j<count; j++){
        if(sochinhphuong(arr[j]) == false){
            check = 1;
            break;
        }
    }
    if(check == 0)
        return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        long long i;
        cin >> k;
        long long min = pow(ceil(sqrt(pow(10,k-1))),2);
        while(1){
            if(cs_chinhphuong(min)){
                cout << min << endl;
                break;
            }
            else{
                min += 2*sqrt(min) +1;
            }
        }
    }
    return 0;
}