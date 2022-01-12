#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define OK 1
#define ERROR 0
#define MAXSIZE 40
typedef int Status;
typedef int ElemType;
//typedef char ElemType;

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

//ջ����ʽ�洢,topҪ��ʼ��ΪNULL

//typedef struct StackNode
//{
//	ElemType data;
//	struct StackNode* next;
//}*LinkStackPtr,StackNode;
//
//typedef struct LinkStack
//{
//	LinkStackPtr top;
//	int count;
//}LinkStack;
//
//Status Push(LinkStack* s, ElemType e)
//{
//	StackNode* tp = (StackNode*)malloc(sizeof(StackNode));
//	if (tp == NULL)
//		return ERROR;
//	tp->data = e;
//	tp->next = s->top;
//	s->top = tp;
//	s->count++;
//	return OK;
//}
//
//Status Pop(LinkStack*s, ElemType* e)
//{
//	StackNode* tp = s->top;
//	if (!(s->count))
//		return ERROR;
//	s->top = tp->next;
//	*e = tp->data;
//	free(tp);
//	s->count--;
//	tp = NULL;
//	return OK;
//}
//
//int main()
//{
//	LinkStack s = { 0 };
//	int i = 0,j;
//	for (i = 0; i < MAXSIZE; i++)
//	{
//		Push(&s, i);
//	}
//	for (i = 0; i < MAXSIZE; i++)
//	{
//		Pop(&s, &j);
//		printf("%d ", j);
//	}
//	return 0;
//}
 
//ջ��ʵ��
//�沨����׺���ʽ��Reverse Polish Notation , RPN��

typedef struct
{
	ElemType data[MAXSIZE];
	int top;
}sqStack;

Status Push(sqStack* s, ElemType e)
{
	if (s->top == MAXSIZE - 1)
		return ERROR;
	s->data[++(s->top)] = e;
	return OK;
}

Status Pop(sqStack* s, ElemType* e)
{
	if (s->top == -1)
		return ERROR;
	*e = s->data[s->top];
	s->data[s->top--] = 0;
	return OK;
}

static int operation(int x, int y, char c)
{
	switch (c)
	{
	case ('+'):
		return (x + y);
	case ('*'):
		return (x*y);
	case('-'):
		return (x - y);
	case ('/'):
		return (x / y);
	default:
		printf("����\n");
		return TMP_MAX_S;
	}
}

int rpn_static(char* s)
{
	int i = 0;
	sqStack sta = { {0},-1 };
	//int len = strlen(s);
	while (*(s + i))
	{
		int w = 0;
		if (*(s + i) == ' ')//�����ո���Ҫ������
		{
			++i;
			continue;
		}
		if (isdigit(*(s + i)))//�����־ͽ�ջ
		{
			while (*(s + i) != ' ')//��λ����
			{
				w = *(s + i) - '0' + w * 10;
				++i;
			}
			Push(&sta, w);	
		}
		else//�������־Ϳ϶����������
		{
			int x, y,z;
			Pop(&sta, &y);//�Ƚ�������õ���ȡ����
			Pop(&sta, &x);
			z = operation(x, y, *(s + i));//һ�����㺯�������ղ���˳�����㡣
			Push(&sta, z);
			++i;
		}
		//++i;
	}
	return sta.data[sta.top];
}

static int compare(sqStack* s, char c)//����ֵ0--ջΪ�գ�1--���ȼ����ڵ���ջ����-1--���ȼ�����ջ����
{
	char a;
	if (s->top == -1)
		return 0;
	a = (char)s->data[s->top];
	if (((a == '*' || a == '/') && (c == '+' || c == '-')))
		return -1;
	else if (c == ')')
		return -2;
	else
		return 1;
}

static int pop_str(sqStack* s, char* dest)
{
	int x = 0;
	int j = 0;
	while (s->top != -1 && s->data[s->top] != 40)//'(' = 40
	{
		Pop(s, &x);
		*(dest + j++) = (char)x;
		*(dest + j++) = ' ';
	}
	if (s->data[s->top] == 40)
		Pop(s, &x);
	return j;
}

char* Switch(char* dest, const char* source)//��ת���õ��沨���Ž�dest��
{
	//���־�ֱ�ӷ�dest
	//�ַ���ջ��
	//ֱ���������ȼ�����ջ���ַ���ʱ��ջ����ַ�ȫ�������Ǹ��ַ���ջ��
	sqStack s = { {0},-1 };
	int i = 0,j= 0;
	while (*(source + i))
	{
		int judge = 0;//�����жϡ����������
		if (isdigit(*(source + i)))
		{
			while (isdigit(*(source + i)))//��λ������ѭ��
			{
				*(dest + j++) = *(source + i);
					i++;
			}
			*(dest + j++) = ' ';
			continue;
		}
		judge = compare(&s, *(source + i));
		if (judge > -1)//������ջ���
		{
			Push(&s, (int)*(source + i));
			++i;
		}
		else//�ȳ�ջ�ٽ�ջ
		{
			if (judge == -2)//�ð� �� ����ȥ
				++i;
			j = j + pop_str(&s , dest+j);//����ֵ�����ƶ��Ĵ���
			Push(&s, (int)*(source + i));
			++i;
		}
		
	}
	pop_str(&s, dest + j);
	return dest;
}
int main()
{
	char arr[100] = "9 3 1 - 3 * + 10 2 / +";
	char a[20] = "9+(3-1)*3+10/2";
	char b[40] = {0};
	//scanf("%s", a);
	printf("%s\n", Switch(b, a));
	printf("%d", rpn_static(b));
	return 0;
}