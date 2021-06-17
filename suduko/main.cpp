#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
#define UNASSIGNED 0
#define X 9

bool FindUnassignedLocation(int grid[X][X], int &row, int &col);
bool isSafe(int grid[X][X], int row, int col, int num);

/* assigning values to unassigned locations */
bool SolveSudoku(int grid[X][X])
{
    int row, col;
    if (!FindUnassignedLocation(grid, row, col))
       return true;
    for (int num = 1; num <= 9; num++)
    {
    if (isSafe(grid, row, col, num))
    {
        grid[row][col] = num;
        if (SolveSudoku(grid))
            return true;
        grid[row][col] = UNASSIGNED;
    }
    }
    return false;
}

/* Searching grid to find unassigned entry */
bool FindUnassignedLocation(int grid[X][X], int &row, int &col)
{
    for (row = 0; row < X; row++)
        for (col = 0; col < X; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
    return false;
}

/* Returns when assigned entry n in the specified row matches the given number. */
bool UsedInRow(int grid[X][X], int row, int num)
{
    for (int col = 0; col < X; col++)
    if (grid[row][col] == num)
        return true;
    return false;
}

/* Returns when assigned entry in the specified column matches the given number. */
bool UsedInCol(int grid[X][X], int col, int num)
{
    for (int row = 0; row < X; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}

/* Returns when assigned entry within the specified 3x3 box matches the given number. */
bool UsedInBox(int grid[X][X], int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row+boxStartRow][col+boxStartCol] == num)
                return true;
    return false;
}

/* Returns when legal to assign num to the given row,col */
bool isSafe(int grid[X][X], int row, int col, int num)
{
    return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) &&
       !UsedInBox(grid, row - row % 3 , col - col % 3, num);
}
/* print result */
void printGrid(int grid[X][X])
{
    for (int row = 0; row < X; row++)
    {
        for (int col = 0; col < X; col++)
            cout<<grid[row][col]<<"  ";
        cout<<endl;
    }
}

int main()
{
    int grid[X][X] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    if (SolveSudoku(grid) == true)
        printGrid(grid);
    else
        cout<<"No solution exists"<<endl;
    return 0;
}
