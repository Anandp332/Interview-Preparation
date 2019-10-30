#include <bits/stdc++.h>
using namespace std;

#define N 9

bool isSafeInRow(int grid[][9], int row, int num)
{
    for (int i = 0; i < N; i++)
    {
        if (grid[row][i] == num)
        {
            return false;
        }
    }
    return true;
}

bool isSafeInCol(int grid[][9], int col, int num)
{
    for (int i = 0; i < N; i++)
    {
        if (grid[i][col] == num)
        {
            return false;
        }
    }
    return true;
}

bool isSafeInBox(int grid[][9], int row, int col, int num)
{
    int rowfactor = row - (row % 3);
    int colfactor = col - (col % 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i + rowfactor][j + colfactor] == num)
            {
                return false;
            }
        }
    }
    return true;
}

bool isSafe(int grid[][9], int row, int col, int num)
{
    if (isSafeInRow(grid, row, num) && isSafeInCol(grid, col, num) && isSafeInBox(grid, row, col, num))
    {
        return true;
    }
    return false;
}

bool findEmptyLocation(int grid[][9], int &row, int &col)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (grid[i][j] == 0)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

bool sudokuSolver(int board[][9])
{

    /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print output and return output as specified in the question
  */
    int row, col;
    if (!findEmptyLocation(board, row, col))
    {
        return true;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (isSafe(board, row, col, i))
        {
            board[row][col] = i;

            if (sudokuSolver(board))
            {
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}

int main()
{

    int n = 9;
    int board[9][9];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    if (sudokuSolver(board))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
