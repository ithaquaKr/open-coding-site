#include<cmath>

float devia(int *str, int length){
	int i;
	int sum1 = 0, sum2 = 0;
	float average, result;
	for(i = 0 ; i < length ; i+=2){
		sum1 += str[i];
	}
	average = 1.0f*(sum1)/length;
	for(i = 0 ; i < length ; i+=2){
		sum2 += (str[i] - average) * (str[i] - average);
	}
	result = 1.0f*sqrt(sum2/length-1);
	return result;
} 


