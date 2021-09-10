#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void print(char* str, int* siz)
//{
//	printf("%d\n", strlen(str));
//	//printf("%d\n", sizeof(str));
//	//printf("%d\n", sizeof(siz));
//}
//int main()
//{
//	char arr1[] = "123456";
//	int arr2[] = { 1,2,3,4,5,6 };
//	/*printf("%d\n", strlen(arr1));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));*/
//	print(arr1 + 1, arr2);
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	int * p = &i;
//	printf("%d", strlen(p));
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* b = &a;
//	while (a)
//	{
//		*b++ = 0;
//	}
//}
//int main()
//{
//	int a = 0x11223344;
//	int* b = &a;
//	while (a)
//	{
//		*b++ = 0;
//	}
//}
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(*str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "123456789";
//	int i = my_strlen(arr);
//	return 0;
//}
//void store(char i,char sto[1000])
//{
//	int j = 0;
//	for (j = 0; j < 1000; j++)
//	{
//		if (sto[j] == '\0')
//		{
//			sto[j] = i;
//			break;
//		}
//	}
//}
//int fl(char i, char sto[1000])
//{
//	int j = 0;
//	for (j = 0; sto[j] != '\0'; j++)
//	{
//		if (sto[j] == i)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	char arr[1000];
//	char sto[1000] = {'\0'};
//	while (scanf("%s", arr) != EOF)
//	{
//		int str = strlen(arr);
//		int i = 0;
//		for (i = 0; i < str; i++)
//		{
//			if (fl(arr[i], sto))//如果之前出现过就返回0；没出现过就返回1；
//			{
//				int count = 1;
//				int j = 0;
//				for (j = 1; j < str - 1; j++)
//				{
//					if (arr[i] == arr[j] && i != j)
//					{
//						count = 0;
//						break;
//					}
//				}
//				if (count)
//					printf("%d\n", i);
//				else
//				{
//					store(arr[i], sto);
//				}
//			}
//		printf("END IT?(EOF)\n")
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		;
//	}
//	return 0;
//}
////int fun(char arr[1000])
////{
////	int i = 0;
//	int count = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char arr[1000];
//	
//	while (scanf("%s", &arr) != EOF)
//	{
//		int i = fun(arr);
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int fun(char arr[1000], int s)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < s; i++)
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char arr[1000];
//
//	while (scanf("%s", arr) != EOF)
//	{
//		int siz = sizeof(arr);
//		int i = fun(arr, siz - 1);
//		printf("%d\n", i);
//	}
//	return 0;
//}
//char* slove(char* str) {
//int r = strlen(str) - 1;
//int l = 0;
//while (l < r)
//{
//	int mid = *(str + l);
//	*(str + l) = *(str + r);
//	*(str + r) = mid;
//	r--;
//	l++;
//}
//return str;
//}
//int main()
//{
//	char arr[1000];
//	scanf("%s", arr);
//	char* p = slove(arr);
//	while (*p)
//	{
//	printf("%c", *p++);
//	}
//	return 0;
//}