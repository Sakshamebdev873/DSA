#include <iostream>
using namespace std;

int main() {
    int totalParticipants, cutoff;
    cin >> totalParticipants >> cutoff;

    int arr[totalParticipants];

    for(int i = 0; i < totalParticipants; i++) {
        cin >> arr[i];
    }

    int score = 0;

    for(int i = 0; i < totalParticipants; i++) {
        if(arr[i] >= arr[cutoff - 1] && arr[i] > 0) {
            score++;
        }
    }

    cout << score;
    return 0;
}
