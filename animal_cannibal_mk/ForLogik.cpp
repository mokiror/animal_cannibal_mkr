#include "ForLogik.hpp"

void BestLogik::Logik()
{
	int preTailX = tailX[0];
	int preTailY = tailY[0];
	int preTail2X, preTail2Y;

	tailX[0] = snakeX;
	tailY[0] = snakeY;

	for (int i = 1; i < tailsCount; i++)
	{
		preTail2X = tailX[i];
		preTail2Y = tailY[i];

		tailX[i] = preTailX;
		tailY[i] = preTailY;

		preTailX = preTail2X;
		preTailY = preTail2Y;
	}

	//для управленич змеей
	switch (wayy)
	{
	case ForTheGame::LEFT:
	{
		snakeX--;
		break;
	}
	case ForTheGame::RIGHT:
	{
		snakeX++;
		break;
	}
	case ForTheGame::UP:
	{
		snakeY--;
		break;
	}
	case ForTheGame::DOWN:
	{
		snakeY++;
		break;
	}
	default:
	{
		break;
	}
	}

	//что-бы игрок не уходил за стены
	//на 1 уровне это можно делать
	if (snakeX >= width)
	{
		snakeX = 0;
	}
	else if (snakeX < 0)
	{
		snakeX = width - 1;
	}
	if (snakeY >= heigth)
	{
		snakeY = 0;
	}
	else if (snakeY < 0)
	{
		snakeY = heigth - 1;
	}




	//чтобы не ударяться об себя
	for (int i = 0; i < tailsCount; i++)
	{
		if (tailX[i] == snakeX && tailY[i] == snakeY)
		{
			GameOver = true;
			system("cls");
			GameIsOver02();
		}
	}

	//увеличение очков и новое расположение фрукта
	if (snakeX == fruitX && snakeY == fruitY)
	{
		counter += 10;
		fruitX = rand() % width;  //по новой распологаем фрукт
		fruitY = rand() % heigth;
		tailsCount++;
	}
}

void BestLogik::DifLogik()
{
	int preTailX = tailX[0];
	int preTailY = tailY[0];
	int preTail2X, preTail2Y;

	tailX[0] = snakeX;
	tailY[0] = snakeY;

	for (int i = 1; i < tailsCount; i++)
	{
		preTail2X = tailX[i];
		preTail2Y = tailY[i];

		tailX[i] = preTailX;
		tailY[i] = preTailY;

		preTailX = preTail2X;
		preTailY = preTail2Y;
	}

	//для управленич змеей
	switch (wayy)
	{
	case ForTheGame::LEFT:
	{
		snakeX--;
		break;
	}
	case ForTheGame::RIGHT:
	{
		snakeX++;
		break;
	}
	case ForTheGame::UP:
	{
		snakeY--;
		break;
	}
	case ForTheGame::DOWN:
	{
		snakeY++;
		break;
	}
	default:
	{
		break;
	}
	}

	//что-бы игрок не уходил за стены
	if (snakeX >= width2 || snakeX < 0 ||
		snakeY >= heigth2 || snakeY < 0)
	{
		GameOver = true;
		system("cls");
		GameIsOver01();
	}

	//чтобы не ударяться об себя
	for (int i = 0; i < tailsCount; i++)
	{
		if (tailX[i] == snakeX && tailY[i] == snakeY)
		{
			GameOver = true;
			system("cls");
			GameIsOver02();
		}
	}

	//если игрок врежется во врага
	if (snakeX == villianX && snakeY == villianY)
	{
		counterOfLives -= 1;
		villianX = rand() % width2;  //по новой распологаем злодея
		villianY = rand() % heigth2;
	}

	//увеличение очков и новое расположение фрукта
	if (snakeX == fruitX && snakeY == fruitY)
	{
		counter += 10;
		fruitX = rand() % width2;  //по новой распологаем фрукт
		fruitY = rand() % heigth2;
		villianX = rand() % width2;  //по новой распологаем злодея
		villianY = rand() % heigth2;
		tailsCount++;
	}

	if (counterOfLives == 0)
	{
		GameOver = true;
		system("cls");
		GameIsOver04();
	}
}