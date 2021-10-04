#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void lef_move1(char arr[],int n)
{
	int len = strlen(arr);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int mid = arr[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = mid;
	}
}
//void restr(char* str, int len)
//{
//	int l = 0;
//	int r = len - 1;
//	while (l < r)
//	{
//		char mid = *(str + l);
//		*(str + l) = *(str + r);
//		*(str + r) = mid;
//		l++;
//		r--;
//	}
//}
//void lef_move2(char* arr, int n)
//{
//	//n = 2
//	//abcdef
//	//1  ab ->ba 
//	//2  cdef ->fedc
//	//bafedc
//	//3 bafedc ->cdefab
//	int len = strlen(arr);
//	//1
//	restr(arr, n);//传首元素地址与所需要逆序字符串的长度
//	//2
//	restr(arr + n, len - n);
//	//3
//	restr(arr, len);
//}
//int main()
//{
//	char arr[255] = "abcdef";
//	int n = 0;
//	//gets(arr);
//	scanf("%d", &n);
//	//lef_move1(arr,n);
//	lef_move2(arr, n);
//	printf("%s\n", arr);
//	return 0;
//}
#include <stdlib.h>
//void fun1(char* s1, char* s2)
//{
//	int len = strlen(s2);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		*(s1 + i) = *(s2 + i);
//	}
//	for (i = len; i <=2 * len; i++)
//	{
//		*(s1 + i) = *(s2 + i - len);
//	}
//}
//int my_strcmp(char* s1, char* s2, int len)
//{
//	int i = 0;
//	while (i < len)
//	{
//		if (*(s1 + i) == *(s2 + i))
//			i++;
//		else
//			return 0;
//	}
//	return 1;
//}
//int judge1(char orig[], char son_[])
//{
//	//将原字符串变倍，就可以产生各种子字符串以进行对照比较
//	//abcdef -> abcdefabcdef
//	int len = strlen(orig);
//	int len_ = strlen(son_);
//	if (len != len_)
//		return 0;
//	char * str = malloc(2 * len + 1);
//	//printf("%s", str);
//	fun1(str, orig);
//	int i = 0;
//	for (i = 0; i < len;i++)
//	{
//		//if(!strcmp(str + i,son_))
//		if (my_strcmp(str + i, son_,len))
//			return 1;
//	}
//	free(str);
//	str = NULL;
//	return 0;
//}
//int judge2(char orig[], char son_[])//穷列举的方法
//{
//	int len = strlen(orig);
//	int len_ = strlen(son_);
//	if (len != len_)
//		return 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		lef_move1(orig, 1);
//		if (!strcmp(orig, son_))
//			return 1;
//	}
//	return 0;
//
//}
//int main()
//{
//	//判断一个字符串是否是一个字符串旋转后的子字符串
//	char arr1[] = "abcdef";
//	char arr2[] = "bcdefa";
//	judge2(arr1, arr2);
//	//if (judge1(arr1, arr2))
//		//printf("Yes\n");
//	if (judge2(arr1, arr2))
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}