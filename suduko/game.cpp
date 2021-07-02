#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include<windows.h>
#include<mmsystem.h>
using namespace std;
#define UNASSIGNED 0
#define K 9


bool FindUnassignedLocation(int grid[K][K], int &row, int &col);
bool isSafe(int grid[K][K], int row, int col, int num);


bool SolveSudoku(int grid[K][K])
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


bool FindUnassignedLocation(int grid[K][K], int &row, int &col)
{
    for (row = 0; row < K; row++)
        for (col = 0; col < K; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
    return false;
}

bool UsedInRow(int grid[K][K], int row, int num)
{
    for (int col = 0; col < K; col++)
    if (grid[row][col] == num)
        return true;
    return false;
}

bool UsedInCol(int grid[K][K], int col, int num)
{
    for (int row = 0; row < K; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}

bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row+boxStartRow][col+boxStartCol] == num)
                return true;
    return false;
}

bool isSafe(int grid[K][K], int row, int col, int num)
{
    return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) &&
       !UsedInBox(grid, row - row % 3 , col - col % 3, num);
}

void printGrid(int grid[K][K])
{
    for (int row = 0; row < K; row++)
    {
        for (int col = 0; col < K; col++)
            cout<<grid[row][col]<<"  ";
        cout<<endl;
    }
}


DWORD WINAPI myThread(LPVOID lpParameter)
{
	unsigned int& myCounter = *((unsigned int*)lpParameter);
	while(myCounter < 0xFFFFFFFF) ++myCounter;
	return 0;
}

DWORD WINAPI myT(LPVOID lpParameter)
{
  int grid[K][K] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    if (SolveSudoku(grid) == true)
        {
            int x;

        printGrid(grid);
        cout<<"Enter no: ";//not use in this program
        cin>>x;

        }
    else
        cout<<"No solution exists"<<endl;

	return 0;
}

int main(int argc, char* argv[])
{


	unsigned int myCounter = 0;
	DWORD myThreadID[2];

	HANDLE myHandle = CreateThread(0, 0, myThread, &myCounter, 0, &myThreadID[0]);
	HANDLE my = CreateThread(0, 0, myT, &myCounter, 0, &myThreadID[1]);

	char myChar = ' ';
	while(myChar != 'q') {

    PlaySound(TEXT("song.wav"),NULL,SND_SYNC|SND_FILENAME);
    	myChar = getchar();
	}


	CloseHandle(myHandle);
	CloseHandle(my);
	return 0;
}


