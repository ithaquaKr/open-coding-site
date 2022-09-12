// Đa thức tổng
// Với số nguyên dương n (1<=n<=20) và số thực x. Tính giá trị biểu thức
/*Input: 
    2
    10 0.0
    2 1
Ouput:
    0
    1.333
*/

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int t;
    unsigned int n;
    float x;
    cin >> t;           //Nhập vào t ( t>=1)
    while(t--){         //Vòng lặp cho số bộ test
        float sum;
        unsigned int sum2;
        int j,k;
        cin >> n >> x;
        for(k=1;k<=n;k++){                  //Tính tổng, ( vòng lặp chính)
            sum2 = 0;                       //đặt lại mẫu số
            for(j=1;j<=k;j++){              //Tính mẫu số   (vòng lặp phụ)
                sum2+=j;                
            }
            sum+= pow(x,k)/float(sum2);     //Công thức tính
        }
        cout<< setprecision(3)<< fixed << sum;
        cout<< endl;
    }
    return 0;
}