#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "tttttttttttttt";
//	char arr3[20];
//	printf("%s\n%s", strcpy(arr2, arr1), strcpy(arr3, &arr1[2]));
//	return 0;
//
//}

#include<stdio.h>
#include<assert.h>

//char* my_strcpy(char* dest, const char* scr)
//{
//	//将scr接收时改为const常变量，也是为了保险，
//	//防止万一修改了源头中的字符串，毕竟我们只是要拷贝字符串。
//	assert(dest);//断言,防止传过来的是空指针。
//	assert(scr);
//	if (!*scr)//当源头中为空字符串时返回空指针。
//	{		//毕竟也没有拷贝的意义，直接赋值就得了呗。
//		return NULL;
//	}
//	char* ret = dest;//记录下目的地首元素地址，
//	//因为在拷贝的过程中会更改dest的所指向的地址的位置。
//	while (*dest++ = *scr++)//一个赋值表达式的最终的结果就所赋的那个值，
//	                      //这个很巧妙的就恰好在\0出停止，并且还将\0也拷贝过去了。
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "iloveyou";
//	char arr2[20] = { 0 };
//	char* pstr = my_strcpy(arr2, arr1);
//	printf("%s\n%s", pstr,strcpy(arr2,arr1));
//	return 0;
//}
//int main()
//{
//	char arr1[] = "i";
//	char arr2[] = "abc";
//	printf("%s\n", strncpy(arr2, arr1, 5));
//	return 0;
//}
char* my_strncpy(char* dest, const char* scr,size_t num)
{
	
	assert(dest);
	assert(scr);
	if (!*scr)
	{
		return NULL;
	}
	char* ret = dest;                   
	int i = 0;
	for (i = 0; i < num; i++)
	{
		*dest = *scr;
		dest++;
		scr++;
	}
	*dest = '\0';
	return ret;
}

int main()
{
	char arr1[] = "iloveyou";
	char arr2[20] = { 0 };
	char* pstr = my_strncpy(arr2, arr1,5);
	printf("%s\n%s", pstr,strncpy(arr2, arr1, 5));
	return 0;
}