// Insertion Sort
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void insertArray(int arr[],int n){
    for(int i =0;i <n;i++)
        cin >> arr[i] ;
}
int main()
{
    int n;
    cin >> n;
    int arr[50];
    insertArray(arr,n);
    insertArray(arr,n);
    printArray(arr,n);
    return 0;
}