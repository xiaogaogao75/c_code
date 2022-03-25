#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
		//for循环     1.for循环中的break和continue
					//2.for循环中不可改变循环变量，否则死循环
//int main()
//{
//	int i = 0;
//	for ( i = 1;i <= 10; i++)//i = 1;初始化i <= 10;判断语句 i++调整部分
//	{
//		if (i == 5)
//			/*	  break;	*/	//break在for中的运用
//			continue;		//跳过本次循环
//
//		printf("%d", i);
//	}
//	return 0;
//}




//int main()
//{
//	for (;;)
//	{
//		printf("hehe");		//判断部分为空语句则死循环
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int	j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

		//do while （）循环

//int	main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		//跳出循环，没有进行i++
//		printf("%d ", i);
//
//		i++;
//	} while (i<=10);
//	return 0;
//}





				//练习
				//1.计算n的阶乘
//int main()
//{
//	int	i = 0;
//	int j = 0;
//
//	for (i = 1; i == 1; )
//	{
//		int sum = i * j;
//		j++;
//		printf("n=%d\n", sum );
//	}
//	return 0;
//}

				//2.计算1!+2!....10!的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; i <=10; n++)
//	{
//		ret = 1;
//		for ( i = 1; i <=n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}


				//3.在一个有序数组中查找具体某个数字n		折半查找
//int	main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr有序数组中查找k（）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素的个数
//
//	int left = 0;
//	int	right = sz-1;
//	
//		
//	while (left<=right)
//	{
//		int	mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}

				//4.一句话从左右两边开始打印
//#include <string.h>		//strlen的头文件
//#include <windows.h>	//Sleep的头文件
//int main()
//{
//	char arr1[] = "welcom to my family";
//	char arr2[] = "###################";
//	int left = 0;
//	int	right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);	//休眠1s
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}

				//三次输入密码

//int	main()
//{
//	int i = 0;
//	char passward[20] = { 0 };
//	for ( i = 0; i <3; i++)
//	{
//		printf("请输入密码:>");
//		scanf_s("%s", passward);
//		//if(passward=="123456")  错误代码  两个字符串的比较不能使用==，应该使用strcmp
//		if (strcmp(passward,"123456")==0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入");
//		}
//	}
//	if (i==3)
//	{
//		printf("三次密码输入错误，退出程序");
//	}
//
//	return 0;
//}