//BDSO005 - Biểu diễn số thành tổng các số chính phương 


#include<bits/stdc++.h>
using namespace std;

vector<int> table;

void perfect_square(int N)
{
    for(int i=1; i*i <= N;i++)
        table.push_back(i*i);
}

int cout_perfect_square_sum(int index, int target)
{
    if(target == 0)
        return 1;
    if(index < 0 || target <0)
        return 0;
    int inc = cout_perfect_square_sum(index, target - table[index]);
    int exc = cout_perfect_square_sum(index - 1, target);
    return inc + exc;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        table.clear();
        perfect_square(N);
        cout << cout_perfect_square_sum(table.size() - 1,N) << endl;

    }
    return 0;
}