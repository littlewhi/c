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
//Status InitQueue(SqQueue* s)//��ʼ������
//{
//	s->front = 0;
//	s->rear = 0;
//	return OK;
//}
//
//int Queuelength(SqQueue* s)//����е�ǰ����
//{
//	return ((s->rear - s->front + MAXSIZE) % MAXSIZE);
//}
//
//Status EnQueue(SqQueue* s,QElemType e)//��Ӳ���
//{
//	//����������
//	if ((MAXSIZE - 1) == Queuelength(s))
//		return ERROR;
//	//����ʱ���
//	s->data[s->rear] = e;
//	s->rear = (++s->rear) % MAXSIZE;
//	return OK;
//}
//
//Status DeQueue(SqQueue* s, QElemType* e)//����
//{
//	//�ӿ�
//	if (0 == Queuelength(s))
//		return ERROR;
//	//�ǿ�
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
	s->front = (QueuePtr)malloc(sizeof(QNode));//frontʼ��ָ��ͷ�ڵ㣬rearֻ�ڳ�ʼ��ʱָ��ͷ�ڵ�
	s->rear = s->front;
	return OK;
}

Status EnQueue(LinkQueue* s, QElemType e)
{
	QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
	if (p == NULL)//�����ڴ����
		return ERROR;
	p->data = e;
	s->rear->next = p;
	s->rear = p;
	return OK;
}

Status DeQueue(LinkQueue* s, QElemType* e)
{
	if (s->front == s->rear)//�ն���ʱ
		return ERROR;
	QueuePtr p = s->front->next;//�����ݴ��м�Ҫɾ���Ľڵ��
	s->front->next = p->next;
	*e = p->data;
	if (s->rear == p)//ֻ��һ��Ԫ��ʱ����ɾ���ˣ�rear��Ҫָ��ͷ�ڵ�
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

