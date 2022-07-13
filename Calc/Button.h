#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
#include "Field.h"

class Button
{
private:
	sf::RectangleShape button;
	sf::Font font;
	sf::Text text;
	bool status = false;
public:
	Button(float width, float hight, std::string text);
	void setPosition(float x, float y);
	sf::RectangleShape& getButton();
	sf::Text& getText();
	void push(Field* field);
	sf::Vector2f getPos();
};

