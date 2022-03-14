#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//关键字不能自己创建
/*
register 寄存器关键字
extern是用来申明外部符号的
static 静态的!
union联合体(共同体）
void 无
define(不是关键字是预处理指令)

*/

//typedef unsigned int u_int;//关键字重命名(类型定义)
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//	return 0;
//}
		
/*static
1.修饰局部变量
2.修饰全局变量
3.修饰函数

*/
//void text()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		text();
//		i++;
//	}
//	return 0;
//}

