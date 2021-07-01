// GROUP C
// Chase Huante, Shaochen Ren, Gregory Pytak, Keerthi Thummati, Ankur Prajapati
#include <SFML/Graphics.hpp>
#include<iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "Sudoku.h"
#include "Menu.h"
#include "Tetris.h"
using namespace std;

int main() {

	// open up UI window
	sf::RenderWindow window(sf::VideoMode(400, 600), "Game-Pack");
	Menu menu(window.getSize().x, window.getSize().y);

	Texture t1;
	t1.loadFromFile("images/menuBackground.jpg");

	Sprite background(t1);

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
		window.draw(background);
		menu.draw(window);
		window.display();
	}
}
