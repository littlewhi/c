#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

#define OK 1
#define ERROR 0
#define MAXSIZE 40
typedef int Status;
typedef int QElemType;

//circle_queue

//typedef struct
//{
//	int front, rear;
//	QElemType data[MAXSIZE];
//}SqQueue;
//
//Status InitQueue(SqQueue* s)//初始化队列
//{
//	s->front = 0;
//	s->rear = 0;
//	return OK;
//}
//
//int Queuelength(SqQueue* s)//求队列当前长度
//{
//	return ((s->rear - s->front + MAXSIZE) % MAXSIZE);
//}
//
//Status EnQueue(SqQueue* s,QElemType e)//入队操作
//{
//	//队列满人了
//	if ((MAXSIZE - 1) == Queuelength(s))
//		return ERROR;
//	//非满时入队
//	s->data[s->rear] = e;
//	s->rear = (++s->rear) % MAXSIZE;
//	return OK;
//}
//
//Status DeQueue(SqQueue* s, QElemType* e)//出队
//{
//	//队空
//	if (0 == Queuelength(s))
//		return ERROR;
//	//非空
//	*e = s->data[s->front];
//	s->front = (++s->front) % MAXSIZE;
//	return OK;
//}
//
//int main()
//{
//	SqQueue s;
//	int i;
//	InitQueue(&s);
//	for (i = 0; i < MAXSIZE - 1; i++)
//	{
//		EnQueue(&s, i);
//		printf("%d ",s.data[i]);
//	}
//	DeQueue(&s, &i);
//	printf("\n%d\n", i);
//	return 0;
//}


typedef struct QNode
{
	QElemType data;
	struct Node* next;
}QNode,*QueuePtr;

typedef struct
{
	QueuePtr front, rear;
}LinkQueue;

Status Init(LinkQueue* s)
{
	s->front = (QueuePtr)malloc(sizeof(QNode));//front始终指向头节点，rear只在初始化时指向头节点
	s->rear = s->front;
	return OK;
}

Status EnQueue(LinkQueue* s, QElemType e)
{
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
	if (p == NULL)//分配内存错误
		return ERROR;
	p->data = e;
	s->rear->next = p;
	s->rear = p;
	return OK;
}

Status DeQueue(LinkQueue* s, QElemType* e)
{
	if (s->front == s->rear)//空队列时
		return ERROR;
	QueuePtr p = s->front->next;//用来暂存中间要删除的节点的
	s->front->next = p->next;
	*e = p->data;
	if (s->rear == p)//只有一个元素时还被删除了，rear就要指向头节点
		s->rear = s->front;
	free(p);
	return OK;
}

int main()
{
	LinkQueue s;
	int i,j;
	Init(&s);
	for (i = 0; i < 3; i++)
	{
		EnQueue(&s, i);
	}
	for (i = 0; i < 3; i++)
	{
		DeQueue(&s, &j);
	}
	return 0;
}

