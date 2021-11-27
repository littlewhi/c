#define _CRT_SECURE_NO_WARNINGS
#include "contact1.h"

void menu()
{
	printf("********1、add                 2、search**********\n");
	printf("********3、delet               4、change**********\n");
	printf("********5、show                6、sort************\n");
	printf("********            0、exit             **********\n");
}
void Init(struct CONDATA* ps)
{
	ps->con = (struct CONDATA*)malloc(SETTING);
	memset(ps->con, 0, SETTING);
	ps->cur_capci = SETTING;
	ps->control = 0;
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
		printf("请选择:>\n");
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
			Free(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (input);
	return 0;
}
