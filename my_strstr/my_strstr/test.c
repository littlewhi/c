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
//		printf("��ƭ��\n");
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
//		printf("��ƭ��\n");
//	return 0;
//}
//char* my_strstr(const char* fher, const char* son)
//{
//	assert(fher);
//	assert(son);
//	//�Ӹ��ַ�����һ���ַ���ʼ��ÿһ���ַ�������һ�ֲ���
//	char* f1 = (char*)fher;//ÿһ�ֲ���ʱ�������ʱָ������ƶ�
//	char* s1 = (char*)son;//ÿһ�ֲ��ҽ������������δ�ҵ�
//	//��ô�ڽ�����һ��ʱson�϶�Ҫ�鵽��ʼλ��,������ʱ��������s1ȥ�ƶ���son�д洢����ʼ��ַ
//	while (*son)//���ַ���Ϊ���ַ�������Ҳû������
//	{
//		while ((*s1) && (*f1) && (*f1 == *s1))
//		{
//			//s1��ʱ��ָ��\0,f1��ʱ��ָ��\0,��f1��s1��ָ����ַ�һ���Ż����
//			f1++;
//			s1++;
//		}
//
//		if (!*s1)//����ǰ���ѭ��ʱ��һ�����������*s1Ϊ\0��Ҳ����ζ��\0֮ǰ���ַ��ȽϺ�����ͬ�ģ���һֱ�ȵ���\0
//			return fher;
//		if (!*fher)//����������ǽ��е���ͷ��δ�ҵ��ִ�
//			return NULL;
//		f1 = ++(char*)fher;//��ʼ��һ�ֱȽϵ���ʼ��ַ�ĸ�ֵ
//		s1 = (char*)son;//�Ӵ�Ҳ�ûص�ͷ��ͷ��ʼ��һ�ֱȽ�
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
//		printf("û���ҵ�\n");
//	}
//	else
//	{
//		printf("%s", str);
//	}
//	return 0;
//}
