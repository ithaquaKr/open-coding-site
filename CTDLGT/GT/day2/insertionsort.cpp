// Thuật toán sắp xếp chèn
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
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

int main()
{
    int n;
    cin >> n;
	int arr[n+1];
	for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    cout << "Sorted Arrray" << endl;
	insertionSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}

