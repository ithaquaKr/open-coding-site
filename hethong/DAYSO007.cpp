//DAYSO007 - Đếm nhóm chữ số

#include<bits/stdc++.h>
using namespace std;

// Function to find the subgroups
int countGroups(int position, int previous_sum, int length, int *arr)
{
    if (position == length)
        return 1;
    int res = 0;
    int sum = 0;
    for (int i = position; i < length; i++)
    {
        sum += arr[i];
        if (sum >= previous_sum)
        res += countGroups(i + 1, sum, length, arr);
    }
    return res;
}

void convert_string_to_arr(int N, string S, int *arr)
{
    for(int i=0;i<N;i++){
        arr[i] = S[i] - '0';
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        string S;
        cin >> N >> S;
        int arr[N+1];
        convert_string_to_arr(N,S,arr);
        cout << countGroups(0,0,N,arr) << endl;

    }
    return 0;
}