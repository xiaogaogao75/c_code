//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
	

			//数组作为函数参数
//void bubble_sort(int arr[] ,int sz)
//{
//	//确定躺数
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		//跑一趟
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				//交换	
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0,65,45,4,21 };
//	//排序为升序--冒泡排序
//	//计算元素个数		
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}
//数组名是什么
//数组名是首元素的地址
//两个例外
//1. sizeof(数组名)-数组名表示整个数组-计算整个数组的字节
//2.&数组名-数组名表示整个数组-取出的是整个数组的地址

//int main()
//{
//	int arr[] = { 0 };
//	int sz = sizeof(arr);
//	printf("%d\n", sz); 
//	printf("%p", &arr[0]);
//	printf("%p", arr);		//数组名是首元素的地址
//	return 0;
//}