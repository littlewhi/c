#define _CRT_SECURE_NO_WARNINGS
#include "contact1.h"

void menu()
{
	printf("********1��add                 2��search**********\n");
	printf("********3��delet               4��change**********\n");
	printf("********5��show                6��sort************\n");
	printf("********            0��exit             **********\n");
}
int main()
{
	int input = 0;
	struct CONDATA con;
	memset(&con,0,sizeof(con));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add(&con);
			break;
		case SEARCH:
			Search(&con);
			break;
		case DELET:
			Delet(&con);
			break;
		case CHANGE:
			Change(&con);
			break;
		case SHOW:
			Show(&con);
			break;
		case SORT:
			Sort(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (input);
	return 0;
}
