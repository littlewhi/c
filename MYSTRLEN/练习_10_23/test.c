#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//��������
//int my_strlen(const char* str)//const �Ͼ�ֻ�ǲ������ѣ�Ϊ������������
//                              //������Ϊ���������ܣ�����һЩ��ҲΪ�Ժ�����һ����ϰ��
//{
//	assert(str);//����
//	int count = 0;//������
//	while (*str++)//����\0ѭ��ֹͣ
//	{
//		count++;//ÿһ����\0�ַ��������ѭ�������������1
//	}
//	return count;//���ؼ�������ֵ���ַ�������
//}
//ָ���
//int my_strlen(char* str)
//{
//	char* start = str;//������Ԫ�ص�ַ
//	char* end = str;//��¼βԪ�صĵ�ַ����Ŀǰ����βԪ�������������в����������
//	while (*end)//ѭ��ԭ��ͬ��������
//	{
//		end++;
//	}
//	return(end - start);//����ָ��֮��Ĳ������ָ���Ԫ�صĸ�����
//}
////�ݹ��
////������һ���ַ���"abc"
////�ݹ��˼����ǽ����·ֽ��С��
////�Ǿ���������"abc"���Կ�Ϊ����a + "bc"
////a�϶��������1�����Ծ���1 + "bc"
////�ٷֽ����1 + b + "c"
////ͬ��1 + 1 + "c"
////ͬ��1 + 1 + 1 + ""
////��ʱ""�ﻹ��\0, ���㳤�ȣ��Ǿ���0
////����1 + 1 + 1 + 0 = 3;
//int my_strlen(char* str)
//{
//	if (*str)//������ַ�������\0,������������
//		     //�ܽ����˵��Ŀǰ������һ���ַ����Ǿͷ��أ�1 + ʣ�µ��ַ����㣩
//		return (1 + my_strlen(str + 1));
//	else//����\0�ͽ��������Ϊ\0�����볤�ȣ����ڴ��ַ�����0��
//		return 0;
//}

//int main()
//{
//
//	char* str = "abcdef";
//	return 0;
//	sizeof
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abc";
//
//	if (strlen(arr2) - strlen(arr1) < 0)
//	{
//		printf("good!\n");
//	}
//	else
//	{
//		printf("well\n");
//	}
//	return 0;
//}