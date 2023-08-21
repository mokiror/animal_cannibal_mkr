#ifndef FORTHEGAMEHPP
#define FORTHEGAMEHPP
#include "HeadFile.hpp"


struct ForTheGame
{
	bool GameOver = 0;

	//для рамки
	const int width = 50;
	const int heigth = 17;
	//для рамки 2 уровня
	const int width2 = 50;
	const int heigth2 = 6;

	//расположение змеи и фруктов
	int snakeX = 0, snakeY = 0;
	int fruitX = 0, fruitY = 0;
	int villianX = 0, villianY = 0;

	//счетчик
	int counter = 0;
	int counterOfLives = 3;

	//перечисления (для управления змеёй)
	//чтобы несколько раз не нажимтаь одну и туже кнопку
	enum SnakesWay
	{
		STOP = 0,
		LEFT,
		RIGHT,
		UP,
		DOWN
	};
	SnakesWay wayy{};

	//для хвоста змеи
	int tailX[9999]{}, tailY[9999]{};
	int tailsCount = 0;

	void MainMenu();
	void ChooseTheLevel();
	void GameIsOver01();
	void GameIsOver02();
	void GameIsOver03();
	void GameIsOver04();
	void Instructions();
	void InstructionsLevelOne();
	void InstructionsLevelTwo();
	void Credits();

};


#endif 

