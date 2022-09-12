// Thuật toán sắp xếp chọn 
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		// Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Đổi vị trí với giá trị ở đầu
		swap(&arr[min_idx], &arr[i]);
	}
}

int main()
{
	int n;
    cin >> n;
	int arr[n+1];
	for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
	cout << "Sorted array: \n";
	selectionSort(arr,n);
	for (int i=0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
