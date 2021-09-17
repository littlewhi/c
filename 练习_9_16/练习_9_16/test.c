#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char* ture_passw(char arr[])
//小写字母变成数字，大写字母变成小写并向后移一位，其他字符不做改变
{
	int pwlen = strlen(arr);//密码的长度
	int i = 0;
	for (i = 0; i < pwlen; i++)
	{
		//小写变数字应放在前面，否则若是先大写变小写，就容易再经历一次小写变成数字，那就很尴尬了
//---小写变数字
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			//九键打字打字的字母与数字对应关系
			if (arr[i] < 'd')
				arr[i] = '2';
			else if (arr[i] < 'g')
				arr[i] = '3';
			else if (arr[i] < 'j')
				arr[i] = '4';
			else if (arr[i] < 'm')
				arr[i] = '5';
			else if (arr[i] < 'p')
				arr[i] = '6';
			else if (arr[i] < 't')
				arr[i] = '7';
			else if (arr[i] < 'w')
				arr[i] = '8';
			else
				arr[i] = '9';
		}
		//---大写变小写
		if (arr[i] >= 65 && arr[i] < 90)//判断是否在A与Z之间，Z单独处理
		{
			arr[i] = arr[i] + 33;//大小写之间的ascii码值差了32，又因为还要向后移一位，所以+33
		}
		if (arr[i] == 'Z')
		{
			arr[i] = 'a';
		}
	}
	return arr;
}
int main()
{
	char arr[101] = { 0 };//接受密码的数组
	while (scanf("%s", arr) != EOF)
	{
		ture_passw(arr);//翻译密码的函数
		printf("%s\n", arr);
	}
	return 0;
}
//#include<iostream>
//#include<string>
//#include <stdio.h>
//using namespace std;
//const string dict1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//const string dict2 = "bcdefghijklmnopqrstuvwxyza22233344455566677778889999";
//
//char Char_Change(char a) {
//	for (int i = 0; i < dict1.size(); i++)
//		if (dict1[i] == a) return dict2[i];
//	return a;
//}
//
//int main() {
//	//string data="YUANzhi1987";
//	string data;
//	while (getline(cin, data)) {
//		for (int i = 0; i < data.size(); i++)
//			data[i] = Char_Change(data[i]);
//		cout << data << endl;
//	}
//	return 0;
//}

//char ture_passw(char word)
//{
//	char ex1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//	char ex2[] = "bcdefghijklmnopqrstuvwxyza22233344455566677778889999";
//	int len = strlen(ex1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (word == ex1[i])
//		{
//			return ex2[i];
//		}
//	}
//	return word;
//}
//int main()
//{
//	char arr[101] = { 0 };//接受密码的数组
//	while (scanf("%s", arr) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < strlen(arr); i++)
//		{
//			arr[i] = ture_passw(arr[i]);//翻译密码的函数
//		}
//		printf("%s\n", arr);
//	}
//	return 0;
//}