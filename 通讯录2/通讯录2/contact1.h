#pragma once

//�⺯��������
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//��������
#define NAMEMAX 20
#define NUMMAX 20
#define ADRESMAX 20
//#define MAX 10
#define SETTING 10
#define BASE_ADD 5
struct PEOINF
{
	char name[NAMEMAX];
	int age;
	char phonum[NUMMAX];
	char adres[ADRESMAX];
};

struct CONDATA
{
	int control;
	int cur_capci;
	struct PEOINF* con;
};

enum option
{
	EXIT,
	ADD,
	SEARCH,
	DELET,
	CHANGE,
	SHOW,
	SORT
};

enum option2
{
	NAME = 1,
	PHONENUM,
	AGE,
	ADDRES
};


//��������

void Init(struct CONDATA*);
//��Ӻ���
void Add(struct CONDATA*);
//���Һ���
void Search(const struct CONDATA*);
//ɾ������
void Delet(struct CONDATA*);
//���ĺ���
void Change(struct CONDATA*);
//չʾ����
void Show(const struct CONDATA*);
//������
void Sort(struct CONDATA*);