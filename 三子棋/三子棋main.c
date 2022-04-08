#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("************1.play************\n");
	printf("************0.exit************\n");
	printf("******************************\n");
}
void game()
{	
	//存储数据-二维数组
	char board[ROW][COL];
	//初始化棋盘-初始化空格
	csh(board,ROW,COL);
	//打印棋盘-打印数组内容
	dy(board,ROW,COL);
	//存储ret返回
	char ret = 0;
	//开始下棋
	while (1)
	{
		//玩家下棋
		wjxq(board, ROW, COL);
		dy(board, ROW, COL);
		ret=pdwin(board, ROW, COL);
		if (ret != 'c')
			break;
		//电脑走
		dnxq(board, ROW, COL);
		dy(board, ROW, COL);
		ret = pdwin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if(ret=='#')
	{	
		printf("电脑赢了!\n");
	} 
	else
	{
		printf("平局！\n");
	}
	dy(board, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0: printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}