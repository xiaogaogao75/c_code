#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
			//初识指针
//int main()
//{
//
//	int a = 10;
//	printf("%p\n", &a);//%p用来打印地址
//	int* pa = &a;//pa用来存放地址的，在c语言中pa叫做指针变量
//	//*说明pa是指针变量
//	//int说明pa执行对象是int类型的
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//解引用操作----*pa就是通过pa里面的地址找到a
//
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(long long*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//
//	return 0;
//}

			//初识结构体]
			//结构体可以让c语言创建新的类型

//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct stu s={"张三",20,85.5};//结构体的创建与初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量，成员便令
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n",(*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//
//	return 0;
//}



//int  main()
//{
//	int age = 50;
//	if (age < 18)
//		printf("少年\n");
//	//else if (18 <= age < 26)
//	//	printf("青年\n");//打印出来时青年
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	return 0;
//}



//int main()
//{
//
//	int a = 0, b = 2;
//	if (a == 1)				//语句不成立下面的if跟else直接没用
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("hehe\n");//elsege你最近的if匹配
//	return 0;
//}
		
			//输入任意整数，判断奇偶

		
//int main()
//{
//	printf("请输入：");
//	int a ;
//	scanf_s("%d", &a);
//		
//		if (a % 2 == 1)
//			printf("奇数");
//		else
//			printf("偶数");
//	return 0;
//}
			

		/*输出1 - 100内的奇数*/
		//写法一

//int main()
//{
//	int a=0;
//	
//	for(a = 1; a <= 100; a++)
//	{
//		if (a%2==1)
//			printf("%d\n", a);
//		
//	}
//	return 0;
//}

		//写法二
		
//int main()
//{
//	int a = 0;
//
//	for (a = 1; a <= 100; a+=2)
//	{
//		/*if (a % 2 == 1)*/
//			printf("%d\n", a);
//
//	}
//	return 0;
//}


		/*swich分支表达式（多分支表达式）
		1.swich后面是整形表达式
		2.case后面需为整形常量
		3.case以break结束（按需要）
		4.嵌套swich时候看后面的数值再执行是哪一个语句
		*/

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}
