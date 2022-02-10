#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>

//静态链表--游标实现法
#define MAXSIZE 100
 #define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElemType;

typedef struct
{
	ElemType data;
	int cur;//为零时表示无指向(cursor)
}Component,StaticLinkList;

Status InitList(StaticLinkList space[])
{
	//第一个数组元素的cur存放备用链表的第一个空闲位置，
	//最后一个元素的cur存放第一个被插入的元素的位置
	int i = 0;
	for (i = 0; i < MAXSIZE - 1; i++)
	{
		space[i].cur = i + 1;
	}
	space[i].cur = 0;//这表示当前链表为空状态
	return OK;
}

void Give(StaticLinkList space[])
{
	int i = 0;
	for (i = 0; i < MAXSIZE / 10; i++)
	{
		space[i + 1].data = i;
	}
	space[i].cur = 0;//如果插入的元素不是最后一个元素，就将其的cur变为0，以表示空
	space[0].cur = i + 1;
	space[MAXSIZE - 1].cur = 1;
}

int Malloc_SLL(StaticLinkList space[])
{
	//从备用链表取一个空间出来，头元素的cur就得后移
	//成功返回下标，不然就返回0
	int i = 0;
	i = space[0].cur;
	if (i)
	{				
		space[0].cur = space[i].cur;
		return i;
	}
	return ERROR;//下表为零的元素是不能被引用的
	//开辟成功后的这块空间目前还未与原链表建立顺序联系
}

Status ListInsert(StaticLinkList* L, int i, ElemType e)
{
	assert(L);
	if (i<1 || i > L[0].cur + 1)
		return ERROR;
	//先拿出一个新的空间，赋值
	int pc = Malloc_SLL(L);
	L[pc].data = e;
	if (pc)
	{
		//在神不知鬼不觉的把新位置中的cur改成被插入位置的下标
		int j = 0;
		int k = MAXSIZE - 1;
		for (j = 1; j <= i-1 ; j++)
		{
			k = L[k].cur;//被插入位置的前面的下标
		}
		L[pc].cur = L[k].cur;
		//偷偷的把插入位置前面的元素的cur改为新获得的位置的下标
		L[k].cur = pc;
		return OK;
	}
	return ERROR;
}

void Free_SLL(StaticLinkList space[], int k)
{

	space[k].cur = space[0].cur;
	space[0].cur = k;
}
Status ListDelet(StaticLinkList space[], int i)
{
	assert(space);
	if (i < 1 || i > space[0].cur - 1)
	{
		return ERROR;
	}
	//先找到所要删除的元素的前一个下标，游标更新
	int j = 0;
	int k = MAXSIZE - 1;
	for (j = 1; j <= i-1; j++)
	{
		k = space[k].cur;
	}
	space[k].cur = space[i].cur;
	Free_SLL(space, j);
	return OK;
}

int main()
{
	StaticLinkList space[MAXSIZE];
	//初始化
	InitList(space);
	//为了操作，进行赋值
	Give(space);//非规范操作
	//插入操作
	ElemType e = 521;
	//首先模拟malloc
	//int pc = Malloc_SLL(space);
	ListInsert(space, 4, e);
	//删除操作
	ListDelet(space, 5);
	return 0;
}

