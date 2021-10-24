#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//计数器版
//int my_strlen(const char* str)//const 毕竟只是查数而已，为避免错误操作，
//                              //将其作为常变量接受，保险一些，也为以后培养一个好习惯
//{
//	assert(str);//断言
//	int count = 0;//计数器
//	while (*str++)//遇到\0循环停止
//	{
//		count++;//每一个非\0字符都会进入循环，则计数器加1
//	}
//	return count;//返回计数器的值即字符串长度
//}
//指针版
//int my_strlen(char* str)
//{
//	char* start = str;//记载首元素地址
//	char* end = str;//记录尾元素的地址，但目前不是尾元素啦，经过下列操作后就是了
//	while (*end)//循环原理同计数器版
//	{
//		end++;
//	}
//	return(end - start);//两个指针之间的差就是两指针间元素的个数。
//}
////递归版
////假设有一个字符串"abc"
////递归的思想就是将大事分解成小事
////那就这样计算"abc"可以看为计算a + "bc"
////a肯定算出来是1，所以就是1 + "bc"
////再分解就是1 + b + "c"
////同理1 + 1 + "c"
////同理1 + 1 + 1 + ""
////此时""里还有\0, 不算长度，那就是0
////所以1 + 1 + 1 + 0 = 3;
//int my_strlen(char* str)
//{
//	if (*str)//如果此字符串不是\0,条件成立进入
//		     //能进入就说明目前至少有一个字符，那就返回（1 + 剩下的字符计算）
//		return (1 + my_strlen(str + 1));
//	else//遇到\0就进入这里，因为\0不计入长度，对于此字符返回0，
//		return 0;
//}

//int main()
//{
//
//	char* str = "abcdef";
//	return 0;
//	sizeof
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abc";
//
//	if (strlen(arr2) - strlen(arr1) < 0)
//	{
//		printf("good!\n");
//	}
//	else
//	{
//		printf("well\n");
//	}
//	return 0;
//}