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
//��̬��˳���
//typedef struct Sqlist
//
//{
//	int data[MAXSIZE];
//	int length;
//}Sqlist;
//
////��ַ��ȡ����
//int* Loc(struct Sqlist* ps, int n)
//{
//	return ((&ps->data[0]) + n);
//}
//
////���,���룬ɾ��ĳ��Ԫ�صĺ���
//
//
////���
//Status GetElem(Sqlist* ps,int ele,ElemType * e)
//{
//	if (ps->length == 0 || ele < 1 || ele > ps->length)
//		return ERROR;
//	//������ʵ�ַ�ʽ��������Ϊ��
//	//�����ʹ�����飬��������Ҫ���Ԫ�ؾ���0,��ɻ�����
//	*e = ps->data[ele - 1];
//	return OK;
//}
//
////����
//int ListInsert(Sqlist* ps, int ele, ElemType e)
//{
//
//
//	if (ele < 1 || ele > MAXSIZE || ps->length == MAXSIZE)
//		return ERROR;
//	if (ele == ps->length + 1)//Ҫ�����ڱ��β��
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
////ɾ��
//Status ListDelet(Sqlist* ps, int ele)
//{
//	//�����Ҫɾ����λ�ò����ڣ����׳��쳣
//	//��β��һ���������
//	//ɾ���ɹ����ͷ���OK
//	if ((ele < 1) || (ele > ps->length))
//		return ERROR;
//	if (ele == ps->length)
//	{
//		ps->data[ele - 1] = 0;//Ĭ��0Ϊ��ʼ����ֵ
//	}
//	else
//	{
//		ps->data[ele - 1] = 0;//�ⲽҲ�ǿ��Բ��õġ�
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


