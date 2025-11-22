#include <iostream>
using namespace std;

int moves = 0;

void beautiful(int arr[5][5], int &i, int &j) {
    // center is (2,2)
    while (i != 2) {
        if (i > 2) {
            swap(arr[i][j], arr[i-1][j]);
            i--;
        } else {
            swap(arr[i][j], arr[i+1][j]);
            i++;
        }
        moves++;
    }

    while (j != 2) {
        if (j > 2) {
            swap(arr[i][j], arr[i][j-1]);
            j--;
        } else {
            swap(arr[i][j], arr[i][j+1]);
            j++;
        }
        moves++;
    }
}

int main() {
    int arr[5][5];
    int r, c;

    // input
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                r = i;
                c = j;
            }
        }
    }

    beautiful(arr, r, c);

    cout << moves;
    return 0;
}
