#define _CRT_SECURE_NO_WARNINGS
#include "contact1.h"

void menu()
{
	printf("********1��add                 2��search**********\n");
	printf("********3��delet               4��change**********\n");
	printf("********5��show                6��sort************\n");
	printf("********7��save                0��exit  **********\n");
}

Free(struct CONDATA* ps)
{
	free(ps->con);
	ps->con = NULL;
}
int main()
{
	int input = 0;
	struct CONDATA con;
	Init(&con);
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
		case SAVE:
			Save(&con);
			break;
		case EXIT:
			Save(&con);
			Free(&con);
			printf("�ѱ��棬�˳�ͨѶ¼\n������������");
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (input);
	return 0;
}
