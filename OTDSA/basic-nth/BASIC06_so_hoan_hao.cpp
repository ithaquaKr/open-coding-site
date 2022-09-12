#include<iostream>
#include<math.h>
using namespace std;

bool ktra(int n)
{
    int s = 1; // tong
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            s += i + n / i;
            if (s > n)
            {
                return false;
            }
        }
    }
    if (n == s && n != 1)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    if (ktra(n))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
