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

//push--压栈，pop出栈
//static stack -- 数组来实现，首位置作为栈底，
//top 作为游标指向栈顶，没有元素时，-1；
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

//两栈共享空间，存储相同类型数据的两个栈，为了满足最大限度的空间利用率，可以用一个数组创建两个栈
//头尾做栈底，游标top1,top2,
//当top1 ，2相差一个单位时栈满（不要想当然的以为两指针见面时就是相等）

//typedef struct
//{
//	ElemType data[MAXSIZE];
//	int top1, top2;
//}SqDoubleStack;
//
//Status Push(SqDoubleStack* s, ElemType e, int stacknumber)
//{
//	//满否
//	if (s->top1 + 1 == s->top2)
//		return ERROR;
//	//根据stn判断1，2
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
//	//先判断1，2
//	if (stacknumber == 1)
//	{
//		if (s->top1 == -1)//空栈
//			return ERROR;
//		*e = s->data[(s->top1)--];
//	}
//	else
//	{
//		if (s->top2 == MAXSIZE)//空栈
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

//栈的链式存储,top要初始化为NULL

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
 
//栈的实践
//逆波兰后缀表达式（Reverse Polish Notation , RPN）

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
		printf("报错\n");
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
		if (*(s + i) == ' ')//遇到空格是要跳过的
		{
			++i;
			continue;
		}
		if (isdigit(*(s + i)))//是数字就进栈
		{
			while (*(s + i) != ' ')//多位数字
			{
				w = *(s + i) - '0' + w * 10;
				++i;
			}
			Push(&sta, w);	
		}
		else//不是数字就肯定是运算符了
		{
			int x, y,z;
			Pop(&sta, &y);//先进后出，得到着取出来
			Pop(&sta, &x);
			z = operation(x, y, *(s + i));//一个运算函数，按照参数顺序运算。
			Push(&sta, z);
			++i;
		}
		//++i;
	}
	return sta.data[sta.top];
}

static int compare(sqStack* s, char c)//返回值0--栈为空，1--优先级高于等于栈顶，-1--优先级低于栈顶或）
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

char* Switch(char* dest, const char* source)//将转换好的逆波兰放进dest中
{
	//数字就直接放dest
	//字符进栈。
	//直到）与优先级低于栈顶字符的时候，栈里的字符全出来，那个字符进栈。
	sqStack s = { {0},-1 };
	int i = 0,j= 0;
	while (*(source + i))
	{
		int judge = 0;//用于判断‘）’的情况
		if (isdigit(*(source + i)))
		{
			while (isdigit(*(source + i)))//多位数字用循环
			{
				*(dest + j++) = *(source + i);
					i++;
			}
			*(dest + j++) = ' ';
			continue;
		}
		judge = compare(&s, *(source + i));
		if (judge > -1)//正常进栈情况
		{
			Push(&s, (int)*(source + i));
			++i;
		}
		else//先出栈再进栈
		{
			if (judge == -2)//得把 ） 跳过去
				++i;
			j = j + pop_str(&s , dest+j);//返回值就是移动的次数
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