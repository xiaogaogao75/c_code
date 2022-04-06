//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>

			//判断比循环多一次

			//数一下1-100出现多少次9   %10找个位的9  /10找十位的9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for  (i = 0; i <=100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}

			//计算1/-1/2+1/3***-1/100的值，打印结果			 解法很多！
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//
//	for ( i = 1; i <=100; i++)
//	{
//		if(i%2==0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for ( i = 1; i <=100; i++)
//	{
//			sum += flag*1.0 / i;
//			flag = -flag;			//循环一下就一正一负
//	}
//
//	printf("%lf", sum);
//	return 0;
//}

			//求10个数中的最大数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	for ( i = 0; i <10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
			//输出9*9乘法表
//int main()
//{
//	int i = 1;
//	for ( i = 1; i <=9; i++)
//	{
//		int	j = 0;
//		for ( j = 1; j < i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);	//%2d是打印两位数的位置	此处是左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

			//输入一个数，打印这个数的乘法表
//void print_table(int n)
//{
//
//	int i = 0;
//	for ( i = 1; i <=n; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print_table(n);
//	return 0;
//}