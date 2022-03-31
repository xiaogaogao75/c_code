#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

			//判断100-200之间的素数

//int is_primise(int n)
//{
//	int j = 0;
//	for ( j = 2; j < sqrt(n); j++)		//sqrt是开平方的意思此处代码优化了，
//	{
//		//2->n-1之间的数
//		if (n % j == 0)
//			return 0;
//	}
//	return 1; 
//}										//return只能返回1个值，不代表不能用两次
//int main()
//{
//	int i = 0;
//	for ( i = 100; i < 200; i++)
//	{
//		//判断是否为素数
//		if ((is_primise(i))==1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



			//判断1000到2000的闰年
//如果不写返回类型则默认int类型
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else								//是瑞年返回1，不是返回0
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//	for ( y = 1000; y < 2000; y++)
//	{
//		if ((is_leap_year(y))==1)		//是瑞年返回1，不是返回0
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

			//二分查找
//int mid_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int	arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到返回位置下表
//	//找不到返回-1
//	int ret = mid_search(arr, key, sz);
//
//	if (ret==-1)
//	{
//		printf("找不到\n", ret);
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//	}
//
//	return 0;
//}

			//返回一个值，每次num+1
//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//
//	add(&num);
//	printf("%d \n", num);	//1
//
//	add(&num);
//	printf("%d \n", num);//2
//
//	add(&num);
//	printf("%d \n", num);//3
//	return 0;
//}


			//函数的嵌套与链式访问
/*
1.函数必须独立
2.可以调用多个函数
*/
			//链式访问
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d", strlen("abc"));
//	//函数打印的是屏幕上字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
			//函数的声明与定义
/*
1.创建头文件，写入定义  eg：int sum(int x,int y);
2.创建源文件，写入函数执行代码
3.用函数的时候需要引入头文件 #include "sum.h"
4.源文件与头文件需同名
*/

			//使用静态库
/*
声明
#pragma comment（lib,"sum.lib"）
然后引入sum.h文件

*/