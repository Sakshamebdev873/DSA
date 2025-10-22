#include <iostream>
#include <string>
#include <vector>
using namespace std;

void mazePath(int maze[][4], int row, int col, int x, int y, bool visted[4][4], string path)
{
    // base conditions
    if (row < 0 || col < 0 || row >= 4 || col >= 4 || visted[row][col] || maze[row][col] == 0)
        return;

    // destination
    if (row == x && col == y)
    {
        cout << path << endl;
        return;
    }

    // mark visited
    visted[row][col] = true;

    // move down
    mazePath(maze, row + 1, col, x, y, visted, path + "D");
    // move right
    mazePath(maze, row, col + 1, x, y, visted, path + "R");
    // move up
    mazePath(maze, row - 1, col, x, y, visted, path + "U");
    // move left
    mazePath(maze, row, col - 1, x, y, visted, path + "L");

    // unmark for backtracking
    visted[row][col] = false;
}

int main()
{
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};


    string path = "";
bool visted[4][4] = {false};
    mazePath(maze, 0, 0, 1, 1, visted, path); 
    return 0;
}
