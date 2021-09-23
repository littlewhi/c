#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int my_pow(int n, int k)//n的k次幂
{
	int mid = 0;//用来判断返回值是否因该倒数
	int m = n;//用来在相乘时存储每一次新产生的值
	if (k < 0)//k如果是负数就要把它变正了
	{
		k = -k;
		mid = 1;
	}
	else if (!k)
	{
		return 1;
	}
	if(k>0)
	{
		int i = 0;
		for (i = 2; i <= k; i++)//k个n相乘呗,因为第一回时令两个n的值相乘的，所以直接跳到2来
		{
			m = m * n;
		}
		
	}
	if (mid)//如果mid=1，那就说明应该倒数了
	{
		return 1 / m;
	}
	else
	{
		return m;
	}
}
//int my_pow(int n, int k)//递归来的话就是那个思想，分解，第一步就是n *  n^(k-1)，不断向下拆，直到k=0；
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	if (k < 0)//k<0的情况就是让它变成大于零就好了，但不要忘了倒数哦！
//	{
//		return 1/my_pow(n, -k);
//	}
//
//}
int main()
{
	printf("%d\n", my_pow(2,3));
	return 0;
}