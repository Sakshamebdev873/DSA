#include <iostream>
#include <vector>
using namespace std;

// Knight moves (8 directions)
int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

// Print the board
void printBoard(vector<vector<int>> &board, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Check if next move is safe
bool isSafe(int x, int y, vector<vector<int>> &board, int N) {
    return (x >= 0 && y >= 0 && x < N && y < N && board[x][y] == -1);
}

// Try to solve using backtracking
bool solve(int x, int y, int move, vector<vector<int>> &board, int N) {
    // if all cells are filled
    if (move == N * N)
        return true;

    // try all 8 possible moves
    for (int k = 0; k < 8; k++) {
        int nextX = x + dx[k];
        int nextY = y + dy[k];

        if (isSafe(nextX, nextY, board, N)) {
            board[nextX][nextY] = move; // place move number

            // recursive call
            if (solve(nextX, nextY, move + 1, board, N))
                return true;

            // backtrack
            board[nextX][nextY] = -1;
        }
    }

    return false;
}

int main() {
    int N = 8; // you can change size
    vector<vector<int>> board(N, vector<int>(N, -1)); // -1 means not visited

    board[0][0] = 0; // start at 0,0

    if (solve(0, 0, 1, board, N))
        printBoard(board, N);
    else
        cout << "No solution exists";

    return 0;
}
