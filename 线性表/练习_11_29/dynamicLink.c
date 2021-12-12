#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

#define MAXSIZE 20

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define N 4

typedef int Status;
typedef int ElemType;

typedef struct Node
{
	ElemType data;//数据域
	struct Node* next;//指针域
}Node;

typedef struct Node* LinkList;

void createLinkListHead(LinkList* L, int n)
{
	*L = (LinkList)malloc(sizeof(Node));
	srand((size_t)time(NULL));
	Node* p =  (*L)->next = NULL;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		p = (Node*)malloc(sizeof(Node));//创立节点
		p->data = rand() % 100 + 1;//并初始化赋值数据域与指针域
		//接下来就是插入部分
		p->next = (*L)->next;
		(*L)->next = p;
	}
	//但我很想提醒一下，不要忘记free
}

void createLinkListTail(LinkList* l, int n)
{
	*l = (LinkList)malloc(sizeof(Node));
	int i = 0;
	Node* p = (*l);//刚开始的next是无权利使用的
	Node* q = NULL;
	srand((size_t)time(NULL));
	for (i = 0; i < n; i++)
	{
		q = (Node*)malloc(sizeof(Node));
		q->data = rand() % 100 + 1;
		p->next = q;
		p = q;
	}
	p->next = NULL;
}

Status ClearList(LinkList* L)
{
	Node* p = (*L) -> next;
	Node* q = NULL;
	while (p != NULL)
	{
		q = p->next;
		free(p);
		p = q;
	}
	free(*L);
	*L = NULL;
	return OK;
}

Status GetElem(LinkList* L, int i,ElemType* e)
{
	assert(*L);
	if (i < 1)//非法位置
		return ERROR;
	int j = 1;
	Node* p = (*L)->next;
	while (j < i && p)
	{
		p = p->next;
		j++;//如果用for其实会使循环体臃肿
	}
	if (p)//如果是空指针就说明不存在第i个元素的，就会来到else
	{
		*e = p->data;
		return OK;
	}
	else
	{
		return ERROR;
	}
}

Status ListInsert(LinkList* L, int i, ElemType e)
{
	assert(*L);
	if (i < 1)
	{
		return ERROR;
	}
	int j = 0;
	Node* p = *L;
	Node* s = NULL;
	while (j < i && p)
	{
		p = p->next;
		j++;
	}
	if (!p)//不存在第i个元素
	{
		return ERROR;
	}

	s = (Node*)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}

Status ListDelet(LinkList* L, int i)
{
	assert(*L);
	if (i < 1)
	{
		return ERROR;
	}
	int j = 1;
	Node* p = (*L);
	Node* s = NULL;
	while (j < i && p)
	{
		p = p->next;
		j++;
	}
	if (!p)
		return ERROR;

	s = p->next;
	p->next = s->next;
	free(s);
	s = NULL;
	return OK;
}

int main()
{
	ElemType e = 20;
	int i = N;
	LinkList L = NULL;
	//默认带表头节点的,L也就是头节点。
	//createLinkListHead(&L,N);//头插法；
	createLinkListTail(&L, N);//尾插法
					  
	 //查找
	GetElem(&L,i,&e);
	//printf("%d", e);
	//插入
	//ListInsert(&L, i, e);//插入e到到第i个元素前面
	//删除
	ListDelet(&L, 1);

	ClearList(&L);
	return 0;

}