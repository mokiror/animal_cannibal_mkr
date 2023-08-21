#include "ForDrawing.hpp"

void ForDraw::DrawTheGame()
{
	system("cls"); //функция для очищения экрана

	//пичатаем карту
	for (int i = 0; i < width + 1; i++)
	{
		std::cout << "#";
	}
	std::cout << std::endl;

	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
			{
				std::cout << "#";

			}
			//печатаем голову змеи
			if (i == snakeY && j == snakeX)
			{
				std::cout << "O";
			}
			else if (i == fruitY && j == fruitX)
			{
				std::cout << "@";
			}
			else
			{
				bool print = false;

				//печатаем хвост
				for (int s = 0; s < tailsCount; s++)
				{
					if (tailX[s] == j && tailY[s] == i)
					{
						std::cout << "o";
						print = true;
					}
				}
				if (!print)
				{
					std::cout << " ";
				}
			}

			//ну и заполняем 2 кусочек стены
			if (j == width - 1)
			{
				std::cout << "#";
			}
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < width + 1; i++)
	{
		std::cout << "#";
	}
	std::cout << std::endl;
	//счетчик очков
	std::cout << "HOW MANY APPLES DO YOU EAT: " << counter << std::endl;;

}

void ForDraw::DrawTheDifGame()
{
	system("cls"); //функция для очищения экрана

	//пичатаем карту
	for (int i = 0; i < width2 + 1; i++)
	{
		std::cout << "#";
	}
	std::cout << std::endl;

	for (int i = 0; i < heigth2; i++)
	{
		for (int j = 0; j < width2; j++)
		{
			if (j == 0)
			{
				std::cout << "#";

			}
			//печатаем голову змеи
			if (i == snakeY && j == snakeX)
			{
				std::cout << "O";
			}
			else if (i == fruitY && j == fruitX)
			{
				std::cout << "@";
			}
			else if (i == villianY && j == villianX)
			{
				std::cout << "V";
			}
			else
			{
				bool print = false;

				//печатаем хвост
				for (int s = 0; s < tailsCount; s++)
				{
					if (tailX[s] == j && tailY[s] == i)
					{
						std::cout << "o";
						print = true;
					}
				}
				if (!print)
				{
					std::cout << " ";
				}
			}

			//ну и заполняем 2 кусочек стены
			if (j == width2 - 1)
			{
				std::cout << "#";
			}
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < width2 + 1; i++)
	{
		std::cout << "#";
	}
	std::cout << std::endl;
	//счетчик очков
	std::cout << "HOW MANY APPLES DO YOU EAT: " << counter << std::endl;
	std::cout << "LIVES: " << counterOfLives << std::endl;

}