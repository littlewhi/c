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

//拷贝分两种情况(字符的数目不算上\0)
//1）scr中的字符数目大于等于 num，那就正常按个数num拷贝，再补一个\0
//2）scr中的字符数目小于num，先将将scr中的字符都拷过去，之后再补num - strlen(scr)个\0

//char* my_strncpy(char* dest, const char* scr,size_t num)
//{	
//	assert(dest);//断言
//	assert(scr);
//	if (!*scr)//判断是否为空字符串
//	{
//		return dest;
//	}
//	unsigned int i = 0;//因为size_t为无符号整形，只好将i也这么定义了
//	for (i = 0; i < num; i++)//拷贝的主体循环
//	{
//		if((*(dest+i) = *(scr+i)) == '\0')//1)时就很正常了，慢慢拷贝，直至循环结束，进入下面的else语句
//		{							  //2)当i未能自增到num时scr已经没字符了，那就只好跳出拷贝循环了，进入if语句
//			break;
//		}		
//	}
//	if (i < num)
//	{
//		for (i = i + 1; i < num; i++)
//		{
//			*(dest + i) = '\0';
//		}
//	}
//	else
//	{
//		*(dest + i + 1) = '\0';//末尾补一个\0
//	}
//	return dest;
//}

//char* my_strncpy(char* dest, const char* scr, size_t num)
//{
//	assert(dest);//断言
//	assert(scr);
//	if (!*scr)//判断是否为空字符串
//	{
//		return dest;
//	}
//	char* ret = dest; //拷贝dest中的地址，下面的操作会改变dest 的值                 
//	unsigned int i = 0;//因为size_t为无符号整形，只好将i也这么定义了
//	while(num--)//拷贝的主体循环
//	{
//		if ((*dest++ = *scr++) == '\0')//1)时就很正常了，慢慢拷贝，直至循环结束，进入下面的else语句
//		{							  //2)当i未能自增到num时scr已经没字符了，那就只好跳出拷贝循环了，进入if语句，
//									  //但是重点是此时的dest指向的位置，已经是跟scr中的\0相对应的位置
//			break;
//		}
//	}
//	if (i < num)
//	{
//		while(num--)//在跳出循环时，dest已经来到当时的i对应的下一个位置
//		{
//			*dest++ = '\0';
//		}
//	}
//	else
//	{
//		*dest = '\0';//末尾补一个\0
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[] = "il";
//	char arr2[20] = "abcdergjfgm";
//		char arr3[20] = "abcdergjfgm";
//	char* pstr = my_strncpy(arr2, arr1,5);
//	printf("%s\n%s", pstr,strncpy(arr3, arr1, 5));
//	return 0;
//}


//#include<ctype.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "afggDFF";
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		if (0 == i)
//		{
//			if (islower(arr[i]))
//				arr[i] = toupper(arr[i]);
//		}
//		else
//		{
//			if (isupper(arr[i]))
//				arr[i] = tolower(arr[i]);
//		}
//
//	}
//	printf("%s", arr);
//	return 0;
//}


