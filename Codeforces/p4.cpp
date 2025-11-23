#include <iostream>
using namespace std;

int countDominoes(int cells) {
    if (cells < 2) return 0;   
    return 1 + countDominoes(cells - 2);  
}

int main() {
    int m, n;
    cin >> m >> n;

    int totalCells = m * n;

    cout << countDominoes(totalCells);
    return 0;
}
