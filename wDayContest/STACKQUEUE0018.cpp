//STACKQUEUE0018 - Tìm số k thảo mãn điều kiện

#include<bits/stdc++.h>
using namespace std;

bool check(int x)
{
    vector<int> num;
    if(x > 543210)
        return false;
    while(x>0){
        int temp = x%10;
        num.push_back(temp);
        x/=10;
    }
    sort(num.begin(),num.end());
    for(int i=0; i<num.size();i++){
        if(num[i] > 5 || num[i] == num[i+1])
            return false;
    }
    return true;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int L, R;
        cin >> L >> R;
        int count=0;
        for(int x=L; x<= R;x++){
            if(check(x))
                count++;
        }
        
        cout << count << endl;
    }
    return 0;
}