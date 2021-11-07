//UOCSO005 - Phân tích số

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void prime_factorization(ll n){
    ll arr[10000];  //mảng chứa thừa số nguyên tố
    ll arr2[10000];  //mảng chứa thừa số nguyên tố phân biệt + số lượng
    int k = 0;
    while(n%2==0){         // xử lí với 2
        arr[k] = 2;
        n/=2;
        k++;
    }
    for(ll i=3;i <= sqrt(n); i+=2){   
        while(n%i == 0){
            arr[k] = i;
            n/=i;
            k++;
        }
    }
    if(n > 2){      // xử lí số nguyên tố lớn hơn 2 còn thừa lại
        arr[k] = n;
        k++;
    }
    int j=0;
    for(int i = 0;i<k;i++){
        if(arr2[j-2] != arr[i]){    
            arr2[j] = arr[i]; 
            arr2[j+1] = 1;  
            j+=2;
        }
        else{
            arr2[j-1]+=1;
        }
 
    }
    //In ket qua
    cout << j/2 << endl;
    for(int a = 0; a<j;a+=2){
        cout << arr2[a] << " " << arr2[a+1] << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        prime_factorization(n);
        //cout << endl;
    }
    return 0;
}