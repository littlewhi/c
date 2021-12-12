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
	ElemType data;//������
	struct Node* next;//ָ����
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
		p = (Node*)malloc(sizeof(Node));//�����ڵ�
		p->data = rand() % 100 + 1;//����ʼ����ֵ��������ָ����
		//���������ǲ��벿��
		p->next = (*L)->next;
		(*L)->next = p;
	}
	//���Һ�������һ�£���Ҫ����free
}

void createLinkListTail(LinkList* l, int n)
{
	*l = (LinkList)malloc(sizeof(Node));
	int i = 0;
	Node* p = (*l);//�տ�ʼ��next����Ȩ��ʹ�õ�
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
	if (i < 1)//�Ƿ�λ��
		return ERROR;
	int j = 1;
	Node* p = (*L)->next;
	while (j < i && p)
	{
		p = p->next;
		j++;//�����for��ʵ��ʹѭ����ӷ��
	}
	if (p)//����ǿ�ָ���˵�������ڵ�i��Ԫ�صģ��ͻ�����else
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
	if (!p)//�����ڵ�i��Ԫ��
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
	//Ĭ�ϴ���ͷ�ڵ��,LҲ����ͷ�ڵ㡣
	//createLinkListHead(&L,N);//ͷ�巨��
	createLinkListTail(&L, N);//β�巨
					  
	 //����
	GetElem(&L,i,&e);
	//printf("%d", e);
	//����
	//ListInsert(&L, i, e);//����e������i��Ԫ��ǰ��
	//ɾ��
	ListDelet(&L, 1);

	ClearList(&L);
	return 0;

}