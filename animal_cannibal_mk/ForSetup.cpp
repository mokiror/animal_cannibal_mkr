#include "ForSetup.hpp"


void ForSetup::Setup()
{
	GameOver = false;
	wayy = STOP; //����� ���� � ������ ���� ������ �� �����
	snakeX = width / 2; //����� ���������� � �������� �����
	snakeY = heigth / 2;
	fruitX = rand() % width; //����� ������������� ��������
	fruitY = rand() % heigth;
	counter = 0; //������� ���� ��� �� ����
}


void ForSetup::DifSetup()
{
	GameOver = false;
	wayy = STOP; //����� ���� � ������ ���� ������ �� �����

	snakeX = width2 / 2; //����� ���������� � �������� �����
	snakeY = heigth2 / 2;
	fruitX = rand() % width2; //����� ������������� ��������
	fruitY = rand() % heigth2;
	villianX = rand() % width2;
	villianY = rand() % heigth2;

	counter = 0; //������� ���� ��� �� ����
	counterOfLives = 3;
}
