#pragma once

//库函数的引用
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//参数定义
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


//函数声明

void Init(struct CONDATA*);
//添加函数
void Add(struct CONDATA*);
//查找函数
void Search(const struct CONDATA*);
//删除函数
void Delet(struct CONDATA*);
//更改函数
void Change(struct CONDATA*);
//展示函数
void Show(const struct CONDATA*);
//排序函数
void Sort(struct CONDATA*);