#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void print(char* str, int n)//��ӡ��һ������Ϊn���ַ���
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%c", *str + i);
//	}
//}
int main()
{
	//��GC������ߵ��Ӵ���
	//��������
	char arr1[10000] = { 0 };//�������У�
	int n = 0;//���ܳ���
	//while (scanf("%s %d", arr1, &n) != EOF)
	while(1)
	{
		scanf("%s", arr1);
		scanf("%d", &n);
		int i = 0;
		int loc;//�洢�������Ӵ�
		double rate[2] = { 0 };//�����洢������Ƚ�
		for (i = 0; i < strlen(arr1); i++)
		{
			int j = 0;
		    double count = 0.0;//��¼�Ӵ��е�cg����

			for (j = i; j < n + i; j++)
			{
				if (arr1[j] == 'C' || arr1[j] == 'G')
				{
					count++;
				}
			}
			//���������Ƚ�
			if (i > 0)
			{
				rate[1] = count / n;
				if (rate[1] > rate[0])
				{
					rate[0] = rate[1];
					loc = i;
				}
			}
			else//��¼��һ��
			{
				rate[0] = count / n;
				loc = i;
			}
		}
		int mid = loc;
		for (loc = loc; loc < n + mid; loc++)
		{
			printf("%c", arr1[loc]);
		}
	}
	return 0;
}