/*
- Chuyển đổi cơ số b
*/
#include<iostream>
#include<math.h>
using namespace std;

void convert_b(int decimal_num, int b) 
{
    char arr[64];
    int i = 0;
    while (decimal_num > 0)
    {
         arr[i] = decimal_num % b;
         decimal_num /= b;
         i++;
    }
    if(decimal_num < 0)
        cout << "0";

    for(int j = i-1; j >= 0; j--){
        cout << int(arr[j]);
    }
}

int main()
{
    int decimal_num, b;
    cin >> decimal_num >> b;
    convert_b(decimal_num,b);
    return 0;
}