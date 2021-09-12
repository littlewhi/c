#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 123;
//	int i = 0;
//	for (i = 0; n = n / 10; i++)
//	{
//		;
//	}
//	printf("hehe\n");
//	printf("%d\n", i);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		char arr1[1000];
//		sprintf(arr1, "%d", n);
//		int l = 0;
//		int r = 0;
//		for (r = 0;n = n / 10; r++)
//		{
//			;
//			//if (0 == n)
//				//break;
//		}
//		//r = strlen(arr1) - 1;
//		while (l < r)
//		{
//			char mid = arr1[l];
//			arr1[l] = arr1[r];
//			arr1[r] = mid;
//			l++;
//			r--;
//		}
//		printf("%s", arr1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = {'0'};
//	int i = strlen(arr);
//	printf("%d", i);
//	return 0;
//}
//void fun1(char a2[1000], char j)
//{
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		if (a2[i] == '\0')
//		{
//			a2[i] = j;
//			break;
//		}
//	}
//}
//int fun2(char a2[1000], char j)
//{
//	int i = 0;
//	for (i = 0; a2[i] != '\0'; i++)
//	{
//		if (a2[i] == j)
//			return 0;
//		else
//			return 1//极大的逻辑错误，这样只会判断一个值之后就会返回。
//		
//	}
//	return 1;
//}
//int main()
//{
//	char arr1[1000] = { 0 };
//	while (scanf("%s", arr1) != EOF)
//	{
//		
//		char arr2[1000] = {'\0'};
//		int i = 0;
//		int count = 0;
//		for (i = 0; arr1[i] != '\0'; i++)
//		{
//			if (fun2(arr2, arr1[i]))//判断以前是否出现过,出现过返回零，没出现过返回1；
//			{
//				if (arr1[i] >= 0 && arr1[i] <= 127)
//				{
//					count++;
//					fun1(arr2, arr1[i]);//将这个字符存起来，以待判断；
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
//void fun1(char a2[1000], char j)
//{
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		if (a2[i] == '\0')
//		{
//			a2[i] = j;
//			break;
//		}
//	}
//}
//int fun2(char a2[1000], char j)
//{
//	int i = 0;
//	for (i = 0; a2[i] != '\0'; i++)
//	{
//		if (a2[i] == j)
//			return 0;
//
//	}
//	return 1;
//}
//int main()
//{
//	char arr1[1000] = { 0 };
//	while (scanf("%s", arr1) != EOF)
//	{
//
//		char arr2[1000] = { '\0' };
//		int i = 0;
//		int count = 0;
//		for (i = 0; arr1[i] != '\0'; i++)
//		{
//			if (fun2(arr2, arr1[i]))//判断以前是否出现过,出现过返回零，没出现过返回1；
//			{
//				if (arr1[i] >= 0 && arr1[i] <= 127)
//				{
//					count++;
//					fun1(arr2, arr1[i]);//将这个字符存起来，以待判断；
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//        int n = 2 * i - 1;//每行的列数；
//		int arr1[10] = { 0 };
//		int arr2[10] = { 0 };
//		int j = 5;
//		arr1[j] = 1;
//		int x = 0;
//		for(x = 2;x <= i;x++)
//		{
//			if(x %2 == 0)//初始化第偶数行
//			{
//				for (j = 5; j >= (5 - (2 * x - 1) / 2); j--)//初始化左边
//				{
//					arr2[j] = arr1[j - 1] + arr1[j] + arr1[j + 1];
//				}
//				for (j = 5; j <= 5 + (2 * x - 1) / 2; j++)//初始化右边
//				{
//					arr2[j] = arr1[j - 1] + arr1[j] + arr1[j + 1];
//				}
//			}
//			if (x % 2 != 0)//初始化第奇数行
//			{
//				for (j = 500; j >= j - (2 * x - 1) / 2; j--)
//				{
//					arr1[j] = arr2[j - 1] + arr2[j] + arr2[j + 1];
//				}
//				for (j = 500; j <= j + (2 * x - 1) / 2; j++)
//				{
//					arr1[j] = arr2[j - 1] + arr2[j] + arr2[j + 1];
//				}
//			}
//		}
//		int f = 1;
//		int count = 0;
//		x = 4;
//		for (; x <= (5 + (2 * i - 1) / 2); x++)
//		{
//			if (i % 2 == 0)
//			{
//				if (arr2[x] % 2 == 0)
//				{
//					int k = 0;
//					while (1)
//					{
//						if (arr2[k] == 0)
//							k++;
//						//else if (arr2[k] % 2 != 0)
//							//k++;
//						else
//							break;
//					}
//					printf("%d\n",(x + 1 - k));
//					f = 0;
//					break;
//				}	
//
//			}
//			if (i % 2 != 0)
//			{
//				if (arr1[x] % 2 == 0)
//				{
//					printf("%d\n", x + 1);
//					f = 0;
//					break;
//				}
//			}
//		}
//		if (f)
//			printf("0");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		if (i == 1 || i == 2)
//			printf("-1\n");
//		else if ((i - 2) % 4 == 0)
//			printf("4\n");
//		else if ((i - 2) % 4 == 1)
//			printf("2\n");
//		else if ((i - 2) % 4 == 2)
//			printf("3\n");
//		else
//			printf("2\n");
//	}
//	return 0;
//}