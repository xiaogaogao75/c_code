#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
				//打印1000到2000的瑞年
				/*规则
				1.能被4整除，且不被100整除
				2.能被400整除
				*/
//int main()
//{
//	int	y = 0;
//	int count = 0;
//	for ( y = 1000; y <= 2000; y++)
//	{
//		if (((y%4 == 0) && (y%100 != 0)) || (y%400 == 0))
//		{
//			printf("%d ",y);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

				//打印100-200之间的素数
				/*规则： 只能被1和被它本身整除
				*/

//int	main()
//{
//	int i = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		int	j = 0;
//		for ( j = 2; j <i ; j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (i==j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

			//goto 语句的使用
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//	//死循环
//	goto flag;
//	return 0;
//}



//#include <string.h>	
//#include <stdlib.h>

		/*关机程序
		只要运行起来，电脑在1分钟内关机，输入我是猪则取消
		shotdown -s -t 60		60s后关机
		shotdown -a			取消关机*/
//int	main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，电脑在1分钟内关机，输入我是猪则取消\n");
//	scanf_s("%s", input);
//	if (strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


