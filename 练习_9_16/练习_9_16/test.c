#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char* ture_passw(char arr[])
//Сд��ĸ������֣���д��ĸ���Сд�������һλ�������ַ������ı�
{
	int pwlen = strlen(arr);//����ĳ���
	int i = 0;
	for (i = 0; i < pwlen; i++)
	{
		//Сд������Ӧ����ǰ�棬���������ȴ�д��Сд���������پ���һ��Сд������֣��Ǿͺ�������
//---Сд������
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			//�ż����ִ��ֵ���ĸ�����ֶ�Ӧ��ϵ
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
		//---��д��Сд
		if (arr[i] >= 65 && arr[i] < 90)//�ж��Ƿ���A��Z֮�䣬Z��������
		{
			arr[i] = arr[i] + 33;//��Сд֮���ascii��ֵ����32������Ϊ��Ҫ�����һλ������+33
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
	char arr[101] = { 0 };//�������������
	while (scanf("%s", arr) != EOF)
	{
		ture_passw(arr);//��������ĺ���
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
//	char arr[101] = { 0 };//�������������
//	while (scanf("%s", arr) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < strlen(arr); i++)
//		{
//			arr[i] = ture_passw(arr[i]);//��������ĺ���
//		}
//		printf("%s\n", arr);
//	}
//	return 0;
//}