// GROUP C
// Chase Huante, Shaochen Ren, Gregory Pytak, Keerthi Thummati, Ankur Prajapati
#pragma once
#include <SFML\Graphics.hpp>
#define OPTIONS 3
//#define SFML_NO_DEPRECATED_WARNINGS
class Menu
{
public:
	// creating the options
	Menu(float width, float height);
	// deconstructor
	~Menu();
	// allowing us to traverse through options
	void draw(sf::RenderWindow &window);
	// function to move up
	void moveUp();
	// function to move down
	void moveDown();
	// return desired option
	int getPressedItem() { return selectedItemIndex; }

private:
	// pointer of current item
	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[OPTIONS];

};

















// =================================== OLD STUFF ========================================

//#pragma once
//#include<iostream>
//#include <SFML/Graphics.hpp>
////#include <Drawable.hpp>
//using namespace std;
//#define MAX_NUMBER_OF_ITEMS 3
//
//class Menu 
//{
//public:
//	Menu(float width, float height);
//	~Menu();
//
//	void draw(sf::RenderWindow& window);
//	void MoveUp();
//	void MoveDown();
//	int GetPressedItem() { return selectedItemIndex;  }
//
//private:
//	int selectedItemIndex;
//	sf::Font font;
//	sf::Text menu[MAX_NUMBER_OF_ITEMS];
//
//};
