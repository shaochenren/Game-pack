//#include "Menu.h"
//
//Menu::Menu(float width, float height) 
//{
//	if (!font.loadFromFile("arial.ttf"))
//	{
//		// handle error
//	}
//
//
//	sf::Text score;
//	score.setFont(font);
//	score.setFillColor(sf::Color::Red);
//	score.setStyle(sf::Text::Regular);
//	score.setString("Score:");
//	score.setCharacterSize(25);
//	score.setPosition(60, -3);
//
//
//
//	menu[0].setFont(font);
//	menu[0].setFillColor(sf::Color::Red);
//	menu[0].setStyle(sf::Text::Regular);
//	menu[0].setString("TETRIS");
//	menu[0].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));
//
//	menu[1].setFont(font);
//	menu[1].setFillColor(sf::Color::White);
//	menu[1].setStyle(sf::Text::Regular);
//	menu[1].setString("SUDOKU");
//	menu[1].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));
//
//	menu[2].setFont(font);
//	menu[2].setFillColor(sf::Color::Red);
//	menu[2].setStyle(sf::Text::Regular);
//	menu[2].setString("EXIT");
//	menu[2].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));
//
//	selectedItemIndex = 0;
//
//}
//
//Menu::~Menu() {
//
//}
//
// ========================  moving the keys up / down  =============================
//
//void Menu::draw(sf::RenderWindow& window)
//{
//	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
//	{
//		window.draw(menu[i]);
//	}
//}
//
//void Menu::MoveUp() {
//	if (selectedItemIndex - 1 >= 0) 
//	{
//		menu[selectedItemIndex].setFillColor(sf::Color::White);
//		selectedItemIndex--;
//		menu[selectedItemIndex].setFillColor(sf::Color::Red);
//	}
//}
//
//void Menu::MoveDown() {
//	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS) 
//	{
//		menu[selectedItemIndex].setFillColor(sf::Color::White);
//		selectedItemIndex++;
//		menu[selectedItemIndex].setFillColor(sf::Color::Red);
//	}
//}





















//
//#include "Menu.h"
//#define SFML_NO_DEPRECATED_WARNINGS
//
//// class to set font, color, and navigation for potential options
//Menu::Menu(float width, float height)
//{
//	if (!font.loadFromFile("arial.ttf")) {}
//
//	// option one for TETRIS
//	mainMenu[0].setFont(font);
//	mainMenu[0].setColor(sf::Color::Blue);
//	mainMenu[0].setString("TETRIS");
//	mainMenu[0].setCharacterSize(50);
//	mainMenu[0].setPosition(sf::Vector2f(width / 2 - 50, height / (MAX_main_menu + 1)));
//
//	// option one for SUDOKU
//	mainMenu[1].setFont(font);
//	mainMenu[1].setOutlineColor(sf::Color::White);
//	mainMenu[1].setString("SUDOKU");
//	mainMenu[1].setCharacterSize(50);
//	mainMenu[1].setPosition(sf::Vector2f(width / 2 - 50, height / (MAX_main_menu + 1) * 2));
//
//	// option 3 to EXIT
//	mainMenu[2].setFont(font);
//	mainMenu[2].setOutlineColor(sf::Color::White);
//	mainMenu[2].setString("EXIT");
//	mainMenu[2].setCharacterSize(50);
//	mainMenu[2].setPosition(sf::Vector2f(width / 2 - 50, height / (MAX_main_menu + 1) * 3));
//
//	mainMenuSelected = 0;
//}
//
//
//Menu::~Menu()
//{
//
//}
//
//// function for drawing the main menu
//void Menu::draw(sf::RenderWindow& window)
//{
//	for (int i = 0; 9 < 3; i++)
//	{
//		window.draw(mainMenu[i]);
//	}
//}