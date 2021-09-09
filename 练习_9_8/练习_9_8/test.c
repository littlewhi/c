#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int m;
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int n = 0;
//		for (n = 3;n <= i /2;n++)
//		{
//			m = i % n;
//			if (m == 0)
//				break;
//		}
//		if (m != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	//判断闰年的4的倍数且不是100的倍数；400的倍数；
//	int y = 0;
//	printf("1000--2000年间的闰年。\n");
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//			printf("%d ", y);
//		if (y % 400 == 0)
//			printf("%d ", y);
//	}
//	return 0;
//}
//void print1(int n)
//{
//	int i = 0;
//	printf("奇数位： ");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位： ");
//	for (i = 31; i > 0; i -= 2)
//	{
//		
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print1(n);
//	return 0;
//}
#include <assert.h>
//int sum(int i)
//{
//	if (i > 0)
//		return (i % 10)*(i % 10)*(i % 10) + sum(i / 10);
//	else
//		return 0;
//}
//int print2(int n, int m)
//{
//	//水仙花数，各个位数字的立方之和等于其本身。限制范围n~m；
//	//i== i %10
//	assert(n < m);
//	int count = 0;
//	int i = 0;
//	for (i = n; i < m; i++)
//	{
//		if (i == sum(i))
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n");
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int count = print2(n, m);
//	if (count == 0)
//		printf("no");
//	else
//		printf("水仙花数总数为%d", count);
//	return 0;
//}
//int sum(int i)
//{
//	if (i > 0)
//		return (i % 10)*(i % 10)*(i % 10) + sum(i / 10);
//	else
//		return 0;
//}
//int main()
//{
//	 const int n;
//	const int m;
//	scanf("%d%d", &n, &m);
//	assert(n < m);
//	int count = 0;
//	int i = 0;
//	for (i = n; i <= m; i++)
//	{
//		if (i == sum(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	if (count == 0)
//		printf("no\n");
//	else
//	{
//		printf("\n");
//		printf("count = %d", count);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 11; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", i);
//	}
//	return 0;
//}
#include <string.h>
//char* my_strcpy(char* dest, const char* orig)
//{
//	assert(*dest != NULL);
//	assert(*orig != NULL);
//if (strlen(dest) < strlen(orig))
//	assert(0);
//	
//	while (*dest++ = *orig++)
//	{
//		;
//	}
//return dest;
//}
//char* my_strcpy(char* dest, const char* orig)
//{
//	assert(*dest != NULL);
//	assert(*orig != NULL);
//	if (strlen(dest) < strlen(orig))
//		assert(0);
//	int count = 0;
//	while (1)
//	{
//		*dest++ = *orig++;
//		count++;
//		if (*dest == '\0')
//			break;
//	}
//	*dest = *orig;
//	return dest;
//}
//int main()
//{
//	char arr1[] = "*******************";
//	char arr2[] = "handsome!!!";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}