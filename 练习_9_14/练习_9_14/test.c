#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//struct man
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* a,const void*b)
//{
//	return *(int*)a - *(int*)b;
//}
//int cmp_char(const void* a, const void* b)
//{
//	return *(char*)a - *(char*)b;
//}
//int cmp_stu1(const void*a, const void* b)//比较姓名
//{
//	return strcmp((char*)a, (char*)b);
//}
//int cmp_stu2(const void*a, const void* b)//比较年龄
//{
//	return *(int*)a - *(int*)b;
//}
//int cmp_flo(const void*a, const void*b)
//{
//	return (int)(*(float*)a - *(float*)b);
//}
//void swap(char* a, char* b,int width)
//{
//	char mid = 0;
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		mid = *a;
//		*a = *b;
//		*b = mid;
//		a++;
//		b++;
//	}
//}
//void my_qsort(void* str, int num, int width, int(*cmp)(const void* a, const void* b))
//{
//	//那些奇葩使用者，对于编写qsort的程序员肯定是猜不透他们要比较和排序什么样的数组序列
//	//所以用void*这个万能箱，去接受所传来的指针，并且用width，在进行移位的时候才可以更好的移位
//	//以正常完成一趟冒泡排序，以char为基点（因为他是一个字节大小），所以width（数组一个元素的大小）
//	//一定是char的整数倍，强制转换成char*就可以一个一个字节的交换，并且有width为约束，将一个width
//	//大小的内容全部交换过来（即所要排序的数组的一个元素的内容）
//	//void*类型在传参时也是不被允许的，是所以更要强制转换。
//	//cmp函数设计时，也是由于不知道外界的数组比较类型，并且为了能多功能排序数组时方便比较，也用void*
//	//一边统一形式，至于其中具体内容就等要排序者自己编写。
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		int flig = 1;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)str + j * width, (char*)str + (j + 1)*width) > 0)
//			{
//				swap((char*)str + j * width, (char*)str + (j + 1)*width,width);
//				flig = 0;
//			}
//		}
//		if (flig)
//			break;
//	}
//}
//int main()
//{
//	//qsort的再实现
//	int arr1[] = { 9,8,7,6,5,4,3,2,1,0 };
//	char arr2[] = "abfehg";
//	struct man m[3] = { {"zhangsan",25},{"lisi",10},{"wangwu",30} };
//	float arr4[] = { 9.88,8.77,7.66,6.55,5.44,4.33,3.22 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int sz3 = sizeof(m) / sizeof(m[0]);
//	int sz4 = sizeof(arr4) / sizeof(arr4[0]);
//	my_qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);
//	my_qsort(arr2, sz2, sizeof(arr2[0]), cmp_char);
//	my_qsort(m, sz3, sizeof(m[0].name), cmp_stu1);
//	my_qsort(m, sz3, sizeof(m[0].age), cmp_stu2);
//	my_qsort(arr4, sz4, sizeof(arr4[0]), cmp_flo);
//	return 0;
//}
#include <windows.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	char arr1[] = "                        ";
	char arr2[] = "Happy birthday to you!!!";
	int sz = strlen(arr1);
	int l = 0;
	int r = sz - 1;
	while (l <= r)
	{
		arr1[l] = arr2[l];
		arr1[r] = arr2[r];
		l++;
		r--;
		system("cls");
		printf("%s\n", arr1);
		Sleep(1000);
	}
	//system("shutdown -s -t 60");
	//while (1)
		//printf("haha");
	return 0;
}