#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>

class Field
{
private:
	sf::RectangleShape field;
	sf::Font font;
	sf::Text text;
	std::string num1 = "";
	std::string num2 = "";
	short operation = 0;
	bool status = false;
	bool flag = false; // after eq = (true)
public:
	Field(float width, float hight);
	void setField(std::string string);
	sf::RectangleShape getField();
	sf::Text& getText();
	std::string getStatus();
	void setPosition(float width, float hight);
	void setNum1(std::string num);
	void setNum2(std::string num);
	void setOperation(short operation);
	std::string getNum1();
	std::string getNum2();
	short getOperation();
	void setStatus(bool);
	bool getStat();
};

