#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int get_nextaval(int next[], char* t)
{
	int i = -1, j = 0;//i 是掌管前缀,j 掌管后缀;
	next[0] = -1;
	if (!*t)
		return 0;
	while (j+1 < strlen(t))//主体的循环只需要推导前面的就行.
	{
		if (i == -1 || t[i] == t[j])
		{
			++i, ++j;//此时的i就是优化前的next
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

	int i = 0, j = 0;//i指向母串,j指向子串
	int len = strlen(needle);

	if (len == 0)
		return 0;
	int* next = (int*)malloc(sizeof(int) * len);
	get_nextaval(next, needle);
	while (i < strlen(haystack) && j < len)
	{
		if (j == -1 || *(haystack + i) == *(needle + j))//若子串的头一个字符与母串就不等的,那么经过一轮的循环就j=-1了.
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