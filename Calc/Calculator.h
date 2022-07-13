#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
#include "Button.h"
#include "Field.h"

class Calculator
{
private:
	sf::RenderWindow window;
	Button* button0;
	Button* button1;
	Button* button2;
	Button* button3;
	Button* button4;
	Button* button5;
	Button* button6;
	Button* button7;
	Button* button8;
	Button* button9;
	Button* buttonEqu;
	Button* buttonCen;
	Button* buttonSum;
	Button* buttonDif;
	Button* buttonDiv;
	Button* buttonMul;
	Field* field;
	//int coord[16][4];
	Button** panel;
public:
	Calculator();
	void run();

private:
	void evenState();
	void update();
	void render();
};
