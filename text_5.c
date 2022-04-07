#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//选择语句
//简单的选择
//int main()
//{
//	int input = 0;
//	printf("你是男是女（1/0）?\n");
//	scanf("%d", &input);
//
//		if (input == 1)
//			printf("男\n");
//		else
//			printf("女\n");
//
//	return 0;
//}



//简单的循环语句

//int main()
//{
//	int line = 0;
//	while (line<30000)
//	{
//		printf("写代码\n", line);
//		line++;
//	}
//	if (line==30000)
//	{
//		printf("成为大牛");
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
// }
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2; 非函数
//	// 函数的解决方式 :函数的作用使其模块化，避免大工程的代码复杂
//	int sum = Add(num1, num2);
//
//	printf("%d\n",sum);
//
//	return 0;
//}

//int main()
//{
//	//数组：一组相同类型的元素集合
//	//数组是用来下标访问的
//	//第一个元素下标是0， arr[0]=1
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int	i = 0;
//	while (i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
///*	char ch[5] = { 'a','b','c'};*///不完全初始化，剩余默认为0
//	return 0;
//}

	//1.算数操作符：+ -  * / %(求余） 
	//2.移位操作符：<< >>
	//3.位操作符：
	// & 按位与
	// | 按位或
	// ^ 按位异或
	// 4.赋值操作符：=  +=  -=  *=  /=  ^=  |=  >>=  <<=
//操作符
//int main()
//{

	//
//	int a = 9 / 2;
//	float b = 9 / 2.0;
//	printf("%d\n", a);
//	printf("%f\n", b);
//	return 0;
//}

//int	main()
//{
//	int a = 2;
//	int	b = a << 1;//左移操作符就是移动二进制位 答案是4
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	//!取相反结果
//	if (true)
//	{
//		//如果为真，做事
//	}
//	if (!true) 
//	{
//		//如果为假，做事
//	}
//	return 0;
//}
//sizeof是操作符括号可省略，计算大小，单位字节是单目操作符



		//单目操作符表放在了text_5中

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a); //按位取反（二进制）  按正常应该是1但是整数的内存中存储的是补码
//	return 0;
// }


//int main()
//{
//	int	a = 10;
//	int b = ++a;	//++前置——先++后使用	
//	printf("%d\n", b);
//	printf("%d\n", a);
//	
//	
//	int	c = 10;
//	int d = c++; 	//后置++——先使用后++	
//	printf("%d\n", d);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//强制类型转化
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}


		/*逻辑操作符
		&&逻辑与（并且）
		||逻辑或（或者）
		*/

//三目操作符 ？：
//exp1? exp2: exp3
//exp1成立 ，exp2计算，整个表达式的结果是exp2的结果
//exp1不成立 ，exp3计算，整个表达式的结果是exp3的结果

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	/*if (a > b)
//		max = a; 
//	else
//		max = b;*/
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}