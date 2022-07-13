#include "Calculator.h"

Calculator::Calculator() : window(sf::VideoMode(400, 500), L"Калькулятор")
{
	//for (int i = 0, x = 0, y = 100; i < 16; i++)
	//{
	//	for (int j = 0, posX=x, posY=y; j < 4; j+=2, posX += 99, posY += 99)
	//	{
	//		coord[i][j] = posX;
	//		coord[i][j+1] = posY;
	//	}
	//	if (x == 300)
	//	{
	//		x = 0;
	//		y += 100;
	//	}
	//	else x += 100;
	//}
	
	////Проверка
	//for (int i = 0; i < 16; i++)
	//{
	//	std::cout << i + 1 << ". ";
	//	for (int j = 0; j < 4; j++)
	//	{
	//		std::cout << coord[i][j] << " ";
	//		if (j == 1) std::cout << " : ";
	//	}
	//	std::cout << std::endl;
	//}

	button7 = new Button(100,100,"7");
	button7->setPosition(0, 100);
	button8 = new Button(100, 100, "8");
	button8->setPosition(100, 100);
	button9 = new Button(100, 100, "9");
	button9->setPosition(200, 100);
	buttonSum = new Button(100, 100, "+");
	buttonSum->setPosition(300, 100);
	button4 = new Button(100, 100, "4");
	button4->setPosition(0, 200);
	button5 = new Button(100, 100, "5");
	button5->setPosition(100, 200);
	button6 = new Button(100, 100, "6");
	button6->setPosition(200, 200);
	buttonDif = new Button(100, 100, "-");
	buttonDif->setPosition(300, 200);
	button1 = new Button(100, 100, "1");
	button1->setPosition(0, 300);
	button2 = new Button(100, 100, "2");
	button2->setPosition(100, 300);
	button3 = new Button(100, 100, "3");
	button3->setPosition(200, 300);
	buttonMul = new Button(100, 100, "x");
	buttonMul->setPosition(300, 300);
	buttonCen = new Button(100, 100, "C");
	buttonCen->setPosition(0, 400);
	button0 = new Button(100, 100, "0");
	button0->setPosition(100, 400);
	buttonEqu = new Button(100, 100, "=");
	buttonEqu->setPosition(200, 400);
	buttonDiv = new Button(100, 100, "/");
	buttonDiv->setPosition(300, 400);
	field = new Field(400,100);
	field->setPosition(0, 0);

	panel = new Button * [16] {button7, button8, button9, buttonSum, button4, button5, button6, buttonDif, button1, button2, button3, buttonMul, buttonCen, button0, buttonEqu, buttonDiv};
}

void Calculator::run()
{
	while (window.isOpen())
	{
		evenState();
		update();
		render();
	}
}

void Calculator::evenState()
{
	sf::Event event;
	sf::Vector2i localPosition;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			localPosition = sf::Mouse::getPosition(window);
			while (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{

			}
			std::cout << localPosition.x << " : " << localPosition.y << std::endl;
			for (int i = 0; i < 16; i++)
			{
				if (localPosition.x >= panel[i]->getPos().x &&
					localPosition.x <= panel[i]->getPos().x + 99 &&
					localPosition.y >= panel[i]->getPos().y &&
					localPosition.y <= panel[i]->getPos().y + 99)
				{
					panel[i]->push(field);
				}
			}
		}
	}
}

void Calculator::update()
{
	
}

void Calculator::render()
{
	window.clear(sf::Color::White);
	window.draw(button7->getButton());
	window.draw(button7->getText());
	window.draw(button8->getButton());
	window.draw(button8->getText());
	window.draw(button9->getButton());
	window.draw(button9->getText());
	window.draw(buttonSum->getButton());
	window.draw(buttonSum->getText());
	window.draw(button4->getButton());
	window.draw(button4->getText());
	window.draw(button5->getButton());
	window.draw(button5->getText());
	window.draw(button6->getButton());
	window.draw(button6->getText());
	window.draw(buttonDif->getButton());
	window.draw(buttonDif->getText());
	window.draw(button1->getButton());
	window.draw(button1->getText());
	window.draw(button2->getButton());
	window.draw(button2->getText());
	window.draw(button3->getButton());
	window.draw(button3->getText());
	window.draw(buttonMul->getButton());
	window.draw(buttonMul->getText());
	window.draw(buttonCen->getButton());
	window.draw(buttonCen->getText());
	window.draw(button0->getButton());
	window.draw(button0->getText());
	window.draw(buttonEqu->getButton());
	window.draw(buttonEqu->getText());
	window.draw(buttonDiv->getButton());
	window.draw(buttonDiv->getText());
	window.draw(field->getField());
	window.draw(field->getText());
	window.display();
}
