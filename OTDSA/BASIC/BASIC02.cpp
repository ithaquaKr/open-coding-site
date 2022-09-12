// Bài 2 - ID: BASIC02 - Tìm số nguyên may mắn
#include <bits/stdc++.h>
using namespace std;

int findLucky(vector<int>& arr) {
    sort(begin(arr), end(arr), greater<int>());
    int cnt = 1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1])
            ++cnt;
        else {
            if (arr[i - 1] == cnt)
                return cnt;
            cnt = 1;
        }
    }
    return arr.back() == cnt ? cnt : - 1;
}
int main() 
{
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for (int i=0; i<n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    int ans = findLucky(arr);
    cout << ans << endl;
    return 0;
}