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
// * ����ת��
// * @param M int���� ��������
// * @param N int���� ת�����Ľ���
// * @return string�ַ���
 ////*
 ////arr[1000] = { 0 };
 //int count = 0;//ת��N���м�λ���ļ����������whileʹ�á�
 //int i = 0;
 //int mid = M;//�Ƚ�M��ֵ����һ����ʱ�������п�������Ϊ֮��ļ������жϻ����
 //while (M)                    
 //{                                 
	// M /= N;
	// count++;
 //}
 //if (mid > 0)//���������Ϊ��ʱ���������¼���
 //{
	// for (i = count - 1; i >= 0; i--)//i��ʱ��ֵ����ΪN���Ƶ���Сλ��
	// {
	//	 int z = mid % N;//����ת�����õ�%��/����һ��ʮ��ȣ�������/����ѭ�����ֹ��һ��if������
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
 //else//MΪ����
 //{
	// mid = -mid;//��M����ʱ����midת��Ϊ����
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