#include "Field.h"

Field::Field(float width, float hight) : field(sf::Vector2f(width, hight))
{
	if (!font.loadFromFile("Resurses/Fonts/arial.ttf"))
	{
		std::cout << "Font not found" << std::endl;
	}
	text.setFont(font);
	text.setFillColor(sf::Color::Black);
	text.setCharacterSize(48);
	field.setFillColor(sf::Color::White);
}

void Field::setField(std::string string)
{
	text.setString(string);
}

sf::RectangleShape Field::getField()
{
	return field;
}

sf::Text& Field::getText()
{
	return text;
}

std::string Field::getStatus()
{
	return text.getString();
}

void Field::setPosition(float width, float hight)
{
	field.setPosition(width, hight);
	text.setPosition(width + 10, hight + 10);
}