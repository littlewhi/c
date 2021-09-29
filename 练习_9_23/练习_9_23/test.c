#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void print(char* str, int n)//打印出一个长度为n的字符串
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%c", *str + i);
//	}
//}
int main()
{
	//找GC比例最高的子串；
	//给定长度
	char arr1[10000] = { 0 };//接受序列；
	int n = 0;//接受长度
	//while (scanf("%s %d", arr1, &n) != EOF)
	while(1)
	{
		scanf("%s", arr1);
		scanf("%d", &n);
		int i = 0;
		int loc;//存储并更新子串
		double rate[2] = { 0 };//用来存储比例与比较
		for (i = 0; i < strlen(arr1); i++)
		{
			int j = 0;
		    double count = 0.0;//记录子串中的cg个数

			for (j = i; j < n + i; j++)
			{
				if (arr1[j] == 'C' || arr1[j] == 'G')
				{
					count++;
				}
			}
			//计算比例与比较
			if (i > 0)
			{
				rate[1] = count / n;
				if (rate[1] > rate[0])
				{
					rate[0] = rate[1];
					loc = i;
				}
			}
			else//记录第一个
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