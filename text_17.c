//#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>
			//计算好几个数字的位数和
//int Digisum(int n)
//{
//
//	if (n > 9)
//	{
//		return Digisum(n / 10) + n % 10;
//	}  
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = Digisum(num);
//	printf("%d", sum);
//
//	return 0;
//}
			//实现一个n的k次方，用递归

//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 /  (Pow(n, -k));	//遇到同级时候要提高优先级，-k是因为输入负数然后负负得正
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}






			//一维数组
//int main()
//{
	//int arr[8];	格式：类型 名字[元素多少(可以不写)]
	//int arr[n];   爆红的原因是vs这个版本不支持变长数组
	//int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };  //完全初始化
	//int arr2[] = { 1,2,3,4,5,6 };	//不完全初始化第七个数字后面均为零
	//char ch1[] = { "bit" };
	//[b i t \0]
	//char ch2[] = { 'b','i','t' };
	//[b i t]没有\0，继续寻找，\0是结束的标志
	//printf("%s\n", ch1);
	//printf("%s\n", ch2);
//	return 0;
//}

//int main()
//{	
//	//int arr[10] = { 0 };
//	//arr[4] = 5;//[]下标引用操作符	
//	//%p按格式地址打印-16进制
//	//一维数组在内存中连续存放！
//	//随着数组下标增长，地址由低到高变化！
//
//	int arr[10] = { 0 };
//	int i = 0; 
//	for ( i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//一维数组在内存中连续存放！
//	//随着数组下标增长，地址由低到高变化！
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

			//二维数组
//int main()
//{
//	//创建
//	//int arr[3][4];//创建一个三行四列的数组，每个元素是int类型
//	//初始化	不完全初始化与数组一样
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };  这种事第一列放12，二列放34，三列放56
//	//int arr[][4] = { {1,2},{3,4},{5,6} };		二维数组只有行可以省略 
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-------二维数组在内存中的存储-------");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i , j , &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	printf("-------二维数组在内存中也是连续存放-------\n");
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for ( i = 0; i < 12; i++)
//	{
//		printf("%d  ", *p);
//		p++;
//	}
//	return 0;
//}