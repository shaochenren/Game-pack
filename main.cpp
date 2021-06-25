// chase huante GROUP C
#include <SFML/Graphics.hpp>
#include<iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "Sudoku.h"
#include "Tetris.h"
using namespace std;



// Current code just allows traversal of other games that can be called through this menu
int main() {
	int choice;
	do {
		cout << "\n================= GAME-PACK ===================\n";
		cout << "Enter the number for what game you wish to play:\n1 = Tetris\n2 = Sudoku\n3 = Exit\n>";
		cin >> choice;

		// simple switch case setup
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


// ================== GRAPHICAL INTERFACE START =====================================

//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(800, 600), "GAME-PACK");
//
//	sf::Event event;
//
//	while (window.isOpen()) {
//
//		while (window.pollEvent(event)) {
//
//			if (event.type == sf::Event::Closed) {
//
//				window.close();
//			}
//		}
//	}
//
//	return 0;
//}

// ==================================  PROTOTYPE 2 =======================================

//// chase huante GROUP C
//#include <SFML/Graphics.hpp>
//#include<iostream>
//#include "Menu.h"
//
//int main() {
//
//	sf::RenderWindow window(sf::VideoMode(600, 600), "GAME-PACK");
//
//	//Menu menu(window.getSize().x, window.getSize().y);
//
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//
//		while (window.pollEvent(event))
//		{
//			switch (event.type)
//			{
//			/*case sf::Event::KeyReleased:
//				switch (event.key.code)
//				{
//				case sf::Keyboard::Up:
//					menu.MoveUp();
//					break;
//				}
//			case sf::Keyboard::Down:
//				menu.MoveDown();
//				break;
//
//			case sf::Keyboard::Return:
//				switch (menu.GetPressedItem())
//				{
//				case 0:
//					std::cout << "TETRIS Button has been pressed" << std::endl;
//					break;
//
//				case 1:
//					std::cout << "SUDOKU Button has been pressed" << std::endl;
//					break;
//
//				case 2:
//					std::cout << "Exit Button has been pressed" << std::endl;
//					window.close();
//					break;
//				}
//			
//
//				break;*/
//			case sf::Event::Closed:
//				window.close();
//				break;
//
//			}
//		}
//
//		window.clear();
//
//		//menu.draw(window);
//
//		window.display();
//	}
//}


// ============================ PROTOTYPE 1 ========================================


//#include<iostream>
//#include "Sudoku.h"
//#include "Tetris.h"
//using namespace std;
//
//int main()
//{
//
//	//int choice;
//	//do {
//	//	cout << "\n================= GAME-PACK ===================\n";
//	//	cout << "Enter the number for what game you wish to play:\n1 = Tetris\n2 = Sudoku\n3 = Exit\n>";
//	//	cin >> choice;
//
//	//	// simple switch case setup
//	//	switch (choice) {
//
//	//	case 1:
//	//		cout << "1 for Tetris\n";
//	//		TETRIS();
//	//		break;
//
//	//	case 2:
//	//		cout << "2 for Sudoku\n";
//	//		SUDOKU();
//	//		break;
//
//	//	case 3:
//	//		cout << "3 = EXIT\n";
//	//		break;
//	//	}
//
//	//} while (choice != 3);
//
//
//	//cout << "\nBYE BYE\n";
