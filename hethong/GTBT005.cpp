//GTBT005 - Biểu thức sin(x)

#include<bits/stdc++.h>
using namespace std;
#define M_PI  3.14159265358979323846

void cal_sin(long double x){   
    long double accuracy = 0.00001, den, sinx, sinval;
    int j=0;
    sinval = sin(x); // holds the actual value of sin(n)
    if(x >= M_PI)
    {
        while(M_PI*j*2 < x)
        {
            ++j;
        }
        x = x - 2*j*M_PI;
    }
    long double x1 = x; 
    sinx = x;        // maps the sum along the series
    int k = 1;
    do{
        den = 2 * k * (2 * k + 1);
        x1 = -x1 * x * x / den;
        sinx += x1;
        k = k + 1;
    } while (accuracy <= fabs(sinval - sinx));      //fabs() trị tuyệt đối của số thực
    cout << j << " "<< x << endl;
    cout << setprecision(6) << fixed << sinval;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long double x;
        cin >> x;
        cal_sin(x);
        cout << endl;
    }
    return 0;
}