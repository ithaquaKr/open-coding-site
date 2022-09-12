#include<bits/stdc++.h>
#include "Statistics.h"
using namespace std;

int main(){
	int str[1000];
	int n,k=0;
	char temp;
	do{
	  	scanf("%d%c", &str[k], &temp); 
	  	k++; 
	  	} while(temp!= '\n');
	int length = k;
	float result = devia(str, length);
	cout << result;
	return 0;
}