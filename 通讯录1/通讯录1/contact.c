#define _CRT_SECURE_NO_WARNINGS
#include "contact1.h"
//函数功能的实现


void Add(struct CONDATA* ps)
{
	if ((ps->control != MAX))
	{
			printf("姓名: ");
			scanf("%s", ps->con[ps->control].name);
			printf("年龄: ");
			scanf("%d", &ps->con[ps->control].age);
			printf("电话号码: ");
			scanf("%s", ps->con[ps->control].phonum);
			printf("家庭住址: ");
			scanf("%s", ps->con[ps->control].adres);
			ps->control++;
			printf("添加成功\n");
	}
	else
	{
		printf("抱歉，通讯录已满。\n");
	}
}

//****************************************************************
static int findbynam(const struct CONDATA* ps,char* name)
{
	int i = 0;
	for (i = 0; i < ps->control; i++)
	{
		if (!(strcmp(ps->con[i].name, name)))
		{
			return i;
		}
	}
	return -1;
}

static void print_f(const struct CONDATA* ps, int pl)
{
	printf("%-4s\t%-4s\t%-15s\t%-15s\n", "姓名", "年龄", "电话号码", "家庭住址");
	printf("%-4s\t", ps->con[pl].name);
	printf("%-4d\t", ps->con[pl].age);	
	printf("%-15s\t", ps->con[pl].phonum);
	printf("%-15s\t\n", ps->con[pl].adres);

}
//**********************************************************

void Search(const struct CONDATA* ps)
{
	char name[NAMEMAX] = {'\0'};
	printf("请输入所要查找人的姓名\n");
	scanf("%s", name);
	//先找到位置
	int place = findbynam(ps, name);
	//打印出来 
	if (place != -1)
	{
		print_f(ps, place);
	}
	else
	{
		printf("抱歉，没有找到。\n");
	}
}

void Delet(struct CONDATA* ps)
{
	char name[NAMEMAX] = { 0 };
	printf("请输入所要删除人的姓名\n");
	scanf("%s", name);
	int place = findbynam(ps, name);
	if (place != -1)
	{
		memset(&ps->con[place], 0, sizeof(ps->con[place]));
		int i = 0;
		for (i = place; i < ps->control - 1; i++)
		{
			memcpy(&ps->con[i], &ps->con[i + 1], sizeof(ps->con[i]));
		}
		memset(&ps->con[ps->control], 0, sizeof(ps->con[ps->control]));
		ps->control--;
		printf("删除成功\n");
	}
	else
	{
		printf("抱歉，没有找到。\n");
	}
	
}

void Change(struct CONDATA* ps)
{
	char name[NAMEMAX] = { '\0' };
	printf("请输入所要改变人的姓名\n");
	scanf("%s", name);
	int place = findbynam(ps, name);
	if (place != -1)
	{
		memset(&ps->con[place], 0, sizeof(ps->con[place]));
		printf("姓名: ");
		scanf("%s", ps->con[ps->control].name);
		printf("年龄: ");
		scanf("%d", &ps->con[ps->control].age);
		printf("电话号码: ");
		scanf("%s", ps->con[ps->control].phonum);
		printf("家庭住址: ");
		scanf("%s", ps->con[ps->control].adres);
		ps->control++;
		printf("更改成功\n");
	}
	else
	{
		printf("抱歉，没有找到。\n");
	}
}

void Show(const struct CONDATA* ps)
{
	int i = 0;
	for (i = 0; i < ps->control; i++)
	{
		print_f(ps, i);
	}
}

int Com_name(const struct  PEOINF* str1,const struct  PEOINF* str2)
{
	return strcmp(str1->name, str2->name);
}
void sortbyname(struct CONDATA* ps)
{
	qsort(&ps->con, ps->control, sizeof(ps->con[0]), Com_name);
}

int Com_num(const struct  PEOINF* str1, const struct  PEOINF* str2)
{
	return strcmp(str1->phonum, str2->phonum);
}
void sortbynum(struct CONDATA* ps)
{
	qsort(&ps->con, ps->control, sizeof(ps->con[0]), Com_num);
}

int Com_age(const struct  PEOINF* str1, const struct  PEOINF* str2)
{
	return (str1->age - str2->age);
}
void sortbyage(struct CONDATA* ps)
{
	qsort(&ps->con, ps->control, sizeof(ps->con[0]), Com_age);
}

int Com_addres(const struct  PEOINF* str1, const struct  PEOINF* str2)
{
	return strcmp(str1->adres, str2->adres);
}
void sortbyaddres(struct CONDATA* ps)
{
	qsort(&ps->con, ps->control, sizeof(ps->con[0]), Com_addres);
}

void Sort(struct CONDATA* ps)
{
	
	printf("**********************************\n");
	printf("***1、按姓名        2、按电话号***\n");
	printf("***3、按年龄        4、按住址  ***\n");
	printf("****0、逗你玩，我才不排序*********\n");
	printf("选择排序方式：\n");
	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
	case NAME:
		sortbyname(ps);
		printf("排序成功\n");
		break;
	case PHONENUM:
		sortbynum(ps);
		printf("排序成功\n");
		break;
	case AGE:
		sortbyage(ps);
		printf("排序成功\n");
		break;
	case ADDRES:
		sortbyaddres(ps);
		printf("排序成功\n");
		break;
	case EXIT:
		printf("退出排序\n");
		break;
	default:
		printf("选择错误，请重新选择\n");
		break;
	}
}