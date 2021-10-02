#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void print(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void front(int arr[], int r)
//{
//	//从前面找偶数，从后面找奇数，将二者调换
//	int l = 0;
//	int mid = 0;
//	while (l < r)
//	{
//		//l<r既是判断条件也是防止出现全奇全偶时的死循环
//		while (l < r)
//		{
//			if (arr[l] % 2 == 0)
//			{
//				break;
//			}
//			else
//			{
//				l++;
//			}
//		}
//		while (l < r)
//		{
//			if (arr[r] % 2 != 0)
//			{
//				break;
//			}
//			else
//			{
//				r--;
//			}
//		}
//		mid = arr[l];
//		arr[l] = arr[r];
//		arr[r] = mid;
//	}
//}
//int main()
//{
//	//将奇数放在偶数前面
//	int arr[] = {13,17, 0,1,2,3,4,5,12,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);//打印排序前的数组
//	front(arr, len - 1);//函数实现
//	printf("\n");
//	print(arr, len);//打印排序后的数组
//	return 0;
//}