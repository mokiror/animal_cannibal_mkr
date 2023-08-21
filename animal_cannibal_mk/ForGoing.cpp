#include "ForGoing.hpp"

void GOOO::GoGoGo()
{
	tailsCount = 0;
	Setup();
	while (!GameOver)
	{
		DrawTheGame();
		InputIt();
		Logik();
		Sleep(100);
	}
}

void GOOO::DifGoGoGo()
{
	tailsCount = 0;
	DifSetup();
	while (!GameOver)
	{
		DrawTheDifGame();
		DifInputIt();
		DifLogik();
		Sleep(100);
	}
}