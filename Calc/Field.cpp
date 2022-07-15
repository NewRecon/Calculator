#include "Field.h"

Field::Field(float width, float hight) : field(sf::Vector2f(width, hight))
{
	if (!font.loadFromFile("Resurses/Fonts/arial.ttf"))
	{
		std::cout << "Font not found" << std::endl;
	}
	text.setFont(font);
	text.setFillColor(sf::Color::Black);
	text.setCharacterSize(32);
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

void Field::setNum1(std::string num)
{
	this->num1 = num;
}

void Field::setNum2(std::string num)
{
	this->num2 = num;
}

void Field::setOperation(short operation)
{
	this->operation = operation;
}

std::string Field::getNum1()
{
	return num1;
}

std::string Field::getNum2()
{
	return num2;
}

short Field::getOperation()
{
	return operation;
}

void Field::setStatus(bool status)
{
	this->status = status;
}

bool Field::getStat()
{
	return status;
}
