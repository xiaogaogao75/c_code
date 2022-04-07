#include <stdio.h>	
/*
作用域和生命周期
局部变量的作用域：就是变量所在的局部范围
全局变量的作用域：整个工程  若同一个工程不同.c中需要声明一下即可调用全局变量——格式extern int 名字；
*/
//int a = 5;
//int main()
//{
//
//	printf("1=%d\n",a);
//	{
//		int b = 6;
//		printf("2=%d\n",a);
//		printf("3=%d\n",b);
//	}
//	return 0;
//}


/**/
//int main()
//{
	/*1.字面常量;
	3.14;
	10;
	'a';
	"asfdasf";*/

	/*2.const 修饰的常变量*/
	//int num = 10;//变量
	//num = 20;
	//printf("num=%d\n", num);

	//int arr[10] = { 0 }; //10个元素
	//const int n = 10;   //常变量
	//int	arr2[n] = { 0 };//n是变量，这里不行
	//return 0;

//}






	//3.#define 定义的标识符常量
#define MAX 10000
int	main()
{
	int n = MAX;
	printf("n=%d\n", n); 
	return 0;
}
