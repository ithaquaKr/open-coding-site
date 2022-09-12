/*
problem: Cho một mảng các số nguyên arr, một số nguyên may mắn là
một số nguyên có tần suất xuất hiệntrong mảng bằng giá trị của nó.
Trả về số nguyên may mắn lớn nhất trong mảng. Nếu không có số nguyên may mắn trả về -1.

idea: 
- sắp xếp lại mang theo thu tu tu nho den lon 
- dem cac phan tu bang nhau

*/
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