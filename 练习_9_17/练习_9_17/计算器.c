#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void menu()
//{
//	printf("********************* 1、Add        2、Min *********************\n");//加减
//	printf("********************* 3、Mul        4、Div *********************\n");//乘除
//	printf("*********************       0、exit        *********************\n");//退出
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
//void lend(int(*p)(int, int))//设计成回调函数的模式也是为了减少冗余
//{                               //要不然每个case下都有这么一大堆
//	int x = 0;
//	int y = 0;
//	printf("请输入所要计算的数\n");
//	scanf("%d%d", &x, &y);
//	printf("结果是：%d\n", p(x, y));
//}
//int main()
//{
//	//计算器一（回调函数版）
//	//实现加减乘除
//	//打开程序肯定是要先打印出选项，之后进行选择等等，如果算多种那肯定是一个循环重复进行
//	//这里就选用do_while,其实哪种都行，就是在退出时设计不一样
//	int input = 0;//接受选项的变量
//	
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>\n");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}
//#include <math.h>
//void menu()
//{
//	printf("******************** 1、Add        2、Min  ********************\n");//加减
//	printf("******************** 3、Mul        4、Div  ********************\n");//乘除
//	printf("******************** 5、Pow        0、exit ********************\n");//退出
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
//	//计算器二（转移表）
//	//这回多弄一个幂的运算
//	//接着do_while
//	int input = 0;
//	int(*p[])(int, int) = { 0,Add,Min,Mul,Div,Pow };//第一个放入0是为了选择更加方便也是容易理解
//	//因为我们如果要选择计算的函数时一定不能选0，所以选择几就进入那个函数
//	do
//	{
//		menu();
//		printf("请选择>:\n");
//		scanf("%d", &input);
//		if (input < 6 && input > 0)//这里就不用那个长长的switch语句了
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入：\n");
//			scanf("%d%d", &x, &y);
//			printf("结果是：%d",p[input](x, y));
//		}
//		else if (!input)//选择为0时
//		{
//			printf("退出\n");
//		}
//		else//选择非法选项时
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}