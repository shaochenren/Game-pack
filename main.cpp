// chase huante

#include<iostream>
#include "Sudoku.h"
#include "Tetris.h"
using namespace std;

int main() {

	int choice;

	do {
		cout << "\n================= GAME-PACK ===================\n";
		cout << "Enter the number for what game you wish to play:\n1 = Tetris\n2 = Sudoku\n3 = Exit\n>";
		cin >> choice;

		switch (choice) {
		
		case 1:
			cout << "1 for Tetris\n";
			TETRIS();
			break;
		
		case 2:
			cout << "2 for Sudoku\n";
			SUDOKU();
			break;
		
		case 3:
			cout << "3 = EXIT\n";
			break;
		}

	} while (choice != 3);


	cout << "\nBYE BYE\n";
	return 0;
}