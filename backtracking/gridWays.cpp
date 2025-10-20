#include <iostream>
#include <string>
#include <vector>
using namespace std;
int gridWays(int r, int c, int n, int m, string path) {
    if (r == n - 1 && c == m - 1) {
        cout << path << endl; // print complete path
        return 1;
    }
    if (r >= n || c >= m) {
        return 0;
    }

    // Move Right
    int val1 = gridWays(r, c + 1, n, m, path + "R");

    // Move Down
    int val2 = gridWays(r + 1, c, n, m, path + "D");

    return val1 + val2;
}

int main() {
    int n = 2, m = 2;
    cout << "Total ways: " << gridWays(0, 0, n, m, "") << endl;
}
