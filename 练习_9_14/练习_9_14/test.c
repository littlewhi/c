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
//int cmp_stu1(const void*a, const void* b)//�Ƚ�����
//{
//	return strcmp((char*)a, (char*)b);
//}
//int cmp_stu2(const void*a, const void* b)//�Ƚ�����
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
//	//��Щ����ʹ���ߣ����ڱ�дqsort�ĳ���Ա�϶��ǲ²�͸����Ҫ�ȽϺ�����ʲô������������
//	//������void*��������䣬ȥ������������ָ�룬������width���ڽ�����λ��ʱ��ſ��Ը��õ���λ
//	//���������һ��ð��������charΪ���㣨��Ϊ����һ���ֽڴ�С��������width������һ��Ԫ�صĴ�С��
//	//һ����char����������ǿ��ת����char*�Ϳ���һ��һ���ֽڵĽ�����������widthΪԼ������һ��width
//	//��С������ȫ����������������Ҫ����������һ��Ԫ�ص����ݣ�
//	//void*�����ڴ���ʱҲ�ǲ�������ģ������Ը�Ҫǿ��ת����
//	//cmp�������ʱ��Ҳ�����ڲ�֪����������Ƚ����ͣ�����Ϊ���ܶ๦����������ʱ����Ƚϣ�Ҳ��void*
//	//һ��ͳһ��ʽ���������о������ݾ͵�Ҫ�������Լ���д��
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
//	//qsort����ʵ��
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