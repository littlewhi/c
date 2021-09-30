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
//	//输入一个数字，构成多个从一位到多位数，并将它们求和。
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int p = 0;//记录位数
//		scanf("%d", &p);
//		int s = sum(n, p);//求和函数
//		printf("sum = %d\n", s);
//	}
//	return 0;
//}
//int ret(int n)
//{
//
//	//各个位的总位数幂相加的于其本身
//	int s = 0;
//	int mid = n;//拷贝一份n的值；下面的操作会改变n的值，对于比较是否相等时会有干扰
//	int count = 1;
//	while (n /= 10)
//	{
//		count++;//计算位数
//	}
//	n = mid;
//	while (n)//计算次幂和；
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
//	//打印1-10000之间的自恋数；
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		//判断是否是自恋数
//		int n = ret(i);//是的话，返回1；不是返回0；
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
//	//打印菱形
//	//分上下打印
//	//上多下少
//	//1.上
//	int i = 0;
//	scanf("%d", &i);
//	//一共打印的是i + i -  1；
//	int n = 0;
//	for (n = 0; n < i; n++)
//	{
//		int j = 0;
//		for (j = 0; j < i - 1 - n; j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * n + 1; j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (n = 0; n < i; n++)
//	{
//		int j = 0;
//		for (j = 0; j < n + 1; j++)//打印空格
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (i - n - 2) + 1; j++)//打印*
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//喝汽水问题
//int main()
//{
//	//一瓶汽水1元，两个空瓶换一瓶汽水；
//	//问 20元能喝多少瓶汽水
//	// first 20 buy
//	int buy = 0;
//	scanf("%d", &buy);
//	int drunk = buy;
//	//second buy = empty（空瓶）
//	int empty = buy;
//	//third exchange
//	while (empty > 1)
//	{
//		int empty_plus = empty % 2;//奇数时会余1而不能换，需要存储起来
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
