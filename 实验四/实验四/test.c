#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include <math.h>
//
//int main()
//{
//	/*编写程序寻找既是完全平方数，
//		又有两位数字相同的三位正整数，
//		例如121、144等。要求统计满足该条件的整数个数，
//		并从大到小打印这些整数。*/
//	int n = 100;
//	int count = 0;
//	int fl = 0;
//	for (n = 100; n < 1000; n++)
//	{
//		fl = sqrt(n);
//		if (fl*fl == n &&            //IsSquare
//			(n % 10 == n / 10 % 10 || 
//				n % 10 == n / 100 % 10 || 
//				n / 10 % 10 == n / 100 % 10))
//		{
//			count++;
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>

////int main()
//{
//	/*编写程序输入一个字符串，
//		检查是否是回文
//		（回文是指正反序文字相同，如，LeveL），
//		若是则输出“Yes”，
//		否则输出“No”。*/
//	char arr[1000];
//	scanf("%s", arr);
//	int flag = 0;
//	int len = strlen(arr);
//	int l = 0;//左坐标
//	int r = len - 1;//右坐标
//	for(l = 0;l<r;l++,r--)
//	{
//		flag = 0;
//		if (arr[l] == arr[r])
//		{
//			flag = 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (flag)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	/*编写程序输入10个整数，
//		查找并打印不相同的数字个数。
//		输入示范：20 50 30 10 60 90 70 30 10 20
//		输出示范：7
//*/
//	int arr[10] = { 0 };
//	int i = 0;	
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	i = 0;
//	int count = 0;
//	for (i = 0;i<10;i++)
//	{
//		if (arr[i] != 0)
//		{
//			int j;
//			for (j = i + 1; j < 10; j++)
//			{
//				if (arr[i] == arr[j])
//				{
//					arr[i] = 0;
//					arr[j] = 0;
//					break;
//				}
//			}
//			if (10 == j)
//			{
//				count++;
//			}
//		}
//		
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	/*int arr[10] = { 1,1 };
//	return 0;*/
//	int i, s, n, a[30] = { 27, 56,123, 128, 154, 168, 178, 205, 362, 618 };
//	printf("input a number:\n");
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//		/***ERROR***/
//		if (n < a[i])
//		{
//			for (s = 9; s >= i; s--)
//				a[s + 1] = a[s];
//			break;
//		}
//	a[i] = n;
//	for (i = 0; i <= 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//
//}

//int main()
//{
//	float Num[10] = {1.7,1.1,2.4,3.5,6.9,9.6,3.5,3.1,9.1,10.0}, tmp;
//	short i, j;
//
//	printf("Input 10 n ormal numbers: ");
//	/******ERROR******/
//	//scanf("%f", &Num);
//
//	for (i = 0; i < 10 - 1; i++)
//	{
//		for (j = 0; j < 10 - i - 1; j++)
//			if (Num[j] > Num[j + 1])
//				tmp = Num[j], Num[j] = Num[j + 1], Num[j + 1] = tmp;
//	}
//
//	printf("Sorted numbers:");
//	/******ERROR******/
//	for(i = 0;i<10;i++)
//	printf("%f  ", Num[i]);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%f", num + i);//num[i]
//	}
//	return 0;
//}