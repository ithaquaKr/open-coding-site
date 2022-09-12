#include<iostream>
#include<math.h>

using namespace std;

bool PerfectSquare(long long i){
    float a = sqrt(i);
    if(int(a)*int(a) == i)
        return true;
    return false;
}
long long getClosestPerfectSquare(long long L)      // Tìm số chính phương gần L nhất
{
    if (PerfectSquare(L))
        return L;
    int aboveN = -1;
    int n1;
    n1 = L + 1;
    while (true) {
        if (PerfectSquare(n1)) {
            return n1;
            break;
        }
        else
            n1++;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long L,R;
        int count=0;
        cin >> L >> R;
        long long min = getClosestPerfectSquare(L);
        while (min <= R)
        {
            count += 1;
            min += 2*sqrt(min) + 1;
        }
        cout << count << endl;
    }
    return 0;
}