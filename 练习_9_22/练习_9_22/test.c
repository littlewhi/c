#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int my_pow(int n, int k)//n��k����
{
	int mid = 0;//�����жϷ���ֵ�Ƿ���õ���
	int m = n;//���������ʱ�洢ÿһ���²�����ֵ
	if (k < 0)//k����Ǹ�����Ҫ����������
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
		for (i = 2; i <= k; i++)//k��n�����,��Ϊ��һ��ʱ������n��ֵ��˵ģ�����ֱ������2��
		{
			m = m * n;
		}
		
	}
	if (mid)//���mid=1���Ǿ�˵��Ӧ�õ�����
	{
		return 1 / m;
	}
	else
	{
		return m;
	}
}
//int my_pow(int n, int k)//�ݹ����Ļ������Ǹ�˼�룬�ֽ⣬��һ������n *  n^(k-1)���������²�ֱ��k=0��
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	if (k < 0)//k<0���������������ɴ�����ͺ��ˣ�����Ҫ���˵���Ŷ��
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