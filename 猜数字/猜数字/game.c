#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
    printf("***********************************\n");
	printf("******1��play       0��exit********\n");
	printf("***********************************\n");
}
void game()
{
	int j = 0;
    int i = 0;
	printf("������\n");
	i = rand()%100;
	while(1)
	{
		scanf("%d",&j);
	   if(j < i)
		   printf("��С��\n");
	   else if(j > i)
		   printf("�´���\n");
	   else
	   {
	   printf("��ϲ�㣬�¶��ˣ�����\n");
	   printf("***********************  %d",i);
	   break;
	   }
	
	}
}
int main()
{   
	int n = 1;
	srand((unsigned int) time(NULL));
    menu();	
	printf("��ѡ��>:");
	while(n)
	{
	scanf("%d",&n);
	switch(n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default :
				printf("�����������������\n");
				break;
	     }
	}
	return 0;
}