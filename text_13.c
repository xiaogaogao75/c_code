#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
				//函数
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "abc" };
//
//	strcpy(arr1, arr2);			//拷贝一个字符串
//
//	printf("%s", arr1);
//
//	return 0;
//}


				//自定义一个函数，1.作用计算两个值的最大值
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x>y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf_s("%d%d",&a ,& b);
//
//	int max = get_max(a, b);
//	
//	printf("%d", max);
//	return 0;
//}
				//2.交换两个整形变量的值
//函数返回类型处写：void，表示这个函数不需要返回任何值，也不需要返回 
			//不能像1.那样，由于主函数中a，b有申请过指针空间，所以要*p来寻找主函数中的a	Swap中也需要用到取地址
//void Swap(int* pa, int* pb)						
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb; 
//	*pb = *pa;
// }
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("改变前：a=%d b=%d\n", a, b);
//
//	Swap(&a, &b);		//取地址，函数调用
//
//	printf("改变后：a=%d b=%d\n", a, b);
//
//	return 0;
//}