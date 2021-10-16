#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strcat(char* dest, const char* orig)
//{
//	assert(dest);
//	assert(orig);
//	if (!*orig)
//		return NULL;
//	char* mid = dest;
//    while (*dest)
//		dest++;
//	while (*dest++ = *orig++)
//		;
//	return mid;
//}
//int main()
//{
//	char arr1[10] = "\0";
//	char arr2[] = "DEFFFFF";
//	//char* str = strcat(arr1, arr2);
//	char* str = my_strcat(arr1, arr2);
//	printf("%s\n", str);
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
//			f1++;
//			s1++;
//		}
//
//		if (!*s1)
//			return fher;
//		if (!*f1)
//			return NULL;
//		f1 = ++(char*)fher;
//		s1 = (char*)son;
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

//struct man
//{
//	char name[20];
//	int ID[20];
//};
//
//void* my_memcpy(void* dest, const void* orig, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*((char*)dest)++ = *((char*)orig)++;
//	}
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int carr[10] = { 0 };
//	//int* pm = memcpy(carr, arr, sizeof(arr));
//	struct man men[] = { {"张三",1314457},{"李四",1215446},{"王五",1415559} };
//	struct man cmen[4];
//	//memcpy(cmen, men,sizeof(men));
//	my_memcpy(carr, arr, sizeof(arr));
//	my_memcpy(cmen, men,sizeof(men));
	//for (i = 0; i < 10; i++) 
	//{
	//	printf("%d ",carr[i]);
	//}
//	
//	return 0;
//}

//void* my_memmove(void* str1, void* str2, size_t num)
//{
//	void* ret = str1;
//	if (str1 > str2)//目的地起始地址大于源头起始地址，从后往前拷贝
//	{
//		(char*)str1 = (char*)str1 + num - 1;
//		(char*)str2 = (char*)str2 + num - 1;
//		while (num--)
//		{
//			*((char*)str1)-- = *((char*)str2)--;
//		}
//	}
//	else//目的地起始地址小于源头起始地址，从前往后拷贝
//	{
//		while (num--)
//		{
//			*((char*)str1)++ = *((char*)str2)++;
//		}
//	}
//	return ret;
//}
//
//void print(int* p)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memmove(arr+2, arr, 5*sizeof(int));
//	my_memmove(arr1 + 2, arr1,5*sizeof(int));
//	print(arr1);
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr2, arr2 + 2, 5 * sizeof(int));
//	print(arr2);
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr3, arr3 + 5, 2 * sizeof(int));
//	print(arr3);
//	return 0;
//}

//int main()
//{
//	char arr[] = "123.654.999.&88*9999";
//	char arrb[] = "*.&";
//	char* mid = NULL;
//	for (mid = strtok(arr, arrb); mid != NULL; mid = strtok(NULL, arrb))
//	{
//		printf("%s ", mid);
//	}
//}

//#include<errno.h>
//int main()
//{
//	
//	FILE* fp = fopen("p.txt", "r");
//	if (fp)
//	{
//		printf("打开了\n");
//	}
//	else
//	{
//		char* str = strerror(errno);
//		printf("%s\n", str);
//	}
//	return 0;
//}

