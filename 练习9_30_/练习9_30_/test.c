#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <math.h>
/*int main() 
{ 
	printf("hello word!\n"); 
	return 0;  
}*/ 
//int sum(int n, int p)
//{
//	//if n = 2;p = 2;
//	//a.= 2
//	//b.= 22
//	// * 10 + ;
//	int i = 0;
//	int s = 0;
//	int mid = 0;
//	for (i = 0; i < p; i++)
//	{
//		mid = mid * 10 + n;
//		s = s + mid;
//	}
//	return s;
//}
//int main()
//{
//	//����һ�����֣����ɶ����һλ����λ��������������͡�
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int p = 0;//��¼λ��
//		scanf("%d", &p);
//		int s = sum(n, p);//��ͺ���
//		printf("sum = %d\n", s);
//	}
//	return 0;
//}
//int ret(int n)
//{
//
//	//����λ����λ������ӵ����䱾��
//	int s = 0;
//	int mid = n;//����һ��n��ֵ������Ĳ�����ı�n��ֵ�����ڱȽ��Ƿ����ʱ���и���
//	int count = 1;
//	while (n /= 10)
//	{
//		count++;//����λ��
//	}
//	n = mid;
//	while (n)//������ݺͣ�
//	{
//		s = pow(n % 10, count) + s;
//		n = n / 10;
//	}
//	if (s == mid)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	//��ӡ1-10000֮�����������
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		//�ж��Ƿ���������
//		int n = ret(i);//�ǵĻ�������1�����Ƿ���0��
//		if (n)
//			printf("%d\n", i);
//	}
//	return 0;
//}
 //     *6
 //    ***5
 //   *****4
 //  *******3
 // *********2
 //***********1
//*************0
 //***********
 // *********
 //  *******
 //   *****
 //    ***
 //     *
//int main()
//{
//	//��ӡ����
//	//�����´�ӡ
//	//�϶�����
//	//1.��
//	int i = 0;
//	scanf("%d", &i);
//	//һ����ӡ����i + i -  1��
//	int n = 0;
//	for (n = 0; n < i; n++)
//	{
//		int j = 0;
//		for (j = 0; j < i - 1 - n; j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * n + 1; j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (n = 0; n < i; n++)
//	{
//		int j = 0;
//		for (j = 0; j < n + 1; j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (i - n - 2) + 1; j++)//��ӡ*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//����ˮ����
//int main()
//{
//	//һƿ��ˮ1Ԫ��������ƿ��һƿ��ˮ��
//	//�� 20Ԫ�ܺȶ���ƿ��ˮ
//	// first 20 buy
//	int buy = 0;
//	scanf("%d", &buy);
//	int drunk = buy;
//	//second buy = empty����ƿ��
//	int empty = buy;
//	//third exchange
//	while (empty > 1)
//	{
//		int empty_plus = empty % 2;//����ʱ����1�����ܻ�����Ҫ�洢����
//		empty = empty / 2;
//		drunk = drunk + empty;
//		empty += empty_plus;
//	}
//	printf("%d", drunk);
//	return 0;
//}
//int main()
//{
//	double i = 5.0 / 9 * (100 - 32);
//	printf("%.2lf", i);
//}
//int main()
//{
//	int a = 0;
//	double x = 0;
//	double y = 0;
//	scanf("%d%lf", &a, &x);
//	if (a)
//	{
//		y = 5.0 / 9 * ( x - 32);
//		printf("The Centigrade is %lf\n",y);
//	}
//	else
//	{
//		y = 9.0 / 5 * x + 32;
//		printf("%lf\n", y);
//	}
//	return 0;
//}
