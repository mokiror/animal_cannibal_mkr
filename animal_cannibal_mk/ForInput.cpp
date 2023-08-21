#include "ForInput.hpp"

void JustInput::InputIt()
{
	//�������� �� ������� �����-���� �������
	if (_kbhit())
	{
		switch (_getch()) //����� ��� �����, ������� �� ������
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
	//�������� �� ������� �����-���� �������
	if (_kbhit())
	{
		switch (_getch()) //����� ��� �����, ������� �� ������
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