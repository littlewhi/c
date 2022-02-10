#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int get_nextaval(int next[], char* t)
{
	int i = -1, j = 0;//i ���ƹ�ǰ׺,j �ƹܺ�׺;
	next[0] = -1;
	if (!*t)
		return 0;
	while (j+1 < strlen(t))//�����ѭ��ֻ��Ҫ�Ƶ�ǰ��ľ���.
	{
		if (i == -1 || t[i] == t[j])
		{
			++i, ++j;//��ʱ��i�����Ż�ǰ��next
			if (t[i] != t[j])
				next[j] = i;
			else
				next[j] = next[i];
		}
		else
			i = next[i];
	}
	return j;
}


int strStr(char * haystack, char * needle) {

	int i = 0, j = 0;//iָ��ĸ��,jָ���Ӵ�
	int len = strlen(needle);

	if (len == 0)
		return 0;
	int* next = (int*)malloc(sizeof(int) * len);
	get_nextaval(next, needle);
	while (i < strlen(haystack) && j < len)
	{
		if (j == -1 || *(haystack + i) == *(needle + j))//���Ӵ���ͷһ���ַ���ĸ���Ͳ��ȵ�,��ô����һ�ֵ�ѭ����j=-1��.
		{
			++i, ++j;
		}
		else
			j = next[j];
	}
	free(next);
	if (j == len)
		return i - len;
	else
		return -1;
}

int main()
{
	char mom[30] = "misssissippi", son[20] = "ababaaaba";
	int next[20];
	get_nextaval(next,son);
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ", next[i]);
	}
	/*while (scanf("%s", mom) != EOF && scanf("%s", son) != EOF)
		printf("%d\n", strStr(mom, son));*/
	return 0;
}