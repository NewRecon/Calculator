#include "Button.h"

Button::Button(float width, float hight, std::string name) : button(sf::Vector2f(width, hight))
{
	if (!font.loadFromFile("Resurses/Fonts/arial.ttf"))
	{
		std::cout << "Font not found" << std::endl;
	}
	text.setFont(font);
	text.setFillColor(sf::Color::White);
	text.setString(name);
	text.setCharacterSize(48);
	button.setFillColor(sf::Color(20, 20, 20));
	button.setOutlineColor(sf::Color(48, 48, 48));
	button.setOutlineThickness(3);
}

void Button::setPosition(float x, float y)
{
	button.setPosition(x, y);
	text.setPosition(x + 35, y + 20);
}

sf::RectangleShape& Button::getButton()
{
	return button;
}

sf::Text& Button::getText()
{
	return text;
}

void Button::push(Field* field)
{
	field->setField(field->getStatus() + text.getString());
}

sf::Vector2f Button::getPos()
{
	return button.getPosition();
}
