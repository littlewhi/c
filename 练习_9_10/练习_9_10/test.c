#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
//char* my_strcpy(char* dest, const char* orig)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(orig != NULL);
//	while (*dest++ = *orig++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "**************";
//	char arr2[] = "Hello word!";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr1[] = "**************";
//	char arr2[] = "Hello word!";
//	printf("%d\n", my_strlen(arr1));
//	printf("%d\n", my_strlen(arr2));
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 13; i++)
//	{
//		arr[i] = 0;
//	}
//	return 0;
//}
//int sys()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;
//}
//int main()
//{
//	if (sys())
//		printf("Ð¡¶Ë¡£\n");
//	else
//		printf("´ó¶Ë¡£\n");
//	return 0;
//}
//int math(int i)
//{
//	if (i <= 2)
//		return 1;
//	else
//		return i - 2 + math(i - 2);
//}
//int main()
//{
//	int month;
//	scanf("%d", &month);
//	//   if(month < 2)
//	//       printf("1\n");
//	  // else if(month == 3)
//		//   printf("2\n");
//	   //else if(month <= 6)
//		 //  printf("5")
//	printf("%d\n", math(month));
//	return 0;
//}
//int math(int i)
//{
//	if (i <= 2)
//		return 1;
//	else
//		return math(i - 1) + math(i - 2);
//}
//int main()
//{
//	int month;
//	while (scanf("%d", &month) != EOF)
//	{
//		//   if(month < 2)
//		//       printf("1\n");
//		  // else if(month == 3)
//			//   printf("2\n");
//		   //else if(month <= 6)
//			 //  printf("5")
//		printf("%d\n", math(month));
//	}
//	return 0;
//}
//#include <System.h>
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	char arr2[1000] = { 0 };
//	iota(arr1, arr2);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int p = 0;
//		char arr1[1000];
//		int i = 0;
//		for (i = 0; i < 1000; i++)
//		{
//			arr1[i] = n % 10;
//			p = n / 10;
//			if (p == 0)
//				arr1[++i] = n;
//			break;
//		}
//		printf("%s\n", arr1);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		char arr1[1000];
//		sprintf(arr1,"%d",n);
//		int l = 0;
//		int r = 0;
//		for (r = 0;; r++)
//		{
//			n = n / 10;
//			if (0 == n)
//				break;
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