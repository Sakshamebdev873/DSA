#include <iostream>
using namespace std;
void binary(int arr[], int key, int low, int med, int high)
{
    if (low > high)
    {
        cout << "Key not found";
        return;
    }
    if (arr[med] == key)
    {
        cout << "Found at index" << med << endl;
        return;
    }
    else if (arr[med] > key)
    {
        int new_med = ((med - 1) + low) / 2;
        binary(arr, key, low, new_med, med - 1);
    }
    else
    {
        int new_med = ((med + 1) + high) / 2;
        binary(arr, key, med + 1, new_med, high);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int key = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    int med = (low + high) / 2;
    binary(arr, key, 0, med, high);
    return 0;
}
