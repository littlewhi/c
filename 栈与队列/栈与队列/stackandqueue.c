#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define OK 1
#define ERROR 0
#define MAXSIZE 10
typedef int Status;
typedef int ElemType;

//push--ѹջ��pop��ջ
//static stack -- ������ʵ�֣���λ����Ϊջ�ף�
//top ��Ϊ�α�ָ��ջ����û��Ԫ��ʱ��-1��
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

//��ջ����ռ䣬�洢��ͬ�������ݵ�����ջ��Ϊ����������޶ȵĿռ������ʣ�������һ�����鴴������ջ
//ͷβ��ջ�ף��α�top1,top2,
//��top1 ��2���һ����λʱջ������Ҫ�뵱Ȼ����Ϊ��ָ�����ʱ������ȣ�

//typedef struct
//{
//	ElemType data[MAXSIZE];
//	int top1, top2;
//}SqDoubleStack;
//
//Status Push(SqDoubleStack* s, ElemType e, int stacknumber)
//{
//	//����
//	if (s->top1 + 1 == s->top2)
//		return ERROR;
//	//����stn�ж�1��2
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
//	//���ж�1��2
//	if (stacknumber == 1)
//	{
//		if (s->top1 == -1)//��ջ
//			return ERROR;
//		*e = s->data[(s->top1)--];
//	}
//	else
//	{
//		if (s->top2 == MAXSIZE)//��ջ
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

