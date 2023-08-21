#ifndef FORTHEGAMEHPP
#define FORTHEGAMEHPP
#include "HeadFile.hpp"


struct ForTheGame
{
	bool GameOver = 0;

	//��� �����
	const int width = 50;
	const int heigth = 17;
	//��� ����� 2 ������
	const int width2 = 50;
	const int heigth2 = 6;

	//������������ ���� � �������
	int snakeX = 0, snakeY = 0;
	int fruitX = 0, fruitY = 0;
	int villianX = 0, villianY = 0;

	//�������
	int counter = 0;
	int counterOfLives = 3;

	//������������ (��� ���������� ����)
	//����� ��������� ��� �� �������� ���� � ���� ������
	enum SnakesWay
	{
		STOP = 0,
		LEFT,
		RIGHT,
		UP,
		DOWN
	};
	SnakesWay wayy{};

	//��� ������ ����
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

