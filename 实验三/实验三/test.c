#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//编写程序统计 100 以内的自然数，有多少个素数？
//	//输出所有素数及素数的个数。
//	int n = 0;.//记录素数的个数
//	int i = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		
//		int p = 0;//如果i能被1到其本身之间的的数整除，就赋值其于1，以判断的它跳出内部循环的原因
//		if (i == 2)
//		{
//			printf("%d ", i);
//		}
//		else
//		{
//		    int j = 0;
//			for (j = 2; j < i; j++)//判断i是否是素数的内循环
//			{
//				if (i%j == 0)//不是就跳出
//				{
//					p = 1;
//					break;
//				}
//			}
//			if (!p)
//			{
//				n++;
//				printf("%d ", i);
//			}
//		}
//	}
//	printf("\n");
//	printf("一百以内的素数的个数是%d", n);
//	return 0;
//}
//
//
//#include<ctype.h>
//#include<stdio.h>
//int main()
//{
//	/*A、 B、 C、 D 四人在一起聊天。
//		有 3 人始终说真话，有 1 人始终说谎。找谁在说谎， 
//		A 说不是我； B 说是 C； C 说是 D， D 说 C 胡说。
//		请编程找出是谁在说谎。（选修）*/
//	char say = 0;//假设说谎者
//	for (say = 'a'; say < 'e'; say++)
//	{
//		if ((say != 'a') + (say == 'c') + (say == 'd') + (say != 'd') == 3)
//		{
//			printf("是%c在说谎", toupper(say));
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int cal(int num)
//{
//	while (num)
//	{
//		if (num % 3 == 2)
//		{
//			if (num % 5 == 4)
//			{
//				if (num % 7 == 6)
//					return num;
//			}
//		}
//		num--;
//	}
//}
//
//int main()
//{
//	/*韩信带兵打仗， 1500 名士兵战后减员了四五百人，
//		他命令士兵 3人站一排多了 2 人，
//		5 人站一排多了 4 人，
//		7 人站一排多了 6 人，
//		韩信一口说出了士兵数量。
//		请编程算算战后士兵有多少人*/
//	int person_num = 1100;
//	printf("战后士兵人数是%d\n", cal(person_num));
//	return 0;
//}
//int main()
//{
//
//	//int num;
//
//	//for (num = 1; num < 80; ++num)
//	//	if (num % 5 == 0 && num % 7 == 2)
//	//		printf("%d\n", num);
//	/*int i, num;
//
//	scanf("%d", &num);
//	for (i = 2; i <= num / 2; ++i)
//		if (num % i == 0)
//			break;
//	if (num >= i * 2)
//		printf("Yes \n");
//	else
//		printf("No \n");
//*/
//	//char ch;
//
//	//printf("Please input a letter:");
//	//scanf("%c", &ch);
//	//if ('A' <= ch && ch <= 'Z')
//	//	ch += 'a' - 'A';
//	//else
//	//	if ('a' <= ch && ch <= 'z')
//	//		ch += 'A' - 'a';
//	//printf("%c\n", ch);
//
//	/*int i, b, k = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		b = i % 2;
//		while (b-- >= 0)
//			k++;
//	}
//	printf("%d,%d\n", k, b);
//*/
//	//int num = 12345678, digit = 0, t;
//	//printf("请输入一个自然数（如12345678）：");
//	//scanf("%d", &num);
//	//while (num)
//	//{
//	//	t = num % 10;
//	//	/***error***/
//	//	if (!(t % 2))
//	//		/***error***/
//	//		digit = t + digit * 10;
//	//	num /= 10;
//	//}
//	//printf("%d\n", digit);
//	//int a, i = 1, min;
//	//while (i <= 5)
//	//{
//	//	printf("\n请输入第%d个数据：", i);
//	//	scanf("%d", &a);
//	//	/***error***/
//	//	if (i == 1)  //
//	//		min = a;   //
//
//	//	if (min >= a)
//	//		min = a;
//	//	i = i + 1;
//	//}
//	//printf("min=%d\n", min);
//	/*int i = 1;
//	int sum = 0;
//	do
//	{
//		sum += i;
//	} while (++i <= 10);
//*/
//	int i = 1;
//	/***error***/
//	int s = 0;
//	int t = 0;
//	while (i <= 7)
//	{
//		t = t + 5;
//		s = s + t;
//		t = t * 10;
//		i++;
//		/***error***/
//	}
//	printf("%d\n", s);	
//	return 0;
//}
