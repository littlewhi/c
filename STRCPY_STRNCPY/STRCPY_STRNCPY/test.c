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
//	//��scr����ʱ��Ϊconst��������Ҳ��Ϊ�˱��գ�
//	//��ֹ��һ�޸���Դͷ�е��ַ������Ͼ�����ֻ��Ҫ�����ַ�����
//	assert(dest);//����,��ֹ���������ǿ�ָ�롣
//	assert(scr);
//	if (!*scr)//��Դͷ��Ϊ���ַ���ʱ���ؿ�ָ�롣
//	{		//�Ͼ�Ҳû�п��������壬ֱ�Ӹ�ֵ�͵����¡�
//		return NULL;
//	}
//	char* ret = dest;//��¼��Ŀ�ĵ���Ԫ�ص�ַ��
//	//��Ϊ�ڿ����Ĺ����л����dest����ָ��ĵ�ַ��λ�á�
//	while (*dest++ = *scr++)//һ����ֵ���ʽ�����յĽ�����������Ǹ�ֵ��
//	                      //���������ľ�ǡ����\0��ֹͣ�����һ���\0Ҳ������ȥ�ˡ�
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