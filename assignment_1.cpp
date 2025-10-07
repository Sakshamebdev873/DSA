#include <iostream>
using namespace std;
void alloccur(int arr[], int size, int i, int key)
{
    if (i == size)
    {
        return;
    }
    if (arr[i] == key)
    {
        cout << i << endl;
        // alloccur(arr, size, i + 1, key);
    }
        alloccur(arr, size, i + 1, key);
    

}
int main()
{
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key = 6;
    int size = sizeof(arr) / sizeof(arr[0]);
    alloccur(arr, size, 0, key);
    return 0;
}