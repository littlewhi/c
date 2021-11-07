#define _CRT_SECURE_NO_WARNINGS

#include<string.h>
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "cba";
//	char* str = strcat(arr1, arr2);
//	printf("%s\n%s", arr1, str);
//	return 0;
//}

#include<assert.h>
#include<stdio.h>

//char* my_strcat(char* dest,const char* scr)
//{
//	assert(dest);//断言
//	assert(scr);
//	if (!*scr)//对scr的判断，如果其为空字符串那就没有追加的必要了
//	{
//		return dest;
//	}
//	char* ret = dest;//能够来到这里就说说明有追加的必要，
//	                 //先将dest的地址拷贝一份，接下来的操作肯定会更改dest的。
//		while (*(++dest))//先找到dest的字符串的\0的位置。
//			;
//		while (*dest++ = *scr++)//从\0处开始追加。
//			;
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "";
//	char* str = my_strcat(arr1, arr2);
//	printf("%s\n", str);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abc\0fffffffffffff";
//	char arr2[] = "g";
//	strncat(arr1, arr2, 3);
//	strncpy(arr1, arr2, 3);
//	//char arr3[] = { 'a','b','c','d' };
//	//printf("%s\n", strncat(arr1, arr2, 3));
//	//printf("%s", strncat(arr1, arr3, 3));
//	return 0;
//}

char* my_strncat(char* dest, char* scr, size_t num)
{
	assert(dest);//断言
	assert(scr);
	if (!*scr)//对scr的判断，如果其为空字符串那就没有追加的必要了
	{
		return dest;
	}
	char* ret = dest;//能够来到这里就说说明有追加的必要，
	                 //先将dest的地址拷贝一份，接下来的操作肯定会更改dest的。
		while (*(++dest))//先找到dest的字符串的\0的位置。
			;
		while (num--)//从\0处开始追加,追加num次，直至num变为0。
			if (!(*dest++ = *scr++))//但是当src已经达\0时也就不用再追加了。
				return ret;
	return ret;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "love";
	printf("%s", my_strncat(arr1, arr2, 2));
	return 0; 
}