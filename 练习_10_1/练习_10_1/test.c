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
//	//��ǰ����ż�����Ӻ����������������ߵ���
//	int l = 0;
//	int mid = 0;
//	while (l < r)
//	{
//		//l<r�����ж�����Ҳ�Ƿ�ֹ����ȫ��ȫżʱ����ѭ��
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
//	//����������ż��ǰ��
//	int arr[] = {13,17, 0,1,2,3,4,5,12,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);//��ӡ����ǰ������
//	front(arr, len - 1);//����ʵ��
//	printf("\n");
//	print(arr, len);//��ӡ����������
//	return 0;
//}