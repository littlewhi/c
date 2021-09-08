#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("**********************************\n");
	printf("********1��enter******************\n");
	printf("********0��exit ******************\n");
	printf("**********************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char player[ROWS][COLS] = { 0 };
	restart(mine,ROWS,COLS,'0');
	restart(player, ROWS,COLS,'*');
	display(player, ROWS, COLS);
	set(mine, ROW, COL,LEI);
	//display(mine, ROWS, COLS);
	//int win = ROW * COL - LEI;
	int w = 1;
	while (w)
	{
		int x;
		int y;
		printf("����������>:\n");
		scanf("%d%d", &x, &y);
		if (x <= ROW && y <= COL)
		{

			if (mine[x][y] == '1')
			{
				printf("�ܱ�Ǹ���㱻ը���ˡ�\n");
				printf("\n");
				display(player, ROWS, COLS);
				printf("\n");
				display(mine, ROWS, COLS);
				break;
			}
			else
			{
				int i = find(mine, x, y);
				player[x][y] = i + '0';
				//mid(mine, x, y, ROWS, COLS, player);
				if (i != 0)
				{
					display(player, ROWS, COLS);
				}
				else
				{
					mid(x, y, mine, ROWS, COLS, player);
					//enlarge(x, y - 1, mine, player);
					display(player, ROWS, COLS);
				}
			}
		}
		else
		{
			printf("������磬���������롣\n");
		}	
		w = is_win(player, '*');
		if (!w)
		{
			printf("���׳ɹ�������\n");
			printf("\n");
			display(mine, ROWS, COLS);
			printf("\n");
			display(player, ROWS, COLS);
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>��(0/1)\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);


	return 0;
}