#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void InsertionSort(int arr[], int n,int i)
{
    if (i == n) return;
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
    
    InsertionSort(arr, n,i+1);
}

int main()
{
    int arr[] = {2, 1, 34, 53, 21, 32};
    int size = sizeof(arr) / sizeof(arr[0]);
    // before
    print(arr, size);
    InsertionSort(arr, size,1);
    // after
    print(arr, size);
    return 0;
}