#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i;
	char str[1000];
	cout << "Nhap vao mat khau cua ban tai day: " << endl;
	cin >> str;
	int length = strlen(str);
	if(length >= 6){
		int digit = 0, characters = 0, upper = 0, lower = 0;
		for(i = 0 ; i <= length ; i++){
			if((48 <= str[i]) && (str[i] <= 57)){
				digit++;
			} else if(str[i] == 64 || str[i] == 37 || str[i] == 38){
				characters++;
			} else if(('A' <= str[i]) && (str[i] <= 'Z')){
				upper++;
			} else if(('a' <= str[i]) && (str [i] <= 'z')){
				lower++;
			}
		}
		if((digit >= 1) && (characters >= 1) && (upper >= 1) && (lower >= 1)){
			cout << "Mat khau hop le" << endl;
		} else{
			cout << "Mat khau khong hop le" << endl;
		}
	} else{
		cout << "Mat khau khong hop le" << endl;
	}
	return 0;
}