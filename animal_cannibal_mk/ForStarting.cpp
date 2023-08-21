#include "ForStarting.hpp"

void StartIt::StartGame()
{
	char putIt = '\0';
	char putIt2 = '\0';

	while (true)
	{
		system("cls");
		MainMenu();
		putIt = _getch();
		system("cls");

		switch (putIt)
		{
		case '1':
		{

			ChooseTheLevel();
			putIt2 = _getch();

			if (putIt2 == '1')
			{
				system("cls");
				InstructionsLevelOne();
				_getch();
				system("cls");
				GoGoGo();
				_getch();
				break;
			}
			else if (putIt2 == '2')
			{
				system("cls");
				InstructionsLevelTwo();
				_getch();
				system("cls");
				DifGoGoGo();
				_getch();
				break;
			}
			break;
		}
		case '2':
		{
			Instructions();
			_getch();
			break;
		}
		case '3':
		{
			Credits();
			_getch();
			break;
		}
		case '4':
		{
			GameIsOver03();
			_getch();
			exit(0);
		}
		default:
		{
			break;
		}
		}
	}
}
