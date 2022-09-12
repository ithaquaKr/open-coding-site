//08 - Tìm các vị trí dãy số trong dãy số

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int m,n;
    ll arr1[100000], arr2[100000];
    int result[10000];
    cin >> n >> m;
    for(int i=0;i < n ;i++){
        scanf("%lld",&arr1[i]);
    }
    for(int j=0;j<m;j++){
        scanf("%lld",&arr2[j]);
    }
    ////////////////////////////
    int count =0;
    for(int j=0; j< m;j++){
        int temp = 0;
        for(int k=0;k <n ;k++){
            if(arr2[j] == arr1[k]){
                result[count] = k+1;
                count++;
                temp = 1;
                break;
            }
        }
        if(temp == 0){
            result[count] = 0;
            count++;
        }
    }
    for(int i=0;i<count;i++)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}