#include <iostream>
using namespace std;

int countInversions(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                count++;  
            }
        }
    }

    return count;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countInversions(arr, n);
    return 0;
}
