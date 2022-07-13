#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>

class Field
{
private:
	sf::RectangleShape field;
	sf::Font font;
	sf::Text text;
public:
	Field(float width, float hight);
	void setField(std::string string);
	sf::RectangleShape getField();
	sf::Text& getText();
	std::string getStatus();
	void setPosition(float width, float hight);
};

