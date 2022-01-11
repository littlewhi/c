#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define OK 1
#define ERROR 0
#define MAXSIZE 10
typedef int Status;
typedef int ElemType;

//push--压栈，pop出栈
//static stack -- 数组来实现，首位置作为栈底，
//top 作为游标指向栈顶，没有元素时，-1；
//typedef struct
//{
//	ElemType data[MAXSIZE];
//	int top;
//}sqStack;
//
//Status Push(sqStack* s, ElemType e)
//{
//	if (s->top == MAXSIZE -1)
//		return ERROR;
//	s->data[++(s->top)] = e;
//	return OK;
//}
//
//Status Pop(sqStack* s, ElemType* e)
//{
//	if (s->top == -1)
//		return ERROR;
//	*e = s->data[s->top--];
//	return OK;
//}

//int main()
//{
//	sqStack s = { 0 };
//	s.top = -1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < MAXSIZE; i++)
//	{
//		Push(&s, i);
//		printf("%d ", s.data[i]);
//	}
//	Pop(&s, &j);
//	printf("\n%d", j);
//	return 0;
//}

//两栈共享空间，存储相同类型数据的两个栈，为了满足最大限度的空间利用率，可以用一个数组创建两个栈
//头尾做栈底，游标top1,top2,
//当top1 ，2相差一个单位时栈满（不要想当然的以为两指针见面时就是相等）

//typedef struct
//{
//	ElemType data[MAXSIZE];
//	int top1, top2;
//}SqDoubleStack;
//
//Status Push(SqDoubleStack* s, ElemType e, int stacknumber)
//{
//	//满否
//	if (s->top1 + 1 == s->top2)
//		return ERROR;
//	//根据stn判断1，2
//	if (stacknumber == 1)
//	{
//		s->data[++(s->top1)] = e;
//	}
//	else
//	{
//		s->data[--(s->top2)] = e;
//	}
//	return OK;
//}
//
//Status Pop(SqDoubleStack* s, ElemType* e, int stacknumber)
//{
//	//先判断1，2
//	if (stacknumber == 1)
//	{
//		if (s->top1 == -1)//空栈
//			return ERROR;
//		*e = s->data[(s->top1)--];
//	}
//	else
//	{
//		if (s->top2 == MAXSIZE)//空栈
//			return ERROR;
//		*e = s->data[(s->top2)++];
//	}
//	return OK;
//}
//
//int main()
//{
//	int i = 0;
//	SqDoubleStack s;
//	s.top1 = -1;
//	s.top2 = MAXSIZE;
//	for (i = 0; i < MAXSIZE / 2; i++)
//	{
//		Push(&s, i, 1);
//	}
//	for (; i < MAXSIZE; i++)
//	{
//		Push(&s, i, 2);
//	}
//	for (i = 0; i <= s.top1; i++)
//	{
//		printf("%d ", s.data[i]);
//	}
//	for (i = MAXSIZE - 1; i>=s.top2 ; i--)
//	{
//		printf("%d ", s.data[i]);
//	}
//	Pop(&s, &i, 1);
//	printf("\n%d", i);
//	Pop(&s, &i, 2);
//	printf("\n%d\n", i);
//	for (i = 0; i <= s.top1; i++)
//	{
//		printf("%d ", s.data[i]);
//	}
//	for (i = MAXSIZE - 1; i >= s.top2; i--)
//	{
//		printf("%d ", s.data[i]);
//	}
//	return 0;
//}

