#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//��д����ͳ�� 100 ���ڵ���Ȼ�����ж��ٸ�������
//	//������������������ĸ�����
//	int n = 0;.//��¼�����ĸ���
//	int i = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		
//		int p = 0;//���i�ܱ�1���䱾��֮��ĵ����������͸�ֵ����1�����жϵ��������ڲ�ѭ����ԭ��
//		if (i == 2)
//		{
//			printf("%d ", i);
//		}
//		else
//		{
//		    int j = 0;
//			for (j = 2; j < i; j++)//�ж�i�Ƿ�����������ѭ��
//			{
//				if (i%j == 0)//���Ǿ�����
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
//	printf("һ�����ڵ������ĸ�����%d", n);
//	return 0;
//}
//
//
//#include<ctype.h>
//#include<stdio.h>
//int main()
//{
//	/*A�� B�� C�� D ������һ�����졣
//		�� 3 ��ʼ��˵�滰���� 1 ��ʼ��˵�ѡ���˭��˵�ѣ� 
//		A ˵�����ң� B ˵�� C�� C ˵�� D�� D ˵ C ��˵��
//		�����ҳ���˭��˵�ѡ���ѡ�ޣ�*/
//	char say = 0;//����˵����
//	for (say = 'a'; say < 'e'; say++)
//	{
//		if ((say != 'a') + (say == 'c') + (say == 'd') + (say != 'd') == 3)
//		{
//			printf("��%c��˵��", toupper(say));
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
//	/*���Ŵ������̣� 1500 ��ʿ��ս���Ա��������ˣ�
//		������ʿ�� 3��վһ�Ŷ��� 2 �ˣ�
//		5 ��վһ�Ŷ��� 4 �ˣ�
//		7 ��վһ�Ŷ��� 6 �ˣ�
//		����һ��˵����ʿ��������
//		��������ս��ʿ���ж�����*/
//	int person_num = 1100;
//	printf("ս��ʿ��������%d\n", cal(person_num));
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
//	//printf("������һ����Ȼ������12345678����");
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
//	//	printf("\n�������%d�����ݣ�", i);
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
