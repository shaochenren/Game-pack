// GROUP C
// Chase Huante, Shaochen Ren, Gregory Pytak, Keerthi Thummati, Ankur Prajapati
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "Sudoku.h"
#include "Menu.h"
#include "Tetris.h"
using namespace std;

int main() {

	// open up UI window
	sf::RenderWindow window(sf::VideoMode(600, 600), "Game-Pack");
	Menu menu(window.getSize().x, window.getSize().y);

	while (window.isOpen())
	{

		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.moveUp();
					break;

				case sf::Keyboard::Down:
					menu.moveDown();
					break;

				case sf::Keyboard::Return:
					switch (menu.getPressedItem())
					{
					// case 0 to call Tetris.h and open tetris 
					case 0:
						TETRIS();
						break;
					// case 0 to call Tetris.h and open tetris
					case 1:
						SUDOKU();
						break;
					// case 2 for EXIT
					case 2:
						window.close();
						break;
					}
					break;
				}
			break;
			case sf::Event::Closed:
				window.close();
				break;
			}
		}
		window.clear();
		menu.draw(window);
		window.display();
	}
}


//// ====================================== NON-UI MENU PROTOTYPE =========================================================================
//// Current code just allows traversal of other games that can be called through this menu
//int main() {
//	int choice;
//	do {
//		cout << "\n================= GAME-PACK ===================\n";
//		cout << "Enter the number for what game you wish to play:\n1 = Tetris\n2 = Sudoku\n3 = Exit\n>";
//		cin >> choice;
//
//		// simple switch case setup
//		switch (choice) {
//
//		case 1:
//			cout << "1 for Tetris\n";
//			TETRIS();
//			break;
//
//		case 2:
//			cout << "2 for Sudoku\n";
//			SUDOKU();
//			break;
//
//		case 3:
//			cout << "3 = EXIT\n";
//			break;
//		}
//
//	} while (choice != 3);
//
//
//	cout << "\nBYE BYE\n";
//	return 0;
//}