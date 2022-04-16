//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	//下标引用操作符
//
//	int arr[] = { 1,2,3 };
//	printf("%d\n", arr[2]);
//
//}

//结构体
//创建自定义类型
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	int num = 10;
//	//结构体 
//	struct book b=
//	{
//		"C语言","46548654",55
//	};
//
//	struct book * pb = &b;
//	//结构体指针->变量名
//	printf("书名:%s\n", pb->name);
//	printf("书号:%s\n", pb->id);
//	printf("定价:%d\n", pb->price);
//
//	/*printf("书名:%s\n", (*pb).name);
//	printf("书号:%s\n", (*pb).id);
//	printf("定价:%d\n", (*pb).price);*/
//	
//	//printf("书名:%s\n", b.name);
//	//printf("书号:%s\n", b.id);
//	//printf("定价:%d\n", b.price);
//	return 0;
//}
//整形提升
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int C = 0xb6000000;
//	if	(a== 0xb6)
//		printf("a");
//	if  (b == 0xb600)
//		printf("b");
//	if (C == 0xb6000000)
//		printf("C");
//	return 0;
//}
 


		//函数调用与优先级，先调用后优先级

//为什么是12 呢？
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	return 0;
//}
//算后值不变
