#pragma once

//库函数的引用
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//参数定义
#define NAMEMAX 20
#define NUMMAX 20
#define ADRESMAX 20
#define MAX 10
struct PEOINF
{
	char name[NAMEMAX];
	int age;
	char phonum[NUMMAX];
	char adres[ADRESMAX];
};

struct CONDATA
{
	struct PEOINF con[MAX];
	int control;
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


//函数声明

void Init(struct CONDATA*);

//添加函数
void Add(struct CONDATA*);

//查找函数
void Search(const struct CONDATA*);

//删除函数
void Delet(struct CONDATA*);

void Change(struct CONDATA*);

void Show(const struct CONDATA*);

void Sort(struct CONDATA*);