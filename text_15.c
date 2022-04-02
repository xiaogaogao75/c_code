#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
	
			//函数递归

//int main()
//{
//	printf("死递归\n");
//	main();
//	return 0;
//}
//
			/*
			栈溢出
			内存分三个
			栈区：局部变量，函数形参
			堆区：动态内存分配的数据库
			静态区：全局变量，静态变量
			*/

			//输入什么，打印什么
			//递归的条件1.存在限制条件，每次递归调用之后越来越接近这个限制条件
//void print(unsigned int n)
//{
//	if (n>9)
//	{
//		print(n / 10);			
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);		//%u是输入无符号整形
//	print(num);				//这里print不是printf
//	return 0;
//}

//int my_strlen(char *str)
//{
//	//这个方法使用了临时变量
//	//int count = 0;
//	//while (*str !='\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	//不使用临时变量，使用递归
//	if (*str !='\0')
//		return 1 + my_strlen(str + 1);		//不可使用++，无论前后置都有副作用
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "gaoqiang";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
			//计算n的阶乘，迭代
//int	Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}

			//计算斐波那契数	不考虑溢出
//int fib(int n)
//{
//	//此时递归计算效率太低
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2); 
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d \n", ret);
//	return 0;
//}


//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d \n", ret);
//	return 0;
//}

			//汉诺塔问题
			// 
			// 
			// 
			//青蛙跳台阶问题