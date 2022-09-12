#include<iostream>
#include<math.h>
using namespace std;

long GCD(int a,int b){
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
long LMC(int a,int b){
    long tmp;
    tmp = a*b / GCD(a,b);
    return tmp;
}
int main(){
    long a,b;
    int T, j, test = 0;
    long arr[50];
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> a >> b;
        if(a>= 1 && a<= pow(10,8) && b>=1 && b<=pow(10,8) && a <= b){
            arr[j] = LMC(a,b);
            arr[j+1] = GCD(a,b);
            j = j+2;    
        }
        else {
            test = 1;
            break;
        }
    }
    int m = 0;
    for(int i=0;i<T;i++){
        cout<<arr[m]<<" "<<arr[m+1]<<endl;
        m+=2;
    }
    return 0;
}