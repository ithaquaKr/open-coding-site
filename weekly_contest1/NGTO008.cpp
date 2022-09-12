//NGTO008 - Bộ N số nguyên tố
//source : https://www.geeksforgeeks.org/prime-numbers-after-prime-p-with-sum-s/
#include<bits/stdc++.h>
using namespace std;

// vector to store prime and N primes
// whose sum equals given S
vector<int> sett;
vector<int> prime;
 
// function to check prime number
bool isPrime(int x)
{
    // square root of x
    int sqroot = sqrt(x);
    bool flag = true;
 
    // since 1 is not prime number
    if (x == 1)
        return false;
 
    // if any factor is found return false
    for (int i = 2; i <= sqroot; i++)
        if (x % i == 0)
            return false;
 
    // no factor found
    return true;
}
 
// function to display N primes whose sum equals S
void display()
{
    int length = sett.size();
    for (int i = 0; i < length; i++)
        cout << sett[i] << " ";
    cout << "\n";
}
 
// function to evaluate all possible N primes
// whose sum equals S
void primeSum(int total, int N, int S, int index,int &count)
{
    // if total equals S And
    // total is reached using N primes
    if (total == S && sett.size() == N)
    {
        // display the N primes
        display();
        count++;
        return;
    }
    // if total is greater than S
    // or if index has reached last element
    if (total > S || index == prime.size())
        return;
    // add prime[index] to set vector
    sett.push_back(prime[index]);
    // include the (index)th prime to total
    primeSum(total+prime[index], N, S, index+1,count);
    // remove element from set vector
    sett.pop_back();
    // exclude (index)th prime
    primeSum(total, N, S, index+1,count);
}
// function to generate all primes
void allPrime(int N, int S, int P){
    int count=0;
    // all primes less than S itself
    for (int i = P+1; i <=S ; i++)
    {
        // if i is prime add it to prime vector
        if (isPrime(i))
            prime.push_back(i);
    }
    // if primes are less than N
    if (prime.size() < N)
        cout << "-1";
    primeSum(0, N, S, 0,count);
    if(count==0)
        cout << "-1";
}

int main()
{
    int P,N,S;
    cin >> P >> N >> S;
    allPrime(N,S,P);
    return 0;
}