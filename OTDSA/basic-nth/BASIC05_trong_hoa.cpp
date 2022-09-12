/*
Bạn có một thảm hoa dài, trong đó một số ô được trồng, và một số ô thì không. Tuy nhiên, hoa không được trồng ở các ô liền kề. Cho một mảng số nguyên flowerbed chứa số 0 và số 1, trong đó 0 có nghĩa là trống và 1 có nghĩa là không trống và số nguyên n, trả về nếu n bông hoa mới có thể được trồng trong thảm hoa mà không vi phạm quy tắc không có hoa liền kề.

*/
#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    bool prev = false; // Whether previous spot was occupied.
    for (int i = 0; i < flowerbed.size(); i++)
    {
        if (flowerbed[i])
            prev = true;
        else
        {
            if (!prev && (i + 1 == flowerbed.size() || flowerbed[i + 1] == 0))
            {
                n--;
                prev = true;
            }
            else
            {
                prev = false;
            }
        }
    }
    return n <= 0;
}

int main()
{
    int m, n, x;
    cin >> m >> n;
    vector<int> flowerbed;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        flowerbed.push_back(x);
    }
    if (canPlaceFlowers(flowerbed, n))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

