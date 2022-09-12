#include<iostream>
#include<math.h>
using namespace std;

int GCD(int a, int b) {
    
    if (b == 0)
        return a;
    return GCD(b, a%b);
}

int LCM(int a, int b){
    
    return (a*b/GCD(a,b) );
}

int LCM_Mang(int arr[],int i){
        int temp = LCM(arr[i], arr[i+1] );
        return temp;
    }

int GCD_Mang(int arr[],int i){
        int temp = GCD(arr[i], arr[i+1] );
        return temp;
    }

int main(){
    int arr[100];
    int a,b,T,j=0;
    cin>>T;
    if(T>=1 && T<=100){
        for(int k=0;k<T;k++){
            cin >> a >> b;
            if(a>=1 && a<= pow(10,8) && b>=1 && b<= pow(10,8)){
                arr[j] =a;
                arr[j+1]=b;
                j+=2;
            }    
        } 

    }
        
    else {
            return 0;
        }
    for(int i=0;i<2*T;i+=2){
        cout<< LCM_Mang(arr,i) <<" "<< GCD_Mang(arr,i)<<endl;
    }
    return 0;
}
 