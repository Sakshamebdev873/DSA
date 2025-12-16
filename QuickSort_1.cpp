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
int partition(int arr[], int si, int ei, int n) {
    int pivot = arr[ei];
    int i = si - 1;

    cout << "\nPivot: " << pivot << endl;

    for(int j = si; j < ei; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
            print(arr, n);
        }
    }
    swap(arr[i + 1], arr[ei]);
    print(arr, n);

    return i + 1;
}
void quickSort(int arr[], int si, int ei,int n)
{
    if (si >= ei)
    {
        return;
    }
    int pivotIdx = partition(arr, si, ei,n);
    quickSort(arr,si,pivotIdx-1,n);
    quickSort(arr,pivotIdx+1,ei,n);
}
int main()
{
    int arr[] = {4, 2, 7, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    // before
    print(arr, size);
    quickSort(arr, 0, (size - 1),size);
    // after
    print(arr, size);
    return 0;
}