#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int i, j;
	for(i = 1 ; i <= t ; i++){
		long long n;
		cin >> n;
		char arr[100];
		int k = 0;
		while(n > 0){
			int m = n % 16;
			if(m >= 10 ){
				arr[k] = m + 55;
			} else {
				arr[k] = m + 48;
			}
			n /= 16;
			k++;
		} 
		//int length = strlen(arr); << dòng này sai>
		//cout << strlen(arr) << endl;
		//cout << k << endl;
		for(j = k-1 ; j >= 0 ; j--){
			cout << arr[j];
		}
		cout << endl;	
	}
	return 0;
}