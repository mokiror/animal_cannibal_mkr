#include "ForSetup.hpp"


void ForSetup::Setup()
{
	GameOver = false;
	wayy = STOP; //чтобы змея в начале игры стояла на месте
	snakeX = width / 2; //спавн происходит в середине карты
	snakeY = heigth / 2;
	fruitX = rand() % width; //фрукт распологается рандомно
	fruitY = rand() % heigth;
	counter = 0; //счетчик пока что на нуле
}


void ForSetup::DifSetup()
{
	GameOver = false;
	wayy = STOP; //чтобы змея в начале игры стояла на месте

	snakeX = width2 / 2; //спавн происходит в середине карты
	snakeY = heigth2 / 2;
	fruitX = rand() % width2; //фрукт распологается рандомно
	fruitY = rand() % heigth2;
	villianX = rand() % width2;
	villianY = rand() % heigth2;

	counter = 0; //счетчик пока что на нуле
	counterOfLives = 3;
}
