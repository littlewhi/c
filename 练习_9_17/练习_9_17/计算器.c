#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void menu()
//{
//	printf("********************* 1��Add        2��Min *********************\n");//�Ӽ�
//	printf("********************* 3��Mul        4��Div *********************\n");//�˳�
//	printf("*********************       0��exit        *********************\n");//�˳�
//	printf("*********************----------------------*********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Min(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void lend(int(*p)(int, int))//��Ƴɻص�������ģʽҲ��Ϊ�˼�������
//{                               //Ҫ��Ȼÿ��case�¶�����ôһ���
//	int x = 0;
//	int y = 0;
//	printf("��������Ҫ�������\n");
//	scanf("%d%d", &x, &y);
//	printf("����ǣ�%d\n", p(x, y));
//}
//int main()
//{
//	//������һ���ص������棩
//	//ʵ�ּӼ��˳�
//	//�򿪳���϶���Ҫ�ȴ�ӡ��ѡ�֮�����ѡ��ȵȣ����������ǿ϶���һ��ѭ���ظ�����
//	//�����ѡ��do_while,��ʵ���ֶ��У��������˳�ʱ��Ʋ�һ��
//	int input = 0;//����ѡ��ı���
//	
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			lend(Add);
//			break;
//		case 2:
//			lend(Min);
//			break;
//		case 3:
//			lend(Mul);
//			break;
//		case 4:
//			lend(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}
//#include <math.h>
//void menu()
//{
//	printf("******************** 1��Add        2��Min  ********************\n");//�Ӽ�
//	printf("******************** 3��Mul        4��Div  ********************\n");//�˳�
//	printf("******************** 5��Pow        0��exit ********************\n");//�˳�
//	printf("*********************----------------------********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Min(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Pow(int x, int y)
//{
//	return pow(x, y);
//}
//int main()
//{
//	//����������ת�Ʊ�
//	//��ض�Ūһ���ݵ�����
//	//����do_while
//	int input = 0;
//	int(*p[])(int, int) = { 0,Add,Min,Mul,Div,Pow };//��һ������0��Ϊ��ѡ����ӷ���Ҳ���������
//	//��Ϊ�������Ҫѡ�����ĺ���ʱһ������ѡ0������ѡ�񼸾ͽ����Ǹ�����
//	do
//	{
//		menu();
//		printf("��ѡ��>:\n");
//		scanf("%d", &input);
//		if (input < 6 && input > 0)//����Ͳ����Ǹ�������switch�����
//		{
//			int x = 0;
//			int y = 0;
//			printf("�����룺\n");
//			scanf("%d%d", &x, &y);
//			printf("����ǣ�%d",p[input](x, y));
//		}
//		else if (!input)//ѡ��Ϊ0ʱ
//		{
//			printf("�˳�\n");
//		}
//		else//ѡ��Ƿ�ѡ��ʱ
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}