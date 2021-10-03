#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void front2(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0;i < sz)
//}
//int main()
//{
//	//bubble 奇数放在偶数前
//	int arr[] = { 1,2,3,1,6,4,8,9,7,4,12,34,77 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	front2(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int k_odr(int arr[], int sz)
//{
//	//快速排序
//	//1 找基准数 --通常以第一个为基准数；
//	//2 与基准数进行比较
//	//[ (2)从左边开始找比基准数大的放在右边；（1）从右边开始找比基准数小的放在左边]
//	//这算一次，接着重复调用此函数递归；
//	//小的放一块，大的放一块，直至每块区域只有一个元素；
//	//1
//	int sdard = arr[0];
//	//2
//	int left = 0;
//	int right = sz - 1;
//	//find 
//	while (left < right)
//	{
//		
//		while (left < right && arr[right] > sdard)//右侧
//		{
//			right--;
//		}
//		arr[left] = arr[right];
//		while (left < right && arr[left] <= sdard)//左侧
//		{
//			left++;
//		}
//		arr[right] = arr[left];
//	}
//	arr[left] = sdard;
//	if (left)
//		k_odr(arr, left);
//	if (sz - right - 1)
//		k_odr(arr + right + 1, sz - right - 1);
//	return 0;
//}
//
//int main()
//{	int arr[] = { 70,89,8,4,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	k_odr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void pp(int arr[])
//{
//	;
//}
//int main()
//{
//	int arr[10];
//	pp(arr + 1);
//	return 0;
//}
//杨辉三角
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 9 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j<=i;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//找凶手
//A说不是我
//B说是C
//C说是D
//D说C在胡说
//三人中只有一人说了假话，问谁是凶手
//int main()
//{
//	//将c语言中真假与现实世界联系起来
//	//一个表达式为假则表现为 0；
//	//一个表达式为真则默认表现为 1；
//	//排列出每种情况，进行判断，若最终结果为3就符合；
//	char killer;
//	for (killer = 'a'; killer < 'e'; killer++)
//	{
//		int i = (killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd');
//		if (3 == i)
//		{
//			printf("killer = %c\n", killer);
//			break;
//		}
//	}
//	return 0;
//}
//规定数目的旋转字符串
//eg.  abcdef
//左旋一个字符
//->bcdefa
#include <string.h>
//void lef_move1(char arr[],int n)
//{
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int mid = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = mid;
//	}
//}
//void restr(char* str, int len)
//{
//	int l = 0;
//	int r = len - 1;
//	while (l < r)
//	{
//		char mid = *(str + l);
//		*(str + l) = *(str + r);
//		*(str + r) = mid;
//		l++;
//		r--;
//	}
//}
//void lef_move2(char* arr, int n)
//{
//	//n = 2
//	//abcdef
//	//1  ab ->ba 
//	//2  cdef ->fedc
//	//bafedc
//	//3 bafedc ->cdefab
//	int len = strlen(arr);
//	//1
//	restr(arr, n);//传首元素地址与所需要逆序字符串的长度
//	//2
//	restr(arr + n, len - n);
//	//3
//	restr(arr, len);
//}
//int main()
//{
//	char arr[255] = "abcdef";
//	int n = 0;
//	//gets(arr);
//	scanf("%d", &n);
//	//lef_move1(arr,n);
//	lef_move2(arr, n);
//	printf("%s\n", arr);
//	return 0;
//}
//int judge1(char orig[], char son_[])
//{
//	//将原字符串变倍，就可以产生各种子字符串以进行对照比较
//	//abcdef -> abcdefabcdef
//	int len = strlen(orig);
//	int len_ = strlen(son_);
//
//}
//int main()
//{
//	//判断一个字符串是否是一个字符串旋转后的子字符串
//	char arr1[] = "abcdef";
//	char arr2[] = "bcdefa";
//	if (judge1(arr1, arr2))
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}