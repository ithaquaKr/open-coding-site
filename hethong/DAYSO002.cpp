//DAYSO002 - Dãy con K phần tử có tổng bằng S

#include<bits/stdc++.h>
using namespace std;

void count_t(int count)
{

}
void comb(int* arr, int len, int r,
          int ipos, int* op, int opos,
          int sum,int* count)
{
    
    if (opos == r) {
        int sum2 = 0;
        for (int i = 0; i < opos; i++) {
            sum2 = sum2 + op[i];
        }
        if (sum == sum2) {
            count[0]++;
        }
        return;
    }
    if (ipos < len) {
        comb(arr, len, r, ipos + 1,
             op, opos, sum,count);
 
        op[opos] = arr[ipos];
        comb(arr, len, r, ipos + 1,
             op, opos + 1, sum,count);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int N,K,S;
        int arr[50];
        cin >> N >> K >> S;
        for(int i=0;i <N;i++)
            cin >> arr[i];
        int op[N] = {0};
        int count[1]={0};
        comb(arr, N, K, 0, op, 0, S,count);
        cout << count[0] << endl;
    }
    return 0;
}