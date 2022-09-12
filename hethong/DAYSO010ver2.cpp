/*
int compare(const void* a, const void* b)
{
    const long* x = (long*) a;
    const long* y = (long*) b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}

long long int member_lost(long arr[], long N, long long int L)
{
    qsort(arr,N-1,sizeof(long),compare);
    long long int i; 
    long long int res=L;
    for(i=L+1;i<N+L;i++){
        res+=i;
        res-= arr[i-L-1];
    }
    return res;
}*/
/*
unsigned long int member_lost(long arr[], long N, long L)
{
 
    unsigned long int total = N*L + N*(N-1)/2;
    for (int i = 0; i < N-1; i++)
        total -= arr[i];
    return total;
}
*/
/*
ull member_lost(ull arr[], ull N, ull L)
{
    ull minvalue = L;
 
    // here we xor of all the number
    ull xornum = 0;
    for (ull i = 0; i < N-1; i++) {
        xornum ^= (minvalue) ^ arr[i];
        minvalue++;
    }
 
    // xor last number
    return xornum ^ minvalue;
}

*/