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
//	assert(dest);//����
//	assert(scr);
//	if (!*scr)//��scr���жϣ������Ϊ���ַ����Ǿ�û��׷�ӵı�Ҫ��
//	{
//		return dest;
//	}
//	char* ret = dest;//�ܹ����������˵˵����׷�ӵı�Ҫ��
//	                 //�Ƚ�dest�ĵ�ַ����һ�ݣ��������Ĳ����϶������dest�ġ�
//		while (*(++dest))//���ҵ�dest���ַ�����\0��λ�á�
//			;
//		while (*dest++ = *scr++)//��\0����ʼ׷�ӡ�
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
	assert(dest);//����
	assert(scr);
	if (!*scr)//��scr���жϣ������Ϊ���ַ����Ǿ�û��׷�ӵı�Ҫ��
	{
		return dest;
	}
	char* ret = dest;//�ܹ����������˵˵����׷�ӵı�Ҫ��
	                 //�Ƚ�dest�ĵ�ַ����һ�ݣ��������Ĳ����϶������dest�ġ�
		while (*(++dest))//���ҵ�dest���ַ�����\0��λ�á�
			;
		while (num--)//��\0����ʼ׷��,׷��num�Σ�ֱ��num��Ϊ0��
			if (!(*dest++ = *scr++))//���ǵ�src�Ѿ���\0ʱҲ�Ͳ�����׷���ˡ�
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