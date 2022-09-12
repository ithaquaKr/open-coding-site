// Bài 5 - ID: BASIC05 - Trồng hoa
#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n){
    bool prev = false; // Whether previous spot was occupied.
    for (int i = 0; i < flowerbed.size(); i++){
        if (flowerbed[i])
            prev = true;
        else{
            if (!prev && (i + 1 == flowerbed.size() || flowerbed[i + 1] == 0)){
                n--;
                prev = true;
            }
            else{
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
