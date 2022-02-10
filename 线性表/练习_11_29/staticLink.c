#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>

//��̬����--�α�ʵ�ַ�
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
	int cur;//Ϊ��ʱ��ʾ��ָ��(cursor)
}Component,StaticLinkList;

Status InitList(StaticLinkList space[])
{
	//��һ������Ԫ�ص�cur��ű�������ĵ�һ������λ�ã�
	//���һ��Ԫ�ص�cur��ŵ�һ���������Ԫ�ص�λ��
	int i = 0;
	for (i = 0; i < MAXSIZE - 1; i++)
	{
		space[i].cur = i + 1;
	}
	space[i].cur = 0;//���ʾ��ǰ����Ϊ��״̬
	return OK;
}

void Give(StaticLinkList space[])
{
	int i = 0;
	for (i = 0; i < MAXSIZE / 10; i++)
	{
		space[i + 1].data = i;
	}
	space[i].cur = 0;//��������Ԫ�ز������һ��Ԫ�أ��ͽ����cur��Ϊ0���Ա�ʾ��
	space[0].cur = i + 1;
	space[MAXSIZE - 1].cur = 1;
}

int Malloc_SLL(StaticLinkList space[])
{
	//�ӱ�������ȡһ���ռ������ͷԪ�ص�cur�͵ú���
	//�ɹ������±꣬��Ȼ�ͷ���0
	int i = 0;
	i = space[0].cur;
	if (i)
	{				
		space[0].cur = space[i].cur;
		return i;
	}
	return ERROR;//�±�Ϊ���Ԫ���ǲ��ܱ����õ�
	//���ٳɹ�������ռ�Ŀǰ��δ��ԭ������˳����ϵ
}

Status ListInsert(StaticLinkList* L, int i, ElemType e)
{
	assert(L);
	if (i<1 || i > L[0].cur + 1)
		return ERROR;
	//���ó�һ���µĿռ䣬��ֵ
	int pc = Malloc_SLL(L);
	L[pc].data = e;
	if (pc)
	{
		//����֪�����İ���λ���е�cur�ĳɱ�����λ�õ��±�
		int j = 0;
		int k = MAXSIZE - 1;
		for (j = 1; j <= i-1 ; j++)
		{
			k = L[k].cur;//������λ�õ�ǰ����±�
		}
		L[pc].cur = L[k].cur;
		//͵͵�İѲ���λ��ǰ���Ԫ�ص�cur��Ϊ�»�õ�λ�õ��±�
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
	//���ҵ���Ҫɾ����Ԫ�ص�ǰһ���±꣬�α����
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
	//��ʼ��
	InitList(space);
	//Ϊ�˲��������и�ֵ
	Give(space);//�ǹ淶����
	//�������
	ElemType e = 521;
	//����ģ��malloc
	//int pc = Malloc_SLL(space);
	ListInsert(space, 4, e);
	//ɾ������
	ListDelet(space, 5);
	return 0;
}

