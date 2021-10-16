#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char father[] = "abcdef";
//	char son[] = "cdf";
//	char* mid = strstr(father, son);
//	if (mid == NULL)
//		printf("%s\n", mid);
//	else
//		printf("你骗人\n");
//	return 0;
//}
//int main()
//{
//	char father[] = "abcdef";
//	char son[] = "cde";
//	char* mid = strstr(father, son);
//	if (mid == father + 2)
//		printf("%s\n", mid);
//	else
//		printf("你骗人\n");
//	return 0;
//}
//char* my_strstr(const char* fher, const char* son)
//{
//	assert(fher);
//	assert(son);
//	//从父字符串第一个字符开始，每一个字符串进行一轮查找
//	char* f1 = (char*)fher;//每一轮查找时用这个临时指针进行移动
//	char* s1 = (char*)son;//每一轮查找结束后，如果这轮未找到
//	//那么在进行下一轮时son肯定要归到起始位置,所以临时拷贝，让s1去移动，son中存储着起始地址
//	while (*son)//子字符串为空字符串查找也没意义了
//	{
//		while ((*s1) && (*f1) && (*f1 == *s1))
//		{
//			//s1此时不指向\0,f1此时不指向\0,且f1与s1所指向的字符一样才会进来
//			f1++;
//			s1++;
//		}
//
//		if (!*s1)//脱离前面的循环时的一种情况，就是*s1为\0，也就意味着\0之前的字符比较后是相同的，的一直比到了\0
//			return fher;
//		if (!*fher)//这种情况就是进行到了头仍未找到字串
//			return NULL;
//		f1 = ++(char*)fher;//开始下一轮比较的起始地址的赋值
//		s1 = (char*)son;//子串也得回到头重头开始新一轮比较
//	}
//	return fher;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdefge";
//	char arr2[] = "bbc";
//	//char* str = strstr(arr1, arr2);
//	char* str = my_strstr(arr1, arr2);
//	if (!str)
//	{
//		printf("没有找到\n");
//	}
//	else
//	{
//		printf("%s", str);
//	}
//	return 0;
//}
