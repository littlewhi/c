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

//�������������(�ַ�����Ŀ������\0)
//1��scr�е��ַ���Ŀ���ڵ��� num���Ǿ�����������num�������ٲ�һ��\0
//2��scr�е��ַ���ĿС��num���Ƚ���scr�е��ַ�������ȥ��֮���ٲ�num - strlen(scr)��\0

//char* my_strncpy(char* dest, const char* scr,size_t num)
//{	
//	assert(dest);//����
//	assert(scr);
//	if (!*scr)//�ж��Ƿ�Ϊ���ַ���
//	{
//		return dest;
//	}
//	unsigned int i = 0;//��Ϊsize_tΪ�޷������Σ�ֻ�ý�iҲ��ô������
//	for (i = 0; i < num; i++)//����������ѭ��
//	{
//		if((*(dest+i) = *(scr+i)) == '\0')//1)ʱ�ͺ������ˣ�����������ֱ��ѭ�����������������else���
//		{							  //2)��iδ��������numʱscr�Ѿ�û�ַ��ˣ��Ǿ�ֻ����������ѭ���ˣ�����if���
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
//		*(dest + i + 1) = '\0';//ĩβ��һ��\0
//	}
//	return dest;
//}

//char* my_strncpy(char* dest, const char* scr, size_t num)
//{
//	assert(dest);//����
//	assert(scr);
//	if (!*scr)//�ж��Ƿ�Ϊ���ַ���
//	{
//		return dest;
//	}
//	char* ret = dest; //����dest�еĵ�ַ������Ĳ�����ı�dest ��ֵ                 
//	unsigned int i = 0;//��Ϊsize_tΪ�޷������Σ�ֻ�ý�iҲ��ô������
//	while(num--)//����������ѭ��
//	{
//		if ((*dest++ = *scr++) == '\0')//1)ʱ�ͺ������ˣ�����������ֱ��ѭ�����������������else���
//		{							  //2)��iδ��������numʱscr�Ѿ�û�ַ��ˣ��Ǿ�ֻ����������ѭ���ˣ�����if��䣬
//									  //�����ص��Ǵ�ʱ��destָ���λ�ã��Ѿ��Ǹ�scr�е�\0���Ӧ��λ��
//			break;
//		}
//	}
//	if (i < num)
//	{
//		while(num--)//������ѭ��ʱ��dest�Ѿ�������ʱ��i��Ӧ����һ��λ��
//		{
//			*dest++ = '\0';
//		}
//	}
//	else
//	{
//		*dest = '\0';//ĩβ��һ��\0
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


