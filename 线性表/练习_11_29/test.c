#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//#define MAXSIZE 20
//
//#define OK 1
//#define ERROR 0
//#define TRUE 1
//#define FALSE 0
//
//typedef int Status;
//typedef int ElemType;
//静态版顺序表
//typedef struct Sqlist
//
//{
//	int data[MAXSIZE];
//	int length;
//}Sqlist;
//
////地址获取函数
//int* Loc(struct Sqlist* ps, int n)
//{
//	return ((&ps->data[0]) + n);
//}
//
////获得,插入，删除某个元素的函数
//
//
////获得
//Status GetElem(Sqlist* ps,int ele,ElemType * e)
//{
//	if (ps->length == 0 || ele < 1 || ele > ps->length)
//		return ERROR;
//	//这样的实现方式，个人认为，
//	//提高了使用体验，避免了所要获得元素就是0,造成混淆。
//	*e = ps->data[ele - 1];
//	return OK;
//}
//
////插入
//int ListInsert(Sqlist* ps, int ele, ElemType e)
//{
//
//
//	if (ele < 1 || ele > MAXSIZE || ps->length == MAXSIZE)
//		return ERROR;
//	if (ele == ps->length + 1)//要插入在表的尾端
//	{
//		ps->data[ele - 1] = e;
//	}
//	else
//	{
//		int i = 0;
//		ElemType temp;
//		for (i = ps->length - 1; i > ele - 1; i--)
//		{
//			temp = ps->data[i];
//			ps->data[i] = ps->data[i - 1];
//			ps->data[i - 1] = temp;
//		}
//		ps->data[ele - 1] = e;
//	}
//	ps->length++;
//	return OK;
//}
//
////删除
//Status ListDelet(Sqlist* ps, int ele)
//{
//	//如果索要删除的位置不存在，就抛出异常
//	//表尾是一种特殊情况
//	//删除成功，就返回OK
//	if ((ele < 1) || (ele > ps->length))
//		return ERROR;
//	if (ele == ps->length)
//	{
//		ps->data[ele - 1] = 0;//默认0为初始化的值
//	}
//	else
//	{
//		ps->data[ele - 1] = 0;//这步也是可以不用的。
//		int i = 0;
//		ElemType temp;
//		for (i = ele - 1; i < ps->length; i++)
//		{
//			ps->data[i] = ps->data[i+1];
//		}
//	}
//	ps->length--;
//	return OK;
//}
//
//int main()
//{
//	struct Sqlist l = { {0},0 };
//	int i = 0;
//	for (i = 0; i < MAXSIZE / 2; i++)
//	{
//		l.data[i] = i;
//		l.length++;
//	}
//	//int* ploc = Loc(&l,4);
//	//printf("%p\n%p", ploc, &l.arr[4]);
//
//	/*int e = 0;
//	int ret = GetElem(&l, 4, &e);
//	if(ret == OK)
//	printf("%d", e);*/
//
//	/*int e = 10;
//	int ret = ListInsert(&l, 11, e);
//	if (ret == OK)
//	{
//		for (i = 0; i < l.length; i++)
//		{
//			printf("%d ", l.data[i]);
//		}
//	}*/
//
//	int order = 9;
//
//	int ret = ListDelet(&l, order);
//
//
//	return 0;
//}


