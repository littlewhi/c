#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<signal.h>
//#include<assert.h>
//#include"标头.h"
//int main()
//{
//	int a = 2;
//	int b = 3;
//	/*int a_;
//	int b_;*/
//	int c = MAX(a, b);
//
//
//	/*char* a = "abg\n";
//	printf("%s",a );
//	signal(SIGINT, printf);
//	return 0;*/
//}

long tonum(char a)
{
	switch (a)
	{
	case '1':
		return (long)1;
	case '2':
		return (long)2;
	case '3':
		return (long)3;
	case '4':
		return (long)4;
	case '5':
		return (long)5;
	case '6':
		return (long)6;
	case '7':
		return (long)7;
	case '8':
		return (long)8;
	case '9':
		return (long)9;
	case '0':
		return (long)0;
	default:
		return (long)-1;
	}
}

long atol(const char* str)
{
	const char* str1 = str;
	long ret = 0;
	char i = 1;
	if (*str1 == '-')//因为不确定输入的字符串是否一定有正负号，所一不得不单一判断，并且，为了统一，到达转换的那步是数字，所以有了移位操作。
	{
		i = -i;
		str1++;
	}
	if (*str1 == '+')
		str1++;
	while ((*str1 <= '9' && *str1 >= '0') || (*str1 == '\0'))
		ret = tonum(*str1++) + ret*10;
	return ((long)i * ret);
}

int main()
{
	char* a = "-12#3";
		long i = atol(a);
		printf("%ld",i);
	return 0;
}