#define _CRT_SECURE_NO_WARNINGS
#include "contact1.h"
//�������ܵ�ʵ��


void Add(struct CONDATA* ps)
{
	if ((ps->control != MAX))
	{
			printf("����: ");
			scanf("%s", ps->con[ps->control].name);
			printf("����: ");
			scanf("%d", &ps->con[ps->control].age);
			printf("�绰����: ");
			scanf("%s", ps->con[ps->control].phonum);
			printf("��ͥסַ: ");
			scanf("%s", ps->con[ps->control].adres);
			ps->control++;
			printf("��ӳɹ�\n");
	}
	else
	{
		printf("��Ǹ��ͨѶ¼������\n");
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
	printf("%-4s\t%-4s\t%-15s\t%-15s\n", "����", "����", "�绰����", "��ͥסַ");
	printf("%-4s\t", ps->con[pl].name);
	printf("%-4d\t", ps->con[pl].age);	
	printf("%-15s\t", ps->con[pl].phonum);
	printf("%-15s\t\n", ps->con[pl].adres);

}
//**********************************************************

void Search(const struct CONDATA* ps)
{
	char name[NAMEMAX] = {'\0'};
	printf("��������Ҫ�����˵�����\n");
	scanf("%s", name);
	//���ҵ�λ��
	int place = findbynam(ps, name);
	//��ӡ���� 
	if (place != -1)
	{
		print_f(ps, place);
	}
	else
	{
		printf("��Ǹ��û���ҵ���\n");
	}
}

void Delet(struct CONDATA* ps)
{
	char name[NAMEMAX] = { 0 };
	printf("��������Ҫɾ���˵�����\n");
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
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("��Ǹ��û���ҵ���\n");
	}
	
}

void Change(struct CONDATA* ps)
{
	char name[NAMEMAX] = { '\0' };
	printf("��������Ҫ�ı��˵�����\n");
	scanf("%s", name);
	int place = findbynam(ps, name);
	if (place != -1)
	{
		memset(&ps->con[place], 0, sizeof(ps->con[place]));
		printf("����: ");
		scanf("%s", ps->con[ps->control].name);
		printf("����: ");
		scanf("%d", &ps->con[ps->control].age);
		printf("�绰����: ");
		scanf("%s", ps->con[ps->control].phonum);
		printf("��ͥסַ: ");
		scanf("%s", ps->con[ps->control].adres);
		ps->control++;
		printf("���ĳɹ�\n");
	}
	else
	{
		printf("��Ǹ��û���ҵ���\n");
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
	printf("***1��������        2�����绰��***\n");
	printf("***3��������        4����סַ  ***\n");
	printf("****0�������棬�ҲŲ�����*********\n");
	printf("ѡ������ʽ��\n");
	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
	case NAME:
		sortbyname(ps);
		printf("����ɹ�\n");
		break;
	case PHONENUM:
		sortbynum(ps);
		printf("����ɹ�\n");
		break;
	case AGE:
		sortbyage(ps);
		printf("����ɹ�\n");
		break;
	case ADDRES:
		sortbyaddres(ps);
		printf("����ɹ�\n");
		break;
	case EXIT:
		printf("�˳�����\n");
		break;
	default:
		printf("ѡ�����������ѡ��\n");
		break;
	}
}