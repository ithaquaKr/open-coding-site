//UOCSO008 - Liệt kê các cách phân tích số thành tích các số tự nhiên khác 1
//source : https://www.geeksforgeeks.org/print-combinations-factors-ways-factorize/?ref=rp
#include<bits/stdc++.h>
using namespace std;

// defining vector of vector for
// storing factor combinations
vector<vector<int>>resultant;
// current_factor is current factor to be considered.
// current_product is current product of factors.    
void factorsListFunc (int first, int each_prod, int n,
                        vector<int>single_result_list)
{
    // base case of this recursive function
    if (first> n || each_prod > n)
        return;
 
    // When current_product is equal to n,
    // then current contain list of factors
    // so it will be added to the vect
    if (each_prod == n)
    {
        resultant.push_back(single_result_list);
        return;
    }
 
    // In this loop we first calculate factors
    // of n and then it's combination so that
    // we get the value n in a recursive way .
    for (int i = first; i < n; i++)
    {
        if (i * each_prod > n)
            break;
        // if i divides n
        // properly then it
        // is factor of n
        if (n % i == 0)
        {
            // it is added to 'single_result_list' list
            single_result_list.push_back(i);
            // Here function is called recursively
            // and when (i*each_prod) is equal to n
            // we will store the 'single_result_list'
            // (it is basically the list containing all
            // combination of factors) into result_list.
            factorsListFunc(i, i * each_prod, n,
                            single_result_list);
            // here we will empty the 'single_result_list'
            // List so that new combination of factors
            // get stored in it.
            single_result_list.pop_back();
        }
    }
}
 
// Returns a list containing all ways
// to factorize a number n.
void factComb(int n)
{
    // making list of lists to store all
    // possible combinations of factors
    vector<int>single_result_list;
    // function to calculate all the combinations
    // of factors
    factorsListFunc(2, 1, n, single_result_list);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        factComb(n);
        cout << resultant.size() << endl;
        for (int i = 0; i < resultant.size(); i++)
        {
            for (int j = 0; j < resultant[i].size(); j++)
                cout << resultant[i][j] << " ";
        cout << endl;
        }

        resultant.clear();
    }
    return 0;
}