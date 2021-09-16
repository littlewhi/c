#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//char* solve(int M, int N,char arr[1000])
//{
//	// write code here
//	//char arr[1000] = {;
//	int count = 0;
//	int mid = M;
//	int i = 0;
//	while (M)
//	{
//		M /= N;
//		count++;
//	}
//	if (mid > 0)
//	{
//		for (i = count - 1; i >= 0; i--)
//		{
//			int z = mid % N;
//			if (mid == N)
//			{
//				arr[i] = 49;
//			}
//			if (z < 10)
//			{
//				arr[i] = z + 48;
//			}
//
//			else
//			{
//				arr[i] = z + 55;
//			}
//			mid = mid / N;
//		}
//		printf("%s", arr);
//	}
//	else
//	{
//		mid = -mid;
//		for (i = count - 1; i >= 0; i--)
//		{
//			int z = mid % N;
//			
//			if (mid == N)
//			{
//				arr[i] = 49;
//			}
//			if (z < 10)
//			{
//				arr[i] = z + 48;
//			}
//			
//			else
//			{
//				arr[i] = z + 55;
//			}
//			mid = mid / N;
//		}
//		printf("-%s", arr);
//	}
//	return arr;
//}
///
// * 进制转换
// * @param M int整型 给定整数
// * @param N int整型 转换到的进制
// * @return string字符串
 ////*
 ////arr[1000] = { 0 };
 //int count = 0;//转到N共有几位数的计数器，配合while使用。
 //int i = 0;
 //int mid = M;//先将M的值赋予一个临时变量进行拷贝，因为之后的几进制判断会更改
 //while (M)                    
 //{                                 
	// M /= N;
	// count++;
 //}
 //if (mid > 0)//当输进的数为正时，进行如下计算
 //{
	// for (i = count - 1; i >= 0; i--)//i此时的值正好为N进制的最小位数
	// {
	//	 int z = mid % N;//进制转换常用的%，/（可一与十类比），但是/放在循环后防止第一个if的误判
	//	 if (mid == N)
	//	 {
	//		 arr[i] = 49;
	//	 }
	//	 if (z < 10)
	//	 {
	//		 arr[i] = z + 48;
	//	 }

	//	 else
	//	 {
	//		 arr[i] = z + 55;
	//	 }
	//	 mid = mid / N;
	// }
	// printf("%s", arr);
 //}
 //else//M为负数
 //{
	// mid = -mid;//将M的临时拷贝mid转换为正数
	// for (i = count - 1; i >= 0; i--)
	// {
	//	 int z = mid % N;

	//	 if (mid == N)
	//	 {
	//		 arr[i] = 49;
	//	 }
	//	 if (z < 10)
	//	 {
	//		 arr[i] = z + 48;
	//	 }

	//	 else
	//	 {
	//		 arr[i] = z + 55;
	//	 }
	//	 mid = mid / N;
	// }
	// printf("-%s", arr);
 //}
 //return arr;
 //}
/*
			{
			arr[i] = z + 55;
			}
			mid = mid / N;
		}
		printf("-%s", arr);
	}
	return ar;*/

//	char* solve(int M, int N, char arr[1000])
//	{
//		// write code here
//		//char arr[1000] = {;
//		int count = 0;
//		int mid = M;
//		int i = 0;
//		while (M)
//		{
//			M /= N;
//			count++;
//		}
//		int flg = 1;
//		if (mid < 0)
//		{
//			mid = -mid;
//			flg = 0;
//		}
//			for (i = count - 1; i >= 0; i--)
//			{
//				int z = mid % N;
//				if (mid == N)
//				{
//					arr[i] = 49;
//				}
//				if (z < 10)
//				{
//					arr[i] = z + 48;
//				}
//
//				else
//				{
//					arr[i] = z + 55;
//				}
//				mid = mid / N;
//			}
//			if (flg == 0)
//				printf("-%s", arr);
//			else
//				printf("%s", arr);
//		
//		
//		return arr;
//	}
//int main()
//{
//	int n = 12;
//	int m = 23;
//	char arr[1000] = {0};
//	solve(m, n,arr);
//	return 0;
//}