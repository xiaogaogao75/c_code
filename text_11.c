#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


			//猜数字游戏
			/*
			1.自动产生一个1-100的随机数
			2.猜数字
				a.猜对了，恭喜你，游戏结束
				b猜错了，告诉大还是小，继续猜，知道对
			3.游戏一直玩*/


//void	menu()
//{
//	printf("********************************\n");
//	printf("***********1.play***************\n");
//	printf("***********0.exit***************\n");
//}
//void	game()
//{
//	/*
//	1.先生成一个随机数
//	rand生成了0-32727之间的数字*/
//
//	int ret = rand()% 100 + 1;	//%100的余数是0-99然后+1，范围就是1-100；
//	/*printf("%d\n", ret);*/   //隐藏
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：>\n");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));		//随机生成不重复 srand需要整形
//	int input = 0;
//	do
//	{
//		
//		menu();
//		printf("请选择：>\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



