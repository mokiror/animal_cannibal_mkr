#include "ForInput.hpp"

void JustInput::InputIt()
{
	//проверка на нажатие какой-либо клавиши
	if (_kbhit())
	{
		switch (_getch()) //вернёт тот симвл, который мы нажали
		{
		case 'a':
		{
			wayy = LEFT;
			break;
		}
		case 'A':
		{
			wayy = LEFT;
			break;
		}
		case 'w':
		{
			wayy = UP;
			break;
		}
		case 'W':
		{
			wayy = UP;
			break;
		}
		case 'd':
		{
			wayy = RIGHT;
			break;
		}
		case 'D':
		{
			wayy = RIGHT;
			break;
		}
		case 's':
		{
			wayy = DOWN;
			break;
		}
		case 'S':
		{
			wayy = DOWN;
			break;
		}
		case 'x':
		{
			GameOver = true;
			system("cls");
			GameIsOver03();
			break;
		}
		case 'X':
		{
			GameOver = true;
			system("cls");
			GameIsOver03();
			break;
		}
		default:
		{
			break;
		}
		}
	}
}


void JustInput::DifInputIt()
{
	//проверка на нажатие какой-либо клавиши
	if (_kbhit())
	{
		switch (_getch()) //вернёт тот симвл, который мы нажали
		{
		case 'a':
		{
			wayy = LEFT;
			break;
		}
		case 'A':
		{
			wayy = LEFT;
			break;
		}
		case 'w':
		{
			wayy = UP;
			break;
		}
		case 'W':
		{
			wayy = UP;
			break;
		}
		case 'd':
		{
			wayy = RIGHT;
			break;
		}
		case 'D':
		{
			wayy = RIGHT;
			break;
		}
		case 's':
		{
			wayy = DOWN;
			break;
		}
		case 'S':
		{
			wayy = DOWN;
			break;
		}
		case 'x':
		{
			GameOver = true;
			system("cls");
			GameIsOver03();
			break;
		}
		case 'X':
		{
			GameOver = true;
			system("cls");
			GameIsOver03();
			break;
		}
		default:
		{
			break;
		}
		}
	}
}