//FIBO004 - Biểu diễn số N dưới dạng tổng của 2 số Fibonacci
#include<bits/stdc++.h>
using namespace std;

////////////??????????????????
/*
bool isPerfectSquare(int x)
{
    int temp = sqrt(x);
    return (temp*temp == x);
}

bool isFibonacci(int x)
{
    return  isPerfectSquare(5*x*x + 4) ||
            isPerfectSquare(5*x*x - 4);
}

void two_fibo(int N)
{
    int check = 0;
    for(int i = 0; i<= N/2 ; i++){
        if(isFibonacci(i) && isFibonacci(N-i))
        {
            cout << i << " "<< N-i;
            check = 1;
            break;
        }
    }
    if(check == 0)
        cout << "-1";
}
*/

void createHash(set<int>& hash,
                int maxElement)
{
    // Storing the first two numbers
    // in the hash
    int prev = 0, curr = 1;
    hash.insert(prev);
    hash.insert(curr);
    // Finding Fibonacci numbers up to N
    // and storing them in the hash
    while (curr < maxElement) {
        int temp = curr + prev;
        hash.insert(temp);
        prev = curr;
        curr = temp;
    }
}
// Function to find the Fibonacci pair
// with the given sum
void findFibonacciPair(int n)
{
    // creating a set containing
    // all fibonacci numbers
    set<int> hash;
    createHash(hash, n);
    // Traversing all numbers
    // to find first pair
    for (int i = 0; i < n; i++) {
        // If both i and (N - i) are Fibonacci
        if (hash.find(i) != hash.end()
            && hash.find(n - i) != hash.end()) {
            cout << i << " "
                 << (n - i) << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        //two_fibo(N);
        findFibonacciPair(n);
        //cout << endl;
    }
    return 0;
}