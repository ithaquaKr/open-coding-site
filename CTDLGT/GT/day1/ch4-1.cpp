#include<bits/stdc++.h>
using namespace std;

void bucketSort(float arr[], int n)
{
     float maxarr = 10.1;
     float minarr = 0.6;
     float nb = (maxarr - minarr)/n;

    // 1. Tạo bucket rỗng
    vector<float> b[n];
 
    // 2. Cho các phần tử  của mảng vào bucket khác nhau
    for (int i = 0; i < n; i++) {
        //int bi = nb* arr[i]; // Index in bucket
        int bi = (arr[i] - minarr)/nb - int((arr[i] - minarr)/nb);

        // if(bi == 0 && arr[i] != minarr){
        //     b[int((arr[i] - minarr)/nb)-1].push_back(arr[i]);
        // }
        // else{
        //     b[int((arr[i] - minarr)/nb)].push_back(arr[i]);
        // }
        b[bi].push_back(arr[i]);
    }
 
    // 3. Sắp xếp các nhóm riêng lẻ bằng hàm sort() - Sắp xếp chèn
    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end());
 
    // 4. Ghén tất cả các bucket về lại mảng arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}

int main()
{
    
    float arr[]
        = { 9.8, 0.6, 10.1, 1.9, 3.07, 3.04, 5.0, 8.0, 7.68};
    int n = sizeof(arr) / sizeof(arr[0]);
    //int n=5;
    bucketSort(arr, n);
 
    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}