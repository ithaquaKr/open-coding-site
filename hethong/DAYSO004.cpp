//DAYSO004 - Dãy con đơn điệu tăng dài nhất
/*
#include<bits/stdc++.h>
using namespace std;
long long lis(long long arr[], int n)
{
    int i;
    set<int> s;
    set<int>::iterator k;
    for (i=0; i<n; i++)
    {
        if (s.insert(arr[i]).second)
        {
            // Find the position of inserted element in iterator k
            k = s.find(arr[i]);
            k++;  // Find the next greater element in set
            // If the new element is not inserted at the end, then
            // remove the greater element next to it (This is tricky)
            if (k!=s.end()) s.erase(k);
        }
    }
    // Note that set s may not contain actual LIS, but its size gives
    // us the length of LIS
    return s.size();
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long arr[100000];
        cin >> n;
        for(int i=0; i<n;i++){
            cin >> arr[i];
        }
        cout << lis(arr,n) << endl;
    }
}
*/

#include<bits/stdc++.h>
using namespace std;

int lis(std::vector<long>& v)
{
    if (v.size() == 0) // boundary case
        return 0;
 
    std::vector<long> tail(v.size(), 0);
    long length = 1; // always points empty slot in tail
 
    tail[0] = v[0];
 
    for (int i = 1; i < v.size(); i++) {
 
        // Do binary search for the element in
        // the range from begin to begin + length
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);
 
        // If not present change the tail element to v[i]
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }
 
    return length;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long x;
        vector<long> v;
        cin >> n;
        for(int i=0; i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        cout << lis(v) << endl;
    }
}