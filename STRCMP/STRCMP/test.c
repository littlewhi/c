#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char* s1 = "abcdef";
//	char* s2 = "abcdef";
//	char* s3 = "abceab";
//	if (strcmp(s1, s2) == 0)
//	{
//		printf("s1 = s2\n");
//	}
//	if (strcmp(s1, s3) < 0)
//	{
//		printf("s1 < s3");
//	}
//	return 0;
//}

//int main()
//{
//	char* s1 = "abcdef";
//	char* s2 = "z";
//	if (strcmp(s1, s2) < 0)
//	{
//		printf("s1 < s2\n");
//	}
//	else
//	{
//		printf("s1 > s2\n");
//	}
//	return 0;
//}

//#include<assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);//断言.
//	assert(str2);
//	while ((*str1 - *str2 == 0) && *str1 && *str2)
// //只有当str1与str2中对应字符相等,str1与str2都未遇到\0才可以进入循环.
////毕竟，遇到\0就标志着函数功能结束。
//	{
//		str1++;//移动位置，换下一个字符进行比较。
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* s1 = "abcdef";
//	char* s2 = "z";
//	if (my_strcmp(s1, s2) < 0)
//	{
//		printf("s1 < s2\n");
//	}
//	else
//	{
//		printf("s1 > s2\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcfed";
//	int i = strncmp(arr1, arr2, 3);
//	i = strncmp(arr1, arr2, 4);
//	i = strncmp(arr1, arr2, 10);
//	return 0;
//}

#include<assert.h>

int my_strncmp(const char* str1,const char* str2,size_t num)
{
	assert(str1);
	assert(str2);
	while ((*str1 - *str2 == 0) && *str1 && *str2)
	{
		if (--num)
		{
			str1++;//移动位置，换下一个字符进行比较。
			str2++;
		}
		else
		{
			break;
		}
	}
	return (*str1 - *str2);
	
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcfed";
	int i = my_strncmp(arr1, arr2, 3);
	i = my_strncmp(arr1, arr2, 4);
	i = my_strncmp(arr1, arr2, 10);
	return 0;
}